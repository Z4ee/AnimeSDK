#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM_METHOD_2_8111A3DC08D35B2B_OFFSET UNITYSDK_OFFSET(0x1B4B5080)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B51B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesScrollEffectParam_TypeDefinitionIndex = 23546;

	class PerformanceRollingSubtitlesScrollEffectParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IntervalTime; // 0x10
		::System::Single ScrollSpeed; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8111A3DC08D35B2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESSCROLLEFFECTPARAM_METHOD_2_8111A3DC08D35B2B_OFFSET))(a1, a2);
		}
	};
}
