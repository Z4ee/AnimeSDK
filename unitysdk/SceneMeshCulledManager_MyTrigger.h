#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class VolumeBounds; }

#define SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEAABB_OFFSET UNITYSDK_OFFSET(0x17922180)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x17922900)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEINSIDEFAST_OFFSET UNITYSDK_OFFSET(0x17923780)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEINSIDE_OFFSET UNITYSDK_OFFSET(0x17923AB0)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_HIDENGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x179242F0)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_ISBAKE_OFFSET UNITYSDK_OFFSET(0x17923E60)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0x17923510)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_MERGEBOUNDS_OFFSET UNITYSDK_OFFSET(0x17923180)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_SETGAMEOBJECTVISIBILITYANDENABLE_OFFSET UNITYSDK_OFFSET(0x17924120)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_SETGAMEOBJECTVISIBILITY_OFFSET UNITYSDK_OFFSET(0x17923F20)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_SHOWGAMEOBJECTFIRST_OFFSET UNITYSDK_OFFSET(0x179240D0)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER_SHOWGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17923ED0)
#define SCENEMESHCULLEDMANAGER_MYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17924340)

inline static constexpr unsigned int SceneMeshCulledManager_MyTrigger_TypeDefinitionIndex = 40086;

class SceneMeshCulledManager_MyTrigger : public ::System::Object
{
public:
	::UnityEngine::Bounds aabb; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeBounds*>* boxList; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* invisibleMeshList; // 0x30
	::Il2CppArray<::UnityEngine::MeshRenderer*>* invisibleMeshRendererArray; // 0x38
	::System::Boolean show; // 0x40
	::System::Boolean currentFrameVisible; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER__CTOR_OFFSET))(this);
	}

	::System::Void CalculateAABB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEAABB_OFFSET))(this);
	}

	static ::UnityEngine::Bounds CalculateBounds(::UnityEngine::Vector3 center, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEBOUNDS_OFFSET))(center, rotation, scale);
	}

	static ::UnityEngine::Bounds MergeBounds(::System::Collections::Generic::List_1<::UnityEngine::Bounds>* boundsList)
	{
		return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::List_1<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_MERGEBOUNDS_OFFSET))(boundsList);
	}

	static ::System::Boolean IsPointInRect(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 rectCenter, ::UnityEngine::Quaternion rectRotation, ::UnityEngine::Vector3 rectScale, ::UnityEngine::GameObject* ob)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_ISPOINTINRECT_OFFSET))(point, rectCenter, rectRotation, rectScale, ob);
	}

	::System::Void CalculateInsideFast(::UnityEngine::Vector3 triggerPosWS)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEINSIDEFAST_OFFSET))(this, triggerPosWS);
	}

	::System::Void CalculateInside(::UnityEngine::Vector3 point)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_CALCULATEINSIDE_OFFSET))(this, point);
	}

	::System::Void ShowGameObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_SHOWGAMEOBJECT_OFFSET))(this);
	}

	::System::Void ShowGameObjectFirst()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_SHOWGAMEOBJECTFIRST_OFFSET))(this);
	}

	::System::Void SetGameObjectVisibility(::System::Boolean visible)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_SETGAMEOBJECTVISIBILITY_OFFSET))(this, visible);
	}

	::System::Void SetGameObjectVisibilityAndEnable(::System::Boolean visible)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_SETGAMEOBJECTVISIBILITYANDENABLE_OFFSET))(this, visible);
	}

	::System::Void hidenGameObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_HIDENGAMEOBJECT_OFFSET))(this);
	}

	::System::Boolean isBake()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER_MYTRIGGER_ISBAKE_OFFSET))(this);
	}
};
