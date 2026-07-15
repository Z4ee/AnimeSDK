#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace RPG::CustomRP { class CaptureScene; }

#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1781D560)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS13_0___CAPTURESCENEOUTPUTCOROUTINE_B__0_OFFSET UNITYSDK_OFFSET(0x1781D570)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___c__DisplayClass13_0_TypeDefinitionIndex = 36055;

	class CaptureScene___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::CaptureScene* __4__this; // 0x10
		::System::Boolean readbackEnded; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __CaptureSceneOutputCoroutine_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS13_0___CAPTURESCENEOUTPUTCOROUTINE_B__0_OFFSET))(this, a1);
		}
	};
}
