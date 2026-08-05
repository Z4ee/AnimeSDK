#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define MB3_MESHBAKERROOT_ZSORTOBJECTS_ITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F63A120)

inline static constexpr unsigned int MB3_MeshBakerRoot_ZSortObjects_Item_TypeDefinitionIndex = 94479;

class MB3_MeshBakerRoot_ZSortObjects_Item : public ::System::Object
{
public:
	::UnityEngine::GameObject* go; // 0x10
	::UnityEngine::Vector3 point; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_ZSORTOBJECTS_ITEM__CTOR_OFFSET))(this);
	}
};
