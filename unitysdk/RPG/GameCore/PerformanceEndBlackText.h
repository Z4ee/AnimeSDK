#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_METHOD_3_8D15C26E367C2907_OFFSET UNITYSDK_OFFSET(0x1D318BA0)
#define RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_METHOD_3_9F07040753EF1DFA_OFFSET UNITYSDK_OFFSET(0x1D318BF0)
#define RPG_GAMECORE_PERFORMANCEENDBLACKTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D318BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceEndBlackText_TypeDefinitionIndex = 21674;

	class PerformanceEndBlackText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TextEnabled; // 0x18
		::System::UInt32 TalkSentenceID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDBLACKTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D15C26E367C2907(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceEndBlackText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceEndBlackText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_METHOD_3_8D15C26E367C2907_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F07040753EF1DFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceEndBlackText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceEndBlackText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDBLACKTEXT_METHOD_3_9F07040753EF1DFA_OFFSET))(a1, a2);
		}
	};
}
