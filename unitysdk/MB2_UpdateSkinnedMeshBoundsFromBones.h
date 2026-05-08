#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MB2_UPDATESKINNEDMESHBOUNDSFROMBONES_START_OFFSET UNITYSDK_OFFSET(0x1B66F8E0)
#define MB2_UPDATESKINNEDMESHBOUNDSFROMBONES_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B66FB00)
#define MB2_UPDATESKINNEDMESHBOUNDSFROMBONES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66FC40)

inline static constexpr unsigned int MB2_UpdateSkinnedMeshBoundsFromBones_TypeDefinitionIndex = 84959;

class MB2_UpdateSkinnedMeshBoundsFromBones : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SkinnedMeshRenderer* smr; // 0x18
	::Il2CppArray<::UnityEngine::Transform*>* bones; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_UPDATESKINNEDMESHBOUNDSFROMBONES__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_UPDATESKINNEDMESHBOUNDSFROMBONES_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_UPDATESKINNEDMESHBOUNDSFROMBONES_UPDATE_OFFSET))(this);
	}
};
