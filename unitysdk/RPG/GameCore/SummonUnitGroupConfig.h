#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventurePositionCheckConfig; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }

#define RPG_GAMECORE_SUMMONUNITGROUPCONFIG_METHOD_2_BAB8DF66DCC6D652_OFFSET UNITYSDK_OFFSET(0x17790A60)
#define RPG_GAMECORE_SUMMONUNITGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17790E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGroupConfig_TypeDefinitionIndex = 16174;

	class SummonUnitGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityPosAdaptionConfig* PositionAdpationConfig; // 0x10
		::RPG::GameCore::AdventurePositionCheckConfig* PositionCheckConfig; // 0x18
		::System::Boolean EnablePlatformMove; // 0x20
		::System::Boolean HideWhenGroundInvalid; // 0x21
		::System::Boolean DestroyWhenGroundInvalid; // 0x22
		::System::Boolean HideWhenMapRotation; // 0x23
		::System::Boolean HideWithSummoner; // 0x24
		::Il2CppArray<::RPG::GameCore::ELevelPerformanceType>* HideInPerformanceList; // 0x28
		::RPG::Client::GamePlayLockTarget LockTarget; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BAB8DF66DCC6D652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGROUPCONFIG_METHOD_2_BAB8DF66DCC6D652_OFFSET))(a1, a2);
		}
	};
}
