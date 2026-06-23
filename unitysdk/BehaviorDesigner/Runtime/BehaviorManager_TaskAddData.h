#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_TaskAddData_OverrideFieldValue; }
namespace BehaviorDesigner::Runtime::Tasks { class ParentTask; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E18FC90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E18FC30)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E18FE40)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_TaskAddData_TypeDefinitionIndex = 33229;

	class BehaviorManager_TaskAddData : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::ParentTask* parentTask; // 0x10
		::System::String* errorTaskName; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Object*>* overiddenFields; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::BehaviorManager_TaskAddData_OverrideFieldValue*>* overrideFields; // 0x28
		::System::Boolean fromExternalTask; // 0x30
		::System::Int32 compositeParentIndex; // 0x34
		::System::Int32 parentIndex; // 0x38
		::System::Int32 depth; // 0x3C
		::System::Int32 errorTask; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_INITIALIZE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_DESTROY_OFFSET))(this);
		}
	};
}
