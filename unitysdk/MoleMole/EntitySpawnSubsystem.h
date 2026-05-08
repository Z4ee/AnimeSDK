#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/EntitySpawnSubsystem_GridCoord.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_E81C588ED0B50078.h"

class Class_1_A5C63A7A740BFBD0;
namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnBundle; }
namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }
namespace MoleMole { class EntitySpawnSubsystem_WorkingQueue; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class Class_1_19F8D0BF0A8C8F12;

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUESTWITHENTITYGRIDDELAY_OFFSET UNITYSDK_OFFSET(0x125A5DC0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUEST_OFFSET UNITYSDK_OFFSET(0x125A5CF0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDBUNDLE_OFFSET UNITYSDK_OFFSET(0x125A4BE0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDSYNCREQUEST_OFFSET UNITYSDK_OFFSET(0x125A5480)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDWORKINGREQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x125A6AE0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCELREQUEST_OFFSET UNITYSDK_OFFSET(0x125A6620)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCEL_OFFSET UNITYSDK_OFFSET(0x125A60F0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CONFIRMVIEWOBJECTBUNDLEVALID_OFFSET UNITYSDK_OFFSET(0x125A7CC0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x125A45C0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x125A6C50)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_REGISTERBUNDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x125A6940)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_SPAWN_OFFSET UNITYSDK_OFFSET(0x125A5310)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYPROCESSREQUESTWITHBUNDLE_OFFSET UNITYSDK_OFFSET(0x125A7530)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYSTARTWORKINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x125A6B50)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_UPDATEDELAYCREATIONSETTING_OFFSET UNITYSDK_OFFSET(0x125A7E60)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x125A8930)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM__TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_OFFSET UNITYSDK_OFFSET(0x125A74E0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x125A8AE0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x125A8B70)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_TypeDefinitionIndex = 58733;

	class EntitySpawnSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::EntitySpawnSubsystem*>
	{
	public:
		// static const ::System::Single MinGridSize; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntitySpawnSubsystem_EntitySpawnBundle*>* _relatedEntityRequestBundle; // 0x10
		::Class_1_19F8D0BF0A8C8F12<::MoleMole::EntitySpawnSubsystem_GridCoord, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*>* _waitingRequests; // 0x18
		::MoleMole::EntitySpawnSubsystem_WorkingQueue* _workingRequests; // 0x20
		::System::Single _gridSize; // 0x28
		::MoleMole::EntitySpawnSubsystem_GridCoord _playerGridCoord; // 0x2C
		::System::Boolean _isDelayCreateEntityEnabled; // 0x34
		::System::Boolean _isEntityGridDisabled; // 0x35
		::System::Boolean _coroutineFlag; // 0x36
		::System::Single _createInterval; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Boolean AddBundle(::System::Collections::Generic::IList_1<::System::UInt32>* ridBundle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDBUNDLE_OFFSET))(this, ridBundle);
		}

		::System::Void Spawn(::Foundation::ViewObject::ViewObjectHandle vo, ::Class_1_A5C63A7A740BFBD0* creator, ::System::Int32 priority, ::System::Action_1<::MoleMole::EntityHandle>* onComplete, ::Struct_2_E81C588ED0B50078& handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_A5C63A7A740BFBD0*, ::System::Int32, ::System::Action_1<::MoleMole::EntityHandle>*, ::Struct_2_E81C588ED0B50078&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_SPAWN_OFFSET))(this, vo, creator, priority, onComplete, handle);
		}

		::System::Void Cancel(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCEL_OFFSET))(this, request);
		}

		::System::Void CancelRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCELREQUEST_OFFSET))(this, request);
		}

		::System::Boolean RegisterBundleRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request, ::MoleMole::EntitySpawnSubsystem_EntitySpawnBundle*& bundle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::MoleMole::EntitySpawnSubsystem_EntitySpawnBundle*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_REGISTERBUNDLEREQUEST_OFFSET))(this, request, bundle);
		}

		::System::Void AddSyncRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDSYNCREQUEST_OFFSET))(this, request);
		}

		::System::Void AddAsyncRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUEST_OFFSET))(this, request);
		}

		::System::Void AddAsyncRequestWithEntityGridDelay(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUESTWITHENTITYGRIDDELAY_OFFSET))(this, request);
		}

		::System::Void AddWorkingRequestInternal(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDWORKINGREQUESTINTERNAL_OFFSET))(this, request);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void TryStartWorkingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYSTARTWORKINGCOROUTINE_OFFSET))(this);
		}

		::System::Boolean TryProcessRequestWithBundle(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYPROCESSREQUESTWITHBUNDLE_OFFSET))(this, request);
		}

		::System::Void ConfirmViewObjectBundleValid(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CONFIRMVIEWOBJECTBUNDLEVALID_OFFSET))(this, handle);
		}

		::System::Void UpdateDelayCreationSetting(::System::Single gridSize, ::System::Single creationInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_UPDATEDELAYCREATIONSETTING_OFFSET))(this, gridSize, creationInterval);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _TryStartWorkingCoroutine_g__SpawnEntity_25_0()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM__TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
