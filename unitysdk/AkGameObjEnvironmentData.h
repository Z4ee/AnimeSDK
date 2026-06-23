#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAuxSendArray;
class AkEnvironment;
class AkEnvironmentPortal;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKGAMEOBJENVIRONMENTDATA_ADDAKENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1E5F1C80)
#define AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTSFROMPORTALS_OFFSET UNITYSDK_OFFSET(0x1E5F0A60)
#define AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x1E5F15E0)
#define AKGAMEOBJENVIRONMENTDATA_AKENVIRONMENTBELONGSTOACTIVEPORTALS_OFFSET UNITYSDK_OFFSET(0x1E5F1F00)
#define AKGAMEOBJENVIRONMENTDATA_REMOVEAKENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1E5F2070)
#define AKGAMEOBJENVIRONMENTDATA_REMOVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1E5F1C00)
#define AKGAMEOBJENVIRONMENTDATA_TRYADDENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1E5F19C0)
#define AKGAMEOBJENVIRONMENTDATA_UPDATEAUXSEND_OFFSET UNITYSDK_OFFSET(0x1E5F18D0)
#define AKGAMEOBJENVIRONMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2910)

inline static constexpr unsigned int AkGameObjEnvironmentData_TypeDefinitionIndex = 33152;

class AkGameObjEnvironmentData : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkEnvironment*>* activeEnvironmentsFromPortals; // 0x10
	::System::Collections::Generic::List_1<::AkEnvironmentPortal*>* activePortals; // 0x18
	::AkAuxSendArray* auxSendValues; // 0x20
	::System::Collections::Generic::List_1<::AkEnvironment*>* activeEnvironments; // 0x28
	::System::Boolean hasActivePortalListChanged; // 0x30
	::System::Boolean hasSentZero; // 0x31
	::System::Boolean hasEnvironmentListChanged; // 0x32
	::UnityEngine::Vector3 lastPosition; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA__CTOR_OFFSET))(this);
	}

	::System::Void AddHighestPriorityEnvironmentsFromPortals(::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTSFROMPORTALS_OFFSET))(this, position);
	}

	::System::Void AddHighestPriorityEnvironments(::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTS_OFFSET))(this, position);
	}

	::System::Void UpdateAuxSend(::UnityEngine::GameObject* gameObject, ::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_UPDATEAUXSEND_OFFSET))(this, gameObject, position);
	}

	::System::Void TryAddEnvironment(::AkEnvironment* env)
	{
		return ((::System::Void(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_TRYADDENVIRONMENT_OFFSET))(this, env);
	}

	::System::Void RemoveEnvironment(::AkEnvironment* env)
	{
		return ((::System::Void(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_REMOVEENVIRONMENT_OFFSET))(this, env);
	}

	::System::Void AddAkEnvironment(::UnityEngine::Collider* environmentCollider, ::UnityEngine::Collider* gameObjectCollider)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_ADDAKENVIRONMENT_OFFSET))(this, environmentCollider, gameObjectCollider);
	}

	::System::Boolean AkEnvironmentBelongsToActivePortals(::AkEnvironment* env)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_AKENVIRONMENTBELONGSTOACTIVEPORTALS_OFFSET))(this, env);
	}

	::System::Void RemoveAkEnvironment(::UnityEngine::Collider* environmentCollider, ::UnityEngine::Collider* gameObjectCollider)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_REMOVEAKENVIRONMENT_OFFSET))(this, environmentCollider, gameObjectCollider);
	}
};
