#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1E5BCE70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E5BCE60)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5BCE80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BCEE0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_TaskAddData_OverrideFieldValue_TypeDefinitionIndex = 33230;

	class BehaviorManager_TaskAddData_OverrideFieldValue : public ::System::Object
	{
	public:
		::System::Object* value; // 0x10
		::System::Int32 depth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE__CTOR_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE_GET_DEPTH_OFFSET))(this);
		}

		::System::Void Initialize(::System::Object* v, ::System::Int32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_TASKADDDATA_OVERRIDEFIELDVALUE_INITIALIZE_OFFSET))(this, v, d);
		}
	};
}
