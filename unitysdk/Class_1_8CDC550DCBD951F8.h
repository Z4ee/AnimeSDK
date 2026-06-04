#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define CLASS_1_8CDC550DCBD951F8_GET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x136D7200)
#define CLASS_1_8CDC550DCBD951F8_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0x136D71F0)
#define CLASS_1_8CDC550DCBD951F8_SET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x136D7210)
#define CLASS_1_8CDC550DCBD951F8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x136D7040)
#define CLASS_1_8CDC550DCBD951F8_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x136D70E0)
#define CLASS_1_8CDC550DCBD951F8__CTOR_OFFSET UNITYSDK_OFFSET(0x136D7030)
#define CLASS_1_8CDC550DCBD951F8___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x136D7220)

inline static constexpr unsigned int Class_1_8CDC550DCBD951F8_TypeDefinitionIndex = 62686;

class Class_1_8CDC550DCBD951F8 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10
	::System::Boolean _IsFromCardWash_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::Enum_3_63BCB6C405BA8A1D_2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::Enum_3_63BCB6C405BA8A1D_2))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void set_IsFromCardWash(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8_SET_ISFROMCARDWASH_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
