#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LENSGLITCHEFFECT_METHOD_3_1D87B081ACB017BB_OFFSET UNITYSDK_OFFSET(0x1B02BE80)
#define RPG_GAMECORE_LENSGLITCHEFFECT_METHOD_3_DD2DCA8FDC6DCFFF_OFFSET UNITYSDK_OFFSET(0x1B02BF10)
#define RPG_GAMECORE_LENSGLITCHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02BEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LensGlitchEffect_TypeDefinitionIndex = 21582;

	class LensGlitchEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Boolean IsAttachMazeMainPage; // 0x19
		::RPG::MVector2 RainDropTilling; // 0x1C
		::System::Single RainDropVelocity; // 0x24
		::System::Single RainDropCount; // 0x28
		::System::Single RainDropStrength; // 0x2C
		::RPG::MVector2 RainMaskCenter; // 0x30
		::System::Single RainMaskRadius; // 0x38
		::System::Single RainMaskBlur; // 0x3C
		::System::Single StartRainDropCount; // 0x40
		::System::Single StartRainDropVelocity; // 0x44
		::System::Single FadeDuration; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSGLITCHEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D87B081ACB017BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LensGlitchEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LensGlitchEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSGLITCHEFFECT_METHOD_3_1D87B081ACB017BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD2DCA8FDC6DCFFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LensGlitchEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSGLITCHEFFECT_METHOD_3_DD2DCA8FDC6DCFFF_OFFSET))(a1, a2);
		}
	};
}
