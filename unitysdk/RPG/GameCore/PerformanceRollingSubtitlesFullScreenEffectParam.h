#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM_METHOD_2_225BA76B1686C76A_OFFSET UNITYSDK_OFFSET(0x1749E210)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1749E3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesFullScreenEffectParam_TypeDefinitionIndex = 22459;

	class PerformanceRollingSubtitlesFullScreenEffectParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ResidenceTime; // 0x10
		::System::Single IntervalTime; // 0x14
		::System::Single FadeInDuration; // 0x18
		::System::Single FadeOutDuration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_225BA76B1686C76A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESFULLSCREENEFFECTPARAM_METHOD_2_225BA76B1686C76A_OFFSET))(a1, a2);
		}
	};
}
