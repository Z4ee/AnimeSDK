#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CUSTOMRP_POSMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEDD00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int POSMParams_TypeDefinitionIndex = 35352;

	class POSMParams : public ::System::Object
	{
	public:
		::UnityEngine::Matrix4x4 worldToBounds; // 0x10
		::UnityEngine::Matrix4x4 oobbDelegateDrawMatrix; // 0x50
		::UnityEngine::Vector3 forward; // 0x90
		::UnityEngine::Matrix4x4 localToWorld; // 0x9C
		::UnityEngine::Matrix4x4 worldToLocal; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_POSMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
