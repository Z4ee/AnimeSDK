#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GroupWeightPair.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SliderTemplate.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x13D6D0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x13D6C0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x13D6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_GenerateConfig_TypeDefinitionIndex = 66292;

	struct alignas(8) LoopGenerateBehavior_GenerateConfig
	{
		::System::Single Speed; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_GroupWeightPair>* GroupWeightPairs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_SliderTemplate>* SliderTemplates; // 0x20

		::System::Void Method_2_C1D3BDE2A17F5C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
		}

		::System::Void Method_2_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Void Method_2_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
		}
	};
}
