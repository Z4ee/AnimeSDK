#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GroupWeightPair.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SliderTemplate.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x80150)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_ED65AE7582736594_1_OFFSET UNITYSDK_OFFSET(0x80140)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x80130)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_GenerateConfig_TypeDefinitionIndex = 58078;

	struct alignas(8) LoopGenerateBehavior_GenerateConfig
	{
		::System::Single Speed; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_GroupWeightPair>* GroupWeightPairs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_SliderTemplate>* SliderTemplates; // 0x20

		::System::Void Method_2_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_ED65AE7582736594_OFFSET))(this);
		}

		::System::Void Method_2_ED65AE7582736594_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_ED65AE7582736594_1_OFFSET))(this);
		}

		::System::Void Method_2_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
		}
	};
}
