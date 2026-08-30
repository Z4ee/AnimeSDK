#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EPropCurveMoveType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropCurveMoveStartMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVESTART_METHOD_3_42DD3519273842F4_OFFSET UNITYSDK_OFFSET(0x1D361F00)
#define RPG_GAMECORE_PROPCURVEMOVESTART_METHOD_3_A1320943A61CB818_OFFSET UNITYSDK_OFFSET(0x1D361D80)
#define RPG_GAMECORE_PROPCURVEMOVESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D361DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStart_TypeDefinitionIndex = 20770;

	class PropCurveMoveStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropCurveMoveStartMode* MoveMode; // 0x20
		::RPG::GameCore::EPropCurveMoveType MoveType; // 0x28
		::RPG::GameCore::DynamicFloat* MoveTypeValue; // 0x30
		::RPG::GameCore::DynamicFloat* InterpHalfTime; // 0x38
		::RPG::GameCore::DynamicFloat* Acceleration; // 0x40
		::RPG::GameCore::DynamicFloat* Deceleration; // 0x48
		::RPG::MVector3 CurveRotationOffset; // 0x50
		::System::Boolean UseCurveGORotation; // 0x5C
		::System::Boolean UseCurveRotationYaw; // 0x5D
		::System::Boolean UseCurveRotationRoll; // 0x5E
		::System::Boolean UseCurveRotationPitch; // 0x5F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A1320943A61CB818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTART_METHOD_3_A1320943A61CB818_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42DD3519273842F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTART_METHOD_3_42DD3519273842F4_OFFSET))(a1, a2);
		}
	};
}
