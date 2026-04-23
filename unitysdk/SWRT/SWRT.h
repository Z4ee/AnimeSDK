#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class SWRTAsset;

#define SWRT_SWRT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1818AEE0)
#define SWRT_SWRT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1818ADE0)
#define SWRT_SWRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1818AFE0)

namespace SWRT
{
	inline static constexpr unsigned int SWRT_TypeDefinitionIndex = 34898;

	class SWRT : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SWRTAsset* Asset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRT_ONDISABLE_OFFSET))(this);
		}
	};
}
