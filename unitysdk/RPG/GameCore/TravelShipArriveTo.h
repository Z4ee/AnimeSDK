#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRAVELSHIPARRIVETO_METHOD_3_0BAAD1472C48C136_OFFSET UNITYSDK_OFFSET(0x1B03E210)
#define RPG_GAMECORE_TRAVELSHIPARRIVETO_METHOD_3_3773AF254CEA5AA8_OFFSET UNITYSDK_OFFSET(0x1B03E150)
#define RPG_GAMECORE_TRAVELSHIPARRIVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B03E1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipArriveTo_TypeDefinitionIndex = 20186;

	class TravelShipArriveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::RPG::MVector3 CurveRotationOffset; // 0x30
		::System::Boolean UseCurveRotationYaw; // 0x3C
		::System::Boolean UseCurveRotationRoll; // 0x3D
		::System::Boolean UseCurveRotationPitch; // 0x3E
		::System::Boolean ForceTick; // 0x3F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPARRIVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3773AF254CEA5AA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipArriveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipArriveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPARRIVETO_METHOD_3_3773AF254CEA5AA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BAAD1472C48C136(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipArriveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipArriveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPARRIVETO_METHOD_3_0BAAD1472C48C136_OFFSET))(a1, a2);
		}
	};
}
