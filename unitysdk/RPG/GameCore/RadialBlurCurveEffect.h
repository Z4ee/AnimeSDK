#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RADIALBLURCURVEEFFECT_METHOD_3_438FBF522498970F_OFFSET UNITYSDK_OFFSET(0x1D193F90)
#define RPG_GAMECORE_RADIALBLURCURVEEFFECT_METHOD_3_4EC1D9D1A1AFCD93_OFFSET UNITYSDK_OFFSET(0x1D194090)
#define RPG_GAMECORE_RADIALBLURCURVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D194020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RadialBlurCurveEffect_TypeDefinitionIndex = 20022;

	class RadialBlurCurveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single BlurX; // 0x28
		::System::Single BlurY; // 0x2C
		::System::Single BlurRadius; // 0x30
		::System::Int32 Iteration; // 0x34
		::System::Single BlurStart; // 0x38
		::System::Single BlurFeather; // 0x3C
		::System::Boolean EnableDirectionBlur; // 0x40
		::System::Single Duration; // 0x44
		::System::String* CurveName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLURCURVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_438FBF522498970F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RadialBlurCurveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RadialBlurCurveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLURCURVEEFFECT_METHOD_3_438FBF522498970F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4EC1D9D1A1AFCD93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RadialBlurCurveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RadialBlurCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLURCURVEEFFECT_METHOD_3_4EC1D9D1A1AFCD93_OFFSET))(a1, a2);
		}
	};
}
