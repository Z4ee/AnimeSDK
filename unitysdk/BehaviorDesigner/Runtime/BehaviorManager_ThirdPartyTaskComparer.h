#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_ThirdPartyTask; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASKCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E466940)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASKCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4669B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASKCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E466890)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_ThirdPartyTaskComparer_TypeDefinitionIndex = 33864;

	class BehaviorManager_ThirdPartyTaskComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASKCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask* a, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask*, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASKCOMPARER_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_ThirdPartyTask*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_THIRDPARTYTASKCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
