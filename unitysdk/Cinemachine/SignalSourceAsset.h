#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_SIGNALSOURCEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E74F760)

namespace Cinemachine
{
	inline static constexpr unsigned int SignalSourceAsset_TypeDefinitionIndex = 34154;

	class SignalSourceAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SIGNALSOURCEASSET__CTOR_OFFSET))(this);
		}
	};
}
