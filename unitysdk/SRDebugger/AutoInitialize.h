#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RuntimeInitializeLoadType.h"

#define SRDEBUGGER_AUTOINITIALIZE_ONLOADBEFORESCENE_OFFSET UNITYSDK_OFFSET(0x1E66E720)
#define SRDEBUGGER_AUTOINITIALIZE_ONLOAD_OFFSET UNITYSDK_OFFSET(0x1E66E760)

namespace SRDebugger
{
	inline static constexpr unsigned int AutoInitialize_TypeDefinitionIndex = 37255;

	class AutoInitialize : public ::System::Object
	{
	public:
		// static const ::UnityEngine::RuntimeInitializeLoadType InitializeLoadType; // 0x0

		static ::System::Void OnLoadBeforeScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_AUTOINITIALIZE_ONLOADBEFORESCENE_OFFSET))();
		}

		static ::System::Void OnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_AUTOINITIALIZE_ONLOAD_OFFSET))();
		}
	};
}
