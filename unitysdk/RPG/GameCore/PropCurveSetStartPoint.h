#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVESETSTARTPOINT_METHOD_3_00394310626B1888_OFFSET UNITYSDK_OFFSET(0x17519220)
#define RPG_GAMECORE_PROPCURVESETSTARTPOINT_METHOD_3_926E220588F59CA2_OFFSET UNITYSDK_OFFSET(0x17519120)
#define RPG_GAMECORE_PROPCURVESETSTARTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x175191B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveSetStartPoint_TypeDefinitionIndex = 19327;

	class PropCurveSetStartPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::RPG::GameCore::DynamicString* CurvePointIndex; // 0x28
		::RPG::GameCore::DynamicFloat* Duration; // 0x30
		::RPG::MVector3 CurveRotationOffset; // 0x38
		::System::Boolean Positive; // 0x44
		::System::Boolean DurationLerp; // 0x45
		::System::Boolean UseCurveGORotation; // 0x46
		::System::Boolean UseCurveRotationYaw; // 0x47
		::System::Boolean UseCurveRotationRoll; // 0x48
		::System::Boolean UseCurveRotationPitch; // 0x49
		::System::Boolean WaitFinish; // 0x4A
		::System::Boolean ForceTick; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVESETSTARTPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_926E220588F59CA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveSetStartPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveSetStartPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVESETSTARTPOINT_METHOD_3_926E220588F59CA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00394310626B1888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveSetStartPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveSetStartPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVESETSTARTPOINT_METHOD_3_00394310626B1888_OFFSET))(a1, a2);
		}
	};
}
