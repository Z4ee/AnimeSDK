#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class GameObjectPosBehavior_UIAdaptorRectTransform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_APPLYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F98F170)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_BIND_OFFSET UNITYSDK_OFFSET(0x1F98EBB0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_ENSUREINITPOSERECORDED_OFFSET UNITYSDK_OFFSET(0x1F98ED10)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_GET_REFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1F98EBA0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_INITDATA_OFFSET UNITYSDK_OFFSET(0x1F98EBC0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_RECORDERINITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F98F010)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_RECOVERRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F98F470)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F98F2D0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_TRYGETPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1F98EE60)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F98F5D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MultiGameObjectPosBehavior_GameObjectPosData_TypeDefinitionIndex = 32856;

	class MultiGameObjectPosBehavior_GameObjectPosData : public ::System::Object
	{
	public:
		::System::Boolean unInited; // 0x10
		::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform* InitRectTransform; // 0x18
		::UnityEngine::GameObject* _referenceObj; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ReferenceObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_GET_REFERENCEOBJECT_OFFSET))(this);
		}

		::System::Void Bind(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_BIND_OFFSET))(this, referenceObj);
		}

		::System::Void InitData(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_INITDATA_OFFSET))(this, referenceObj);
		}

		::System::Boolean TryGetPositionOffset(::UnityEngine::GameObject* referenceObj, ::UnityEngine::Vector3& offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_TRYGETPOSITIONOFFSET_OFFSET))(this, referenceObj, offset);
		}

		::System::Void RecorderInitTransform(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_RECORDERINITTRANSFORM_OFFSET))(this, referenceObj);
		}

		::System::Void EnsureInitPoseRecorded(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_ENSUREINITPOSERECORDED_OFFSET))(this, referenceObj);
		}

		::System::Void ApplyTransform(::UnityEngine::GameObject* referenceObj, ::UnityEngine::Vector3 positionOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_APPLYTRANSFORM_OFFSET))(this, referenceObj, positionOffset);
		}

		::System::Void RecoverRectTransform(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_RECOVERRECTTRANSFORM_OFFSET))(this, referenceObj);
		}

		static ::System::Void SetTransform(::UnityEngine::Transform* transform, ::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform* adaptorParams, ::UnityEngine::Vector3 positionOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Timeline::GameObjectPosBehavior_UIAdaptorRectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSBEHAVIOR_GAMEOBJECTPOSDATA_SETTRANSFORM_OFFSET))(transform, adaptorParams, positionOffset);
		}
	};
}
