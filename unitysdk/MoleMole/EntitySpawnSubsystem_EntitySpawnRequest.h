#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_E0F4C078E2549C40;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B15D90)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B15D80)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_EntitySpawnRequest_TypeDefinitionIndex = 71881;

	class EntitySpawnSubsystem_EntitySpawnRequest : public ::System::Object
	{
	public:
		::Class_1_E0F4C078E2549C40* Creator; // 0x10
		::System::Action_1<::MoleMole::EntityHandle>* OnComplete; // 0x18
		::Foundation::ViewObject::ViewObjectHandle OwnerVo; // 0x20
		::MoleMole::EntityHandle Entity; // 0x30
		::System::Int32 Priority; // 0x40
		::System::Boolean IsWaiting; // 0x44
		::System::Boolean IsCancelled; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::ViewObject::ViewObjectHandle ownerVo, ::Class_1_E0F4C078E2549C40* creator, ::System::Int32 priority, ::System::Action_1<::MoleMole::EntityHandle>* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Class_1_E0F4C078E2549C40*, ::System::Int32, ::System::Action_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_1_OFFSET))(this, ownerVo, creator, priority, onComplete);
		}
	};
}
