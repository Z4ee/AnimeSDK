#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A3A7D70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A3A7D60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A3A7D50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1A3A7D80)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1A3A7D40)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1A3A7D90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7610)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossSkillData_TypeDefinitionIndex = 78548;

	class TeamTowersBossSkillData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::System::UInt32 _SkillID_k__BackingField; // 0x40
		::System::UInt32 _VideoID_k__BackingField; // 0x44

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_SKILLID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSSKILLDATA_GET_VIDEOID_OFFSET))(this);
		}
	};
}
