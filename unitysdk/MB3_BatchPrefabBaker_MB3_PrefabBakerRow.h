#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MB3_BATCHPREFABBAKER_MB3_PREFABBAKERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D953490)

inline static constexpr unsigned int MB3_BatchPrefabBaker_MB3_PrefabBakerRow_TypeDefinitionIndex = 90536;

class MB3_BatchPrefabBaker_MB3_PrefabBakerRow : public ::System::Object
{
public:
	::UnityEngine::GameObject* sourcePrefab; // 0x10
	::UnityEngine::GameObject* resultPrefab; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_BATCHPREFABBAKER_MB3_PREFABBAKERROW__CTOR_OFFSET))(this);
	}
};
