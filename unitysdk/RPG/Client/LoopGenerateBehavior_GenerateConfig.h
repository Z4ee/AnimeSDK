#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GroupWeightPair.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SegmentType.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SliderTemplate.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x3AE3040)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_7723535EA7355BCB_OFFSET UNITYSDK_OFFSET(0x186451F0)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x3AE3060)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x3AE3050)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_GenerateConfig_TypeDefinitionIndex = 70872;

	struct alignas(8) LoopGenerateBehavior_GenerateConfig
	{
		::RPG::Client::LoopGenerateBehavior_SegmentType SegmentType; // 0x10
		::System::Single EndpointOffset; // 0x14
		::System::Single Speed; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_GroupWeightPair>* GroupWeightPairs; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_SliderTemplate>* SliderTemplates; // 0x28

		::System::Void Method_2_07BB45288DFF8852()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_07BB45288DFF8852_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Bounds Method_2_7723535EA7355BCB(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_7723535EA7355BCB_OFFSET))(a1);
		}
		*/

		::System::Void Method_2_B00A1D822E6F5C31()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
		}

		::System::Void Method_2_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_METHOD_2_937F8473216A3162_OFFSET))(this);
		}
	};
}
