#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class SceneObjectsVisibilityManager_VisibilityGroup;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENEOBJECTSVISIBILITYMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C13ADC0)
#define SCENEOBJECTSVISIBILITYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C13ADA0)
#define SCENEOBJECTSVISIBILITYMANAGER_HIDEGROUP_OFFSET UNITYSDK_OFFSET(0x1C13B9D0)
#define SCENEOBJECTSVISIBILITYMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C13B2D0)
#define SCENEOBJECTSVISIBILITYMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C13B280)
#define SCENEOBJECTSVISIBILITYMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C13B330)
#define SCENEOBJECTSVISIBILITYMANAGER_REBUILDGROUPMAP_OFFSET UNITYSDK_OFFSET(0x1C13AFC0)
#define SCENEOBJECTSVISIBILITYMANAGER_REGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C13AE10)
#define SCENEOBJECTSVISIBILITYMANAGER_SETGROUPVISIBLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C13B5C0)
#define SCENEOBJECTSVISIBILITYMANAGER_SETGROUPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C13B380)
#define SCENEOBJECTSVISIBILITYMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C13ADB0)
#define SCENEOBJECTSVISIBILITYMANAGER_SHOWGROUP_OFFSET UNITYSDK_OFFSET(0x1C13B980)
#define SCENEOBJECTSVISIBILITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13BA20)

inline static constexpr unsigned int SceneObjectsVisibilityManager_TypeDefinitionIndex = 57125;

class SceneObjectsVisibilityManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::SceneObjectsVisibilityManager** StaticGet__Instance_k__BackingField()
	{
		return (::SceneObjectsVisibilityManager**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectsVisibilityManager_TypeDefinitionIndex)->GetStaticField(0x41200);
	}
	::System::Collections::Generic::List_1<::SceneObjectsVisibilityManager_VisibilityGroup*>* groups; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::SceneObjectsVisibilityManager_VisibilityGroup*>* _groupMap; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER__CTOR_OFFSET))(this);
	}

	static ::SceneObjectsVisibilityManager* get_Instance()
	{
		return ((::SceneObjectsVisibilityManager*(*)())((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::SceneObjectsVisibilityManager* value)
	{
		return ((::System::Void(*)(::SceneObjectsVisibilityManager*))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_SET_INSTANCE_OFFSET))(value);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_ONVALIDATE_OFFSET))(this);
	}

	static ::System::Void SetGroupVisible(::System::String* key, ::System::Boolean visible)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_SETGROUPVISIBLE_OFFSET))(key, visible);
	}

	static ::System::Void ShowGroup(::System::String* key)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_SHOWGROUP_OFFSET))(key);
	}

	static ::System::Void HideGroup(::System::String* key)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_HIDEGROUP_OFFSET))(key);
	}

	::System::Void RegisterInstance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_REGISTERINSTANCE_OFFSET))(this);
	}

	::System::Void RebuildGroupMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_REBUILDGROUPMAP_OFFSET))(this);
	}

	::System::Void SetGroupVisibleInternal(::System::String* key, ::System::Boolean visible)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SCENEOBJECTSVISIBILITYMANAGER_SETGROUPVISIBLEINTERNAL_OFFSET))(this, key, visible);
	}
};
