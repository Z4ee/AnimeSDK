#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define INSTANCETEST_APPLY_OFFSET UNITYSDK_OFFSET(0x192964A0)
#define INSTANCETEST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19296450)
#define INSTANCETEST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19296440)
#define INSTANCETEST_UNAPPLY_OFFSET UNITYSDK_OFFSET(0x19296470)
#define INSTANCETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x19296490)
#define INSTANCETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x192965B0)

inline static constexpr unsigned int InstanceTest_TypeDefinitionIndex = 36799;

class InstanceTest : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color customColor; // 0x18
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x28
	::UnityEngine::Renderer* renderCache; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCETEST__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCETEST_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCETEST_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCETEST_UPDATE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCETEST_APPLY_OFFSET))(this);
	}

	::System::Void UnApply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCETEST_UNAPPLY_OFFSET))(this);
	}
};
