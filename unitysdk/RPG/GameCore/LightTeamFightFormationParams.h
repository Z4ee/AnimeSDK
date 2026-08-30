#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationZOffsetList; }

#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS_METHOD_2_CE7057E32D75805A_OFFSET UNITYSDK_OFFSET(0x1D1F1FB0)
#define RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F23F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightTeamFightFormationParams_TypeDefinitionIndex = 16401;

	class LightTeamFightFormationParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IntervalMin; // 0x10
		::System::Single IntervalMax; // 0x14
		::System::Single ServantIntervalBias; // 0x18
		::System::Single TeamWidthRatioFactor; // 0x1C
		::System::Single WidthRatioForEnemy; // 0x20
		::System::Single WidthConstantForEnemy; // 0x24
		::System::Single LeftAngle; // 0x28
		::System::Single LeftOffsetMax; // 0x2C
		::System::Single RightAngle; // 0x30
		::System::Single RightAngleOffsetRatio; // 0x34
		::System::Single RightDirAdditiveDisRatioForEnemy; // 0x38
		::Il2CppArray<::RPG::GameCore::FormationZOffsetList*>* ZOffsetByIndex; // 0x40
		::System::Single ComfortZoneWidth; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CE7057E32D75805A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LightTeamFightFormationParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LightTeamFightFormationParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTTEAMFIGHTFORMATIONPARAMS_METHOD_2_CE7057E32D75805A_OFFSET))(a1, a2);
		}
	};
}
