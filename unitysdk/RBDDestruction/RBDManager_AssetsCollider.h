#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RBDDESTRUCTION_RBDMANAGER_ASSETSCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85A4A0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_AssetsCollider_TypeDefinitionIndex = 27125;

	class RBDManager_AssetsCollider : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* colliders; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER_ASSETSCOLLIDER__CTOR_OFFSET))(this);
		}
	};
}
