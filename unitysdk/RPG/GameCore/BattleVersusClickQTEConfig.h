#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEBaseConfig.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_47CE543323C29D08_OFFSET UNITYSDK_OFFSET(0x16FE37B0)
#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_89FD99B9A3F420CD_OFFSET UNITYSDK_OFFSET(0x16FDFC10)
#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDFBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleVersusClickQTEConfig_TypeDefinitionIndex = 21577;

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

		static ::System::Void Method_3_47CE543323C29D08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleVersusClickQTEConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleVersusClickQTEConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_47CE543323C29D08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89FD99B9A3F420CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleVersusClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleVersusClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_METHOD_3_89FD99B9A3F420CD_OFFSET))(a1, a2);
		}
	};
}
