#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETAILEADWAY_METHOD_3_16D819DE94CABE97_OFFSET UNITYSDK_OFFSET(0x1CB9F290)
#define RPG_GAMECORE_ADVSETAILEADWAY_METHOD_3_3BEB863D8BFED65E_OFFSET UNITYSDK_OFFSET(0x1CB9F330)
#define RPG_GAMECORE_ADVSETAILEADWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9F2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetAILeadWay_TypeDefinitionIndex = 21952;

	class AdvSetAILeadWay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::System::UInt32 PathwayGroupID; // 0x28
		::System::UInt32 PathwayID; // 0x2C
		::System::Int32 StartIndex; // 0x30
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x34
		::System::Boolean ForbidTickLod; // 0x38
		::System::Single CenterOffset; // 0x3C
		::System::Single SpeedScale; // 0x40
		::System::Boolean WaitForPlayer; // 0x44
		::System::Single StartWaitDistance; // 0x48
		::System::Single StopWaitDistance; // 0x4C
		::System::Boolean ForcePlayerWalk; // 0x50
		::System::Single StartWalkDistance; // 0x54
		::System::Single EndWalkDistance; // 0x58
		::System::Boolean OverrideOverStepRadius; // 0x5C
		::System::Single OverStepRadius; // 0x60
		::System::Boolean OverrideRepathTime; // 0x64
		::System::Single RepathTime; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReach; // 0x70
		::Il2CppArray<::RPG::MVector3>* PathOffset; // 0x78
		::System::Boolean MoveWhenPlayerMove; // 0x80
		::System::Boolean UseNavmeshOnly; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAILEADWAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16D819DE94CABE97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAILeadWay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAILeadWay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAILEADWAY_METHOD_3_16D819DE94CABE97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3BEB863D8BFED65E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAILeadWay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAILeadWay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAILEADWAY_METHOD_3_3BEB863D8BFED65E_OFFSET))(a1, a2);
		}
	};
}
