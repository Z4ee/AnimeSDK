#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define HEU_BOUNDINGVOLUME_GETALLINTERSECTINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x8C0C650)
#define HEU_BOUNDINGVOLUME_GET_BOUNDINGCOLLIDER_OFFSET UNITYSDK_OFFSET(0x8C0C5E0)
#define HEU_BOUNDINGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0CA90)

inline static constexpr unsigned int HEU_BoundingVolume_TypeDefinitionIndex = 40914;

class HEU_BoundingVolume : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_BOUNDINGVOLUME__CTOR_OFFSET))(this);
	}

	::UnityEngine::Collider* get_BoundingCollider()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_BOUNDINGVOLUME_GET_BOUNDINGCOLLIDER_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllIntersectingObjects()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_BOUNDINGVOLUME_GETALLINTERSECTINGOBJECTS_OFFSET))(this);
	}
};
