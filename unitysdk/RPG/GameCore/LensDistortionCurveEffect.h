#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_METHOD_3_C76B190E930FE197_OFFSET UNITYSDK_OFFSET(0x1D1C7A20)
#define RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_METHOD_3_EC7E856D8A43F95E_OFFSET UNITYSDK_OFFSET(0x1D1C7A90)
#define RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LensDistortionCurveEffect_TypeDefinitionIndex = 20023;

	class LensDistortionCurveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Single XMultiplier; // 0x1C
		::System::Single YMultiplier; // 0x20
		::System::Single Intensity; // 0x24
		::System::Single Scale; // 0x28
		::System::String* XCurvePath; // 0x30
		::System::String* YCurvePath; // 0x38
		::System::String* IntensityCurvePath; // 0x40
		::System::String* ScaleCurvePath; // 0x48
		::System::Single Duration; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C76B190E930FE197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LensDistortionCurveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LensDistortionCurveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_METHOD_3_C76B190E930FE197_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC7E856D8A43F95E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LensDistortionCurveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_METHOD_3_EC7E856D8A43F95E_OFFSET))(a1, a2);
		}
	};
}
