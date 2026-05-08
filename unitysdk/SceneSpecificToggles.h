#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENESPECIFICTOGGLES_INITSCENEPARAMS_OFFSET UNITYSDK_OFFSET(0x19105F60)
#define SCENESPECIFICTOGGLES_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19106360)
#define SCENESPECIFICTOGGLES_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191062D0)
#define SCENESPECIFICTOGGLES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19105F10)
#define SCENESPECIFICTOGGLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x19106440)
#define SCENESPECIFICTOGGLES__CTOR_OFFSET UNITYSDK_OFFSET(0x191063F0)

inline static constexpr unsigned int SceneSpecificToggles_TypeDefinitionIndex = 29495;

class SceneSpecificToggles : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_hizCulling()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneSpecificToggles_TypeDefinitionIndex)->GetStaticField(0x6790);
	}
	::System::Boolean m_disableHizCulling; // 0x18
	::System::Boolean originalHizCulling; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_ONENABLE_OFFSET))(this);
	}

	::System::Void InitSceneParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_INITSCENEPARAMS_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_ONDESTROY_OFFSET))(this);
	}
};
