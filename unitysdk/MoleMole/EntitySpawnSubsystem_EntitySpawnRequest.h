#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_8300C0E13E94E2DB;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x118AA670)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x118AA660)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_EntitySpawnRequest_TypeDefinitionIndex = 82971;

	class EntitySpawnSubsystem_EntitySpawnRequest : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle OwnerVo; // 0x10
		::MoleMole::EntityHandle Entity; // 0x20
		::Class_1_8300C0E13E94E2DB* Creator; // 0x30
		::System::Action_1<::MoleMole::EntityHandle>* OnComplete; // 0x38
		::System::Boolean IsWaiting; // 0x40
		::System::Boolean IsCancelled; // 0x41
		::System::Int32 Priority; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::ViewObject::ViewObjectHandle ownerVo, ::Class_1_8300C0E13E94E2DB* creator, ::System::Int32 priority, ::System::Action_1<::MoleMole::EntityHandle>* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_8300C0E13E94E2DB*, ::System::Int32, ::System::Action_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_1_OFFSET))(this, ownerVo, creator, priority, onComplete);
		}
	};
}
