#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0EAE4D266094A8C4;
class Class_1_4BC858D7C27E10ED_5;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA158080)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xA158270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA158250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA158230)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA158290)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xA158260)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA158240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA158220)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPTitleData_TypeDefinitionIndex = 69917;

	class DiceCombatV2PvPTitleData : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::Class_1_0EAE4D266094A8C4* _Row; // 0x18
		::System::String* _Name_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* Create(::Class_1_4BC858D7C27E10ED_5* titleData)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*(*)(::Class_1_4BC858D7C27E10ED_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_CREATE_OFFSET))(titleData);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPTITLEDATA_SET_DESC_OFFSET))(this, value);
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
