#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/BehaviorReference.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE_GETEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x17380660)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE_LOADPATHBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x17380700)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE_ONPREPAREEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x17380560)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x173806A0)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE_TRYLOADNULLBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x17380B60)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17380EC0)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE__DOCUSTOMLOAD_OFFSET UNITYSDK_OFFSET(0x17380E80)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE__LOADEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x173805F0)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE___BASE_GETEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x17380F50)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE___BASE_ONPREPAREEXTERNALBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x17380FE0)
#define MOLEMOLE_NAPBEHAVIORTREEREFERENCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17381070)

namespace MoleMole
{
	inline static constexpr unsigned int NapBehaviorTreeReference_TypeDefinitionIndex = 86716;

	class NapBehaviorTreeReference : public ::BehaviorDesigner::Runtime::Tasks::BehaviorReference
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* BehaviorTreePath; // 0x70
		::System::Boolean _isInited; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void OnPrepareExternalBehaviors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE_ONPREPAREEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>* GetExternalBehaviors()
		{
			return ((::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE_GETEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE_ONUPDATE_OFFSET))(this);
		}

		::System::Void _LoadExternalBehaviors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE__LOADEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::System::Boolean _DoCustomLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE__DOCUSTOMLOAD_OFFSET))(this);
		}

		::System::Void LoadPathBehaviorTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE_LOADPATHBEHAVIORTREE_OFFSET))(this);
		}

		::System::Void TryLoadNullBehaviorTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE_TRYLOADNULLBEHAVIORTREE_OFFSET))(this);
		}

		::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>* __base_GetExternalBehaviors()
		{
			return ((::Il2CppArray<::BehaviorDesigner::Runtime::ExternalBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE___BASE_GETEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::System::Void __base_OnPrepareExternalBehaviors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE___BASE_ONPREPAREEXTERNALBEHAVIORS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPBEHAVIORTREEREFERENCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
