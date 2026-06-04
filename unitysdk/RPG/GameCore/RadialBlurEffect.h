#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RADIALBLUREFFECT_METHOD_3_D01B3431BA9AC6C1_OFFSET UNITYSDK_OFFSET(0x19AA9A90)
#define RPG_GAMECORE_RADIALBLUREFFECT_METHOD_3_E3C802F5AAEE10D2_OFFSET UNITYSDK_OFFSET(0x19AA9BB0)
#define RPG_GAMECORE_RADIALBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA9B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RadialBlurEffect_TypeDefinitionIndex = 19119;

	class RadialBlurEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean Active; // 0x28
		::System::Single Duration; // 0x2C
		::System::Single BlurX; // 0x30
		::System::Single BlurY; // 0x34
		::System::Single BlurRadius; // 0x38
		::System::Int32 Iteration; // 0x3C
		::System::Single BlurStart; // 0x40
		::System::Single BlurFeather; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLUREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D01B3431BA9AC6C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RadialBlurEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RadialBlurEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLUREFFECT_METHOD_3_D01B3431BA9AC6C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E3C802F5AAEE10D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RadialBlurEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLUREFFECT_METHOD_3_E3C802F5AAEE10D2_OFFSET))(a1, a2);
		}
	};
}
