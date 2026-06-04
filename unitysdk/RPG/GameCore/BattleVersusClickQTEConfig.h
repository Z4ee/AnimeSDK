#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEBaseConfig.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_3DCD64F915F4DC39_OFFSET UNITYSDK_OFFSET(0x194D6990)
#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_B2CA654D9CFE5A33_OFFSET UNITYSDK_OFFSET(0x194DA5B0)
#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194D6930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleVersusClickQTEConfig_TypeDefinitionIndex = 22072;

	class BattleVersusClickQTEConfig : public ::RPG::GameCore::BattleQTEBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TotalProgress; // 0x38
		::RPG::GameCore::DynamicFloat* InitializedProgress; // 0x40
		::RPG::GameCore::DynamicFloat* IncreaseProgressPerClick; // 0x48
		::RPG::GameCore::FloatCurve* IncreaseProgressPerClickCurve; // 0x50
		::RPG::GameCore::DynamicFloat* IncreaseProgressLength; // 0x58
		::RPG::GameCore::FloatCurve* AutoIncreaseProgressCurve; // 0x60
		::RPG::GameCore::FloatCurve* AutoDecreaseProgressCurve; // 0x68
		::RPG::GameCore::DynamicString* SyncDynamicKey; // 0x70
		::RPG::GameCore::DynamicValueContextScope SyncContextScope; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2CA654D9CFE5A33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleVersusClickQTEConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleVersusClickQTEConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_B2CA654D9CFE5A33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3DCD64F915F4DC39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleVersusClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleVersusClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_3DCD64F915F4DC39_OFFSET))(a1, a2);
		}
	};
}
