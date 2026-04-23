#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xADBAF80)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_UPDATECANVASSCALEACCORDINGTOSCREENRATIO_OFFSET UNITYSDK_OFFSET(0xADB2F60)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0xADBB0B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBillboardCanvasAdaptingScaler_TypeDefinitionIndex = 71963;

	class ChimeraBillboardCanvasAdaptingScaler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _CanvasScale16X9; // 0x18
		::System::Single _CanvasScale4X3; // 0x1C
		::System::Boolean _ShouldInterpolate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER__CTOR_OFFSET))(this);
		}

		::System::Single Method_5_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_METHOD_5_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Void UpdateCanvasScaleAccordingToScreenRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCANVASADAPTINGSCALER_UPDATECANVASSCALEACCORDINGTOSCREENRATIO_OFFSET))(this);
		}
	};
}
