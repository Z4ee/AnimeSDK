#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define CLASS_1_8CDC550DCBD951F8_GET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x179AEA60)
#define CLASS_1_8CDC550DCBD951F8_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0x179AEA50)
#define CLASS_1_8CDC550DCBD951F8_SET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x179AEA70)
#define CLASS_1_8CDC550DCBD951F8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179AE8D0)
#define CLASS_1_8CDC550DCBD951F8_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x179AE970)
#define CLASS_1_8CDC550DCBD951F8__CTOR_OFFSET UNITYSDK_OFFSET(0x179AE8C0)

inline static constexpr unsigned int Class_1_8CDC550DCBD951F8_TypeDefinitionIndex = 67045;

class Class_1_8CDC550DCBD951F8 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10
	::System::Boolean _IsFromCardWash_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::Enum_3_63BCB6C405BA8A1D_3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::Enum_3_63BCB6C405BA8A1D_3))((::PBYTE)hIl2Cpp + CLASS_1_8CDC550DCBD951F8__CTOR_OFFSET))(this, a1, a2);
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
};
