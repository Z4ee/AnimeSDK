#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class SceneMeshCulledManager_MyTrigger;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define SCENEMESHCULLEDMANAGER_BAKEAABB_OFFSET UNITYSDK_OFFSET(0x1AADA6E0)
#define SCENEMESHCULLEDMANAGER_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1AADB190)
#define SCENEMESHCULLEDMANAGER_GETCAMERAPOS_OFFSET UNITYSDK_OFFSET(0x1AADAC60)
#define SCENEMESHCULLEDMANAGER_INVISBLEMESH_OFFSET UNITYSDK_OFFSET(0x1AADAF50)
#define SCENEMESHCULLEDMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AADA690)
#define SCENEMESHCULLEDMANAGER_SHOWALL_OFFSET UNITYSDK_OFFSET(0x1AADA850)
#define SCENEMESHCULLEDMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1AADA950)
#define SCENEMESHCULLEDMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AADA990)
#define SCENEMESHCULLEDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADB240)

inline static constexpr unsigned int SceneMeshCulledManager_TypeDefinitionIndex = 72641;

class SceneMeshCulledManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 totalFrames; // 0x18
	::System::Boolean useFastMode; // 0x1C
	::System::Collections::Generic::List_1<::SceneMeshCulledManager_MyTrigger*>* triggerList; // 0x20
	::System::Collections::Generic::List_1<::SceneMeshCulledManager_MyTrigger*>* triggerCacheList; // 0x28
	::System::Int32 frameCounter; // 0x30
	::UnityEngine::Vector3 preFrameCameraPosition; // 0x34
	::UnityEngine::Camera* camera; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void ShowAll()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_SHOWALL_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_UPDATE_OFFSET))(this);
	}

	::System::Single Distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_DISTANCE_OFFSET))(this, a, b);
	}

	::UnityEngine::Vector3 getCameraPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_GETCAMERAPOS_OFFSET))(this);
	}

	::System::Void invisbleMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_INVISBLEMESH_OFFSET))(this);
	}

	::System::Void BakeAABB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_BAKEAABB_OFFSET))(this);
	}
};
