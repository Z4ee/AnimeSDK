#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace UnityEngine { class Material; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDMATERIAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C1B6360)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B6420)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedMaterial_TypeDefinitionIndex = 31735;

	class SharedMaterial : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Material*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDMATERIAL__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedMaterial* op_Implicit(::UnityEngine::Material* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedMaterial*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDMATERIAL_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
