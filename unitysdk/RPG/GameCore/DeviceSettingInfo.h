#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FrameTimeBudgetInfo; }
namespace RPG::GameCore { class GameObjectPoolSetting; }

#define RPG_GAMECORE_DEVICESETTINGINFO_METHOD_2_BB2755C35E17CDD0_OFFSET UNITYSDK_OFFSET(0x171580F0)
#define RPG_GAMECORE_DEVICESETTINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17158300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingInfo_TypeDefinitionIndex = 15073;

	class DeviceSettingInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GameObjectPoolSetting* GoPoolSetting; // 0x10
		::RPG::GameCore::FrameTimeBudgetInfo* FrameTimeBudget; // 0x18
		::System::Boolean StreamingEnable; // 0x20
		::System::Boolean ChessRogueEnterBattleUnloadMap; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BB2755C35E17CDD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceSettingInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceSettingInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGINFO_METHOD_2_BB2755C35E17CDD0_OFFSET))(a1, a2);
		}
	};
}
