#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLERUNOUT_METHOD_3_DBAB9427723AB440_OFFSET UNITYSDK_OFFSET(0x17094660)
#define RPG_GAMECORE_CHIMERABATTLERUNOUT_METHOD_3_E1AE68D0C15291AE_OFFSET UNITYSDK_OFFSET(0x17092EA0)
#define RPG_GAMECORE_CHIMERABATTLERUNOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x17092E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleRunOut_TypeDefinitionIndex = 14572;

	class ChimeraBattleRunOut : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraBattleTargetEvaluator*>* Targets; // 0x18
		::System::Single TurnTime; // 0x20
		::System::Single RunTimeParam; // 0x24
		::System::Single TurnAngle; // 0x28
		::System::Single TurnRatio; // 0x2C
		::System::Single SpeedParam; // 0x30
		::System::Single Interval; // 0x34
		::System::Single FillPositionTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLERUNOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DBAB9427723AB440(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleRunOut*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleRunOut*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLERUNOUT_METHOD_3_DBAB9427723AB440_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1AE68D0C15291AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleRunOut* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleRunOut*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLERUNOUT_METHOD_3_E1AE68D0C15291AE_OFFSET))(a1, a2);
		}
	};
}
