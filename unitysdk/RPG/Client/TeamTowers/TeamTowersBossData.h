#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersBossSkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSID_OFFSET UNITYSDK_OFFSET(0xE1A9E10)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xE1A9E80)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0xE1A9E70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BUBBLEGROUPID_OFFSET UNITYSDK_OFFSET(0xE1A9E60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE1A9E30)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE1A9E40)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE1A9E20)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xE1A9E50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A9950)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossData_TypeDefinitionIndex = 78548;

	class TeamTowersBossData : public ::System::Object
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersBossSkillData*>* _BossSkillDataList_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x28
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::UInt32 _BossSkillGroupID_k__BackingField; // 0x48
		::System::UInt32 _BubbleGroupID_k__BackingField; // 0x4C
		::System::UInt32 _BossID_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_BossID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_BubbleGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BUBBLEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_BossSkillGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLGROUPID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersBossSkillData*>* get_BossSkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersBossSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLDATALIST_OFFSET))(this);
		}
	};
}
