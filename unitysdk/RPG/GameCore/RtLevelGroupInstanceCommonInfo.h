#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/RPG/GameCore/GroupSaveType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupLoadSide.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class LevelGroupSystemUnlockConditionSet; }

#define RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO_METHOD_2_5937CFCEE1B52CDF_OFFSET UNITYSDK_OFFSET(0x1B7667C0)
#define RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B766B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInstanceCommonInfo_TypeDefinitionIndex = 16649;

	class RtLevelGroupInstanceCommonInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsDelete; // 0x10
		::RPG::GameCore::GroupCategory Category; // 0x14
		::RPG::GameCore::GroupSaveType SaveType; // 0x18
		::System::Boolean IsHoyoGroup; // 0x1C
		::RPG::GameCore::LevelGroupLoadSide LoadSide; // 0x20
		::System::Boolean LoadOnInitial; // 0x24
		::System::UInt32 GroupRefreshID; // 0x28
		::RPG::GameCore::LevelGroupMissionConditionSet* UnloadCondition; // 0x30
		::RPG::GameCore::LevelGroupMissionConditionSet* ForceUnloadCondition; // 0x38
		::RPG::GameCore::LevelGroupSystemUnlockConditionSet* SystemUnlockCondition; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5937CFCEE1B52CDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInstanceCommonInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCECOMMONINFO_METHOD_2_5937CFCEE1B52CDF_OFFSET))(a1, a2);
		}
	};
}
