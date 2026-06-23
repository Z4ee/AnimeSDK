#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define INSTANCEOPTIMIZEMANAGER_BAKEINSTANCEINFO_OFFSET UNITYSDK_OFFSET(0x1207C620)
#define INSTANCEOPTIMIZEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1207CEA0)

inline static constexpr unsigned int InstanceOptimizeManager_TypeDefinitionIndex = 72479;

class InstanceOptimizeManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::MeshRenderer*, ::UnityEngine::Mesh*>* meshRenderToMeshMap; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>* meshCount; // 0x20
	::System::Single effFadeDistance; // 0x28
	::System::Single effMobileFadePercent; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPTIMIZEMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void BakeInstanceInfo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPTIMIZEMANAGER_BAKEINSTANCEINFO_OFFSET))(this);
	}
};
