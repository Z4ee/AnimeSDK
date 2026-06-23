#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENESPECIFICTOGGLES_INITSCENEPARAMS_OFFSET UNITYSDK_OFFSET(0x1B071D60)
#define SCENESPECIFICTOGGLES_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B072160)
#define SCENESPECIFICTOGGLES_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B0720D0)
#define SCENESPECIFICTOGGLES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B071D10)
#define SCENESPECIFICTOGGLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B072240)
#define SCENESPECIFICTOGGLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0721F0)

inline static constexpr unsigned int SceneSpecificToggles_TypeDefinitionIndex = 27035;

class SceneSpecificToggles : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_hizCulling()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneSpecificToggles_TypeDefinitionIndex)->GetStaticField(0x6340);
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
