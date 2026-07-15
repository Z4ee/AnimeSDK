#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

#define SRF_UI_SRRETINASCALER_APPLYSCALING_OFFSET UNITYSDK_OFFSET(0x1CEDD790)
#define SRF_UI_SRRETINASCALER_START_OFFSET UNITYSDK_OFFSET(0x1CEDD780)
#define SRF_UI_SRRETINASCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDD7A0)

namespace SRF::UI
{
	inline static constexpr unsigned int SRRetinaScaler_TypeDefinitionIndex = 33956;

	class SRRetinaScaler : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::Single _lastDpi; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRRETINASCALER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRRETINASCALER_START_OFFSET))(this);
		}

		::System::Void ApplyScaling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRRETINASCALER_APPLYSCALING_OFFSET))(this);
		}
	};
}
