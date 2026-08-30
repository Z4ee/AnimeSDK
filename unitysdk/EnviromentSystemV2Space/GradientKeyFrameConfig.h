#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }

#define ENVIROMENTSYSTEMV2SPACE_GRADIENTKEYFRAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x106E7FD0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int GradientKeyFrameConfig_TypeDefinitionIndex = 49906;

	class GradientKeyFrameConfig : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::UnityEngine::Gradient* gradient; // 0x18

		::System::Void _ctor(::System::Single a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_GRADIENTKEYFRAMECONFIG__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
