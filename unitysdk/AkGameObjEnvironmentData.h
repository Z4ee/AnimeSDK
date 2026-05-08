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

#define AKGAMEOBJENVIRONMENTDATA_ADDAKENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C29F460)
#define AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTSFROMPORTALS_OFFSET UNITYSDK_OFFSET(0x1C29E240)
#define AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x1C29EDC0)
#define AKGAMEOBJENVIRONMENTDATA_AKENVIRONMENTBELONGSTOACTIVEPORTALS_OFFSET UNITYSDK_OFFSET(0x1C29F6E0)
#define AKGAMEOBJENVIRONMENTDATA_REMOVEAKENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C29F850)
#define AKGAMEOBJENVIRONMENTDATA_REMOVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C29F3E0)
#define AKGAMEOBJENVIRONMENTDATA_TRYADDENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C29F1A0)
#define AKGAMEOBJENVIRONMENTDATA_UPDATEAUXSEND_OFFSET UNITYSDK_OFFSET(0x1C29F0B0)
#define AKGAMEOBJENVIRONMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A00F0)

inline static constexpr unsigned int AkGameObjEnvironmentData_TypeDefinitionIndex = 31601;

class AkGameObjEnvironmentData : public ::System::Object
{
public:
	::AkAuxSendArray* auxSendValues; // 0x10
	::System::Collections::Generic::List_1<::AkEnvironmentPortal*>* activePortals; // 0x18
	::System::Collections::Generic::List_1<::AkEnvironment*>* activeEnvironments; // 0x20
	::System::Collections::Generic::List_1<::AkEnvironment*>* activeEnvironmentsFromPortals; // 0x28
	::System::Boolean hasSentZero; // 0x30
	::System::Boolean hasActivePortalListChanged; // 0x31
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
