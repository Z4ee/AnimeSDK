#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAP_NAPECS_ECSCOMPONENT_ADDTOENTITY_OFFSET UNITYSDK_OFFSET(0x1C83C190)
#define NAP_NAPECS_ECSCOMPONENT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C83C020)
#define NAP_NAPECS_ECSCOMPONENT_DISPATCHREADYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C83B900)
#define NAP_NAPECS_ECSCOMPONENT_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1C83C250)
#define NAP_NAPECS_ECSCOMPONENT_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1C83BBE0)
#define NAP_NAPECS_ECSCOMPONENT_GET_CLASSID_OFFSET UNITYSDK_OFFSET(0x1C83B540)
#define NAP_NAPECS_ECSCOMPONENT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1C83B520)
#define NAP_NAPECS_ECSCOMPONENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C83B500)
#define NAP_NAPECS_ECSCOMPONENT_GET_ISASYNC_OFFSET UNITYSDK_OFFSET(0x1C83B600)
#define NAP_NAPECS_ECSCOMPONENT_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1C83B5F0)
#define NAP_NAPECS_ECSCOMPONENT_GET_SHOTCLASSID_OFFSET UNITYSDK_OFFSET(0x1C83B550)
#define NAP_NAPECS_ECSCOMPONENT_NEW_OFFSET UNITYSDK_OFFSET(0x1C83BE30)
#define NAP_NAPECS_ECSCOMPONENT_ONADD_OFFSET UNITYSDK_OFFSET(0x1C83C200)
#define NAP_NAPECS_ECSCOMPONENT_RESET_OFFSET UNITYSDK_OFFSET(0x1C83C0C0)
#define NAP_NAPECS_ECSCOMPONENT_SETISREADY_OFFSET UNITYSDK_OFFSET(0x1C83BA60)
#define NAP_NAPECS_ECSCOMPONENT_SETVALID_OFFSET UNITYSDK_OFFSET(0x1C83B610)
#define NAP_NAPECS_ECSCOMPONENT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1C83B530)
#define NAP_NAPECS_ECSCOMPONENT_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C83B510)
#define NAP_NAPECS_ECSCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83B660)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponent_TypeDefinitionIndex = 37952;

	class EcsComponent : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsWorld* _refWorld; // 0x10
		::System::Collections::Generic::HashSet_1<::Nap::NapECS::EcsFilter*>* NotifyFilters; // 0x18
		::System::Action_1<::Nap::NapECS::EcsComponent*>* _storeHandler; // 0x20
		::System::Int32 _classId; // 0x28
		::System::UInt32 _entityId_k__BackingField; // 0x2C
		::System::UInt32 _id_k__BackingField; // 0x30
		::System::Boolean _isAsync; // 0x34
		::System::Boolean _isValid; // 0x35
		::System::Boolean _isReady; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_entityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_entityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::Int32 get_classId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GET_CLASSID_OFFSET))(this);
		}

		::System::UInt16 get_shotClassId()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GET_SHOTCLASSID_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GET_ISREADY_OFFSET))(this);
		}

		::System::Boolean get_IsAsync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GET_ISASYNC_OFFSET))(this);
		}

		::System::Void SetValid(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_SETVALID_OFFSET))(this, flag);
		}

		::System::Void DispatchReadyInternal(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_DISPATCHREADYINTERNAL_OFFSET))(this, entity);
		}

		::System::Void SetIsReady(::System::Boolean isReady, ::System::Boolean dispatchImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_SETISREADY_OFFSET))(this, isReady, dispatchImmediately);
		}

		::System::Void New(::Nap::NapECS::EcsWorld* world, ::System::Action_1<::Nap::NapECS::EcsComponent*>* storeHandler)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Action_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_NEW_OFFSET))(this, world, storeHandler);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_DESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_RESET_OFFSET))(this);
		}

		::System::Void AddToEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_ADDTOENTITY_OFFSET))(this, entity);
		}

		::System::Void OnAdd(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_ONADD_OFFSET))(this, entity);
		}

		::System::Int32 GetClassID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GETCLASSID_OFFSET))(this);
		}

		::Nap::NapECS::EcsEntity* GetEntity()
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENT_GETENTITY_OFFSET))(this);
		}
	};
}
