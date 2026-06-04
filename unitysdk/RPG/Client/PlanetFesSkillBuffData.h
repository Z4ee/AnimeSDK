#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesSkillTreeRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC47DB50)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xC47E2C0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_COST_OFFSET UNITYSDK_OFFSET(0xC47E250)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_HASNEXTBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC47D8E0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0xC47E570)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC47DCB0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xC47E130)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVELCOSTS_OFFSET UNITYSDK_OFFSET(0xC47E1A0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVELSKILLS_OFFSET UNITYSDK_OFFSET(0xC47E5E0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC47E230)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC47E650)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC47E4F0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NEXTBUFFID_OFFSET UNITYSDK_OFFSET(0xC47E260)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_NEXTBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xC47E440)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC47E490)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xC47E210)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_UPGRADECOST_OFFSET UNITYSDK_OFFSET(0xC47D8F0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_SETNEXTBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC47DC20)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC47E240)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xC47E220)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC47DEA0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDATA__GETCOST_OFFSET UNITYSDK_OFFSET(0xC47DEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkillBuffData_TypeDefinitionIndex = 62313;

	class PlanetFesSkillBuffData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSkillBuffData* _NextBuffData; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x18
		::System::UInt32 _SkillID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkillBuffData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PlanetFesSkillBuffData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetNextBuffData(::RPG::Client::PlanetFesSkillBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_SETNEXTBUFFDATA_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA__GETCOST_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDATA_SET_LEVEL_OFFSET))(this, a1);
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
