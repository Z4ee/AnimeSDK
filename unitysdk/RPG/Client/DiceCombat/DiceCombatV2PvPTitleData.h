#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0EAE4D266094A8C4;
class Class_1_F487A56015EDF324;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8BE330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x1B8BE520)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B8BE500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8BE4E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B8BE570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1B8BE510)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8BE4F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BE4D0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPTitleData_TypeDefinitionIndex = 75678;

	class DiceCombatV2PvPTitleData : public ::System::Object
	{
	public:
		::Class_1_0EAE4D266094A8C4* _Row; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::String* _Desc_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* Create(::Class_1_F487A56015EDF324* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::Class_1_F487A56015EDF324*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_BgColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_BGCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_PRIORITY_OFFSET))(this);
		}
	};
}
