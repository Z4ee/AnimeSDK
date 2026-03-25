#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define CLASS_1_8CDC550DCBD951F8_GET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x8D1B440)
#define CLASS_1_8CDC550DCBD951F8_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0x8D1B430)
#define CLASS_1_8CDC550DCBD951F8_SET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x8D1B450)
#define CLASS_1_8CDC550DCBD951F8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D1B300)
#define CLASS_1_8CDC550DCBD951F8_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x8D1B3A0)
#define CLASS_1_8CDC550DCBD951F8__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1B2F0)
#define CLASS_1_8CDC550DCBD951F8___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D1B460)

inline static constexpr unsigned int Class_1_8CDC550DCBD951F8_TypeDefinitionIndex = 54565;

class Class_1_8CDC550DCBD951F8 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10
	::System::Boolean _IsFromCardWash_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::Enum_3_63BCB6C405BA8A1D_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::Enum_3_63BCB6C405BA8A1D_1))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCard()
	{
		return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8_GET_ROOMCARD_OFFSET))(this);
	}

	::System::Boolean get_IsFromCardWash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8_GET_ISFROMCARDWASH_OFFSET))(this);
	}

	::System::Void set_IsFromCardWash(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8_SET_ISFROMCARDWASH_OFFSET))(this, value);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
