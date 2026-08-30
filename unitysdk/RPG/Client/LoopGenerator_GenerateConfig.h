#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerator_GroupWeightPair.h"
#include "unitysdk/RPG/Client/LoopGenerator_SliderTemplate.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x3AAB7B0)
#define RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x3AAB7A0)
#define RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x3AAB790)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_GenerateConfig_TypeDefinitionIndex = 72892;

	struct alignas(8) LoopGenerator_GenerateConfig
	{
		::System::Single Speed; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_GroupWeightPair>* GroupWeightPairs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerator_SliderTemplate>* SliderTemplates; // 0x20

		::System::Void Method_2_C1D3BDE2A17F5C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
		}

		::System::Void Method_2_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_METHOD_2_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Void Method_2_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GENERATECONFIG_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
		}
	};
}
