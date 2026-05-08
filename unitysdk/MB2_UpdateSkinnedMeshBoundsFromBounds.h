#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MB2_UPDATESKINNEDMESHBOUNDSFROMBOUNDS_START_OFFSET UNITYSDK_OFFSET(0x1B6EBF20)
#define MB2_UPDATESKINNEDMESHBOUNDSFROMBOUNDS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B6EC490)
#define MB2_UPDATESKINNEDMESHBOUNDSFROMBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6EC5E0)

inline static constexpr unsigned int MB2_UpdateSkinnedMeshBoundsFromBounds_TypeDefinitionIndex = 84960;

class MB2_UpdateSkinnedMeshBoundsFromBounds : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objects; // 0x18
	::UnityEngine::SkinnedMeshRenderer* smr; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_UPDATESKINNEDMESHBOUNDSFROMBOUNDS__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_UPDATESKINNEDMESHBOUNDSFROMBOUNDS_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_UPDATESKINNEDMESHBOUNDSFROMBOUNDS_UPDATE_OFFSET))(this);
	}
};
