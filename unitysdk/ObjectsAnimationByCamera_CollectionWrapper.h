#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define OBJECTSANIMATIONBYCAMERA_COLLECTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16827310)

inline static constexpr unsigned int ObjectsAnimationByCamera_CollectionWrapper_TypeDefinitionIndex = 75784;

class ObjectsAnimationByCamera_CollectionWrapper : public ::System::Object
{
public:
	::UnityEngine::GameObject* obj; // 0x10
	::UnityEngine::Vector3 originalPosition; // 0x18
	::UnityEngine::Vector3 originalEulerAngles; // 0x24
	::UnityEngine::Vector3 originalScale; // 0x30
	::UnityEngine::Animation* anim; // 0x40
	::System::Single animationLength; // 0x48
	::System::Single currentTime; // 0x4C
	::System::Single alpha; // 0x50
	::UnityEngine::Renderer* renderer; // 0x58
	::System::Single delay; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_COLLECTIONWRAPPER__CTOR_OFFSET))(this);
	}
};
