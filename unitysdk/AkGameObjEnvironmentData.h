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

#define AKGAMEOBJENVIRONMENTDATA_ADDAKENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1D59ECD0)
#define AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTSFROMPORTALS_OFFSET UNITYSDK_OFFSET(0x1D5A0CC0)
#define AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x1D5A11C0)
#define AKGAMEOBJENVIRONMENTDATA_AKENVIRONMENTBELONGSTOACTIVEPORTALS_OFFSET UNITYSDK_OFFSET(0x1D5A1640)
#define AKGAMEOBJENVIRONMENTDATA_REMOVEAKENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1D5A0730)
#define AKGAMEOBJENVIRONMENTDATA_REMOVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1D5A1590)
#define AKGAMEOBJENVIRONMENTDATA_TRYADDENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1D5A1430)
#define AKGAMEOBJENVIRONMENTDATA_UPDATEAUXSEND_OFFSET UNITYSDK_OFFSET(0x1D59EED0)
#define AKGAMEOBJENVIRONMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59EBB0)

inline static constexpr unsigned int AkGameObjEnvironmentData_TypeDefinitionIndex = 43738;

class AkGameObjEnvironmentData : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkEnvironment*>* activeEnvironmentsFromPortals; // 0x10
	::System::Collections::Generic::List_1<::AkEnvironment*>* activeEnvironments; // 0x18
	::AkAuxSendArray* auxSendValues; // 0x20
	::System::Collections::Generic::List_1<::AkEnvironmentPortal*>* activePortals; // 0x28
	::System::Boolean hasChanged; // 0x30
	::System::Boolean hasSentZero; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA__CTOR_OFFSET))(this);
	}

	::System::Void AddHighestPriorityEnvironmentsFromPortals(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTSFROMPORTALS_OFFSET))(this, a1);
	}

	::System::Void AddHighestPriorityEnvironments(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_ADDHIGHESTPRIORITYENVIRONMENTS_OFFSET))(this, a1);
	}

	::System::Void UpdateAuxSend(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_UPDATEAUXSEND_OFFSET))(this, a1, a2);
	}

	::System::Void TryAddEnvironment(::AkEnvironment* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_TRYADDENVIRONMENT_OFFSET))(this, a1);
	}

	::System::Void RemoveEnvironment(::AkEnvironment* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_REMOVEENVIRONMENT_OFFSET))(this, a1);
	}

	::System::Void AddAkEnvironment(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_ADDAKENVIRONMENT_OFFSET))(this, a1, a2);
	}

	::System::Boolean AkEnvironmentBelongsToActivePortals(::AkEnvironment* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_AKENVIRONMENTBELONGSTOACTIVEPORTALS_OFFSET))(this, a1);
	}

	::System::Void RemoveAkEnvironment(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJENVIRONMENTDATA_REMOVEAKENVIRONMENT_OFFSET))(this, a1, a2);
	}
};
