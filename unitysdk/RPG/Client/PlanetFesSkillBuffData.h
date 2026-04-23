#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesSkillTreeRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAD3FE40)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xAD405D0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_COST_OFFSET UNITYSDK_OFFSET(0xAD40560)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_HASNEXTBUFFDATA_OFFSET UNITYSDK_OFFSET(0xAD3FBF0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0xAD40890)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xAD3FFA0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xAD40440)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVELCOSTS_OFFSET UNITYSDK_OFFSET(0xAD404B0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVELSKILLS_OFFSET UNITYSDK_OFFSET(0xAD40900)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAD40540)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xAD40970)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAD40810)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NEXTBUFFID_OFFSET UNITYSDK_OFFSET(0xAD40570)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NEXTBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xAD40760)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAD407B0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xAD40520)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_UPGRADECOST_OFFSET UNITYSDK_OFFSET(0xAD3FC00)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_SETNEXTBUFFDATA_OFFSET UNITYSDK_OFFSET(0xAD3FF10)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAD40550)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xAD40530)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD40180)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA__GETCOST_OFFSET UNITYSDK_OFFSET(0xAD40190)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkillBuffData_TypeDefinitionIndex = 61389;

	class PlanetFesSkillBuffData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSkillBuffData* _NextBuffData; // 0x10
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkillBuffData* Create(::System::UInt32 skillID, ::System::UInt32 level)
		{
			return ((::RPG::Client::PlanetFesSkillBuffData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_CREATE_OFFSET))(skillID, level);
		}

		::System::Void SetNextBuffData(::RPG::Client::PlanetFesSkillBuffData* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_SETNEXTBUFFDATA_OFFSET))(this, buffData);
		}

		::System::UInt32 _GetCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA__GETCOST_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_SKILLID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_UpgradeCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_UPGRADECOST_OFFSET))(this);
		}

		::System::UInt32 get_NextBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NEXTBUFFID_OFFSET))(this);
		}

		::System::UInt32 get_NextBuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NEXTBUFFLEVEL_OFFSET))(this);
		}

		::System::Boolean get_HasNextBuffData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_HASNEXTBUFFDATA_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesSkillTreeRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesSkillTreeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ICON_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LevelSkills()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVELSKILLS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LevelCosts()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVELCOSTS_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_COST_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ISMAXLEVEL_OFFSET))(this);
		}
	};
}
