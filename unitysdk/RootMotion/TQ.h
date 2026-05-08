#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_TQ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB8E930)
#define ROOTMOTION_TQ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8E920)

namespace RootMotion
{
	inline static constexpr unsigned int TQ_TypeDefinitionIndex = 36513;

	class TQ : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion q; // 0x10
		::UnityEngine::Vector3 t; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_TQ__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 translation, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_TQ__CTOR_1_OFFSET))(this, translation, rotation);
		}
	};
}
