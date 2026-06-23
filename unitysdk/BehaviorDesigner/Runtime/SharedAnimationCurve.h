#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace UnityEngine { class AnimationCurve; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDANIMATIONCURVE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DE03D40)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03E00)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedAnimationCurve_TypeDefinitionIndex = 33274;

	class SharedAnimationCurve : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::AnimationCurve*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDANIMATIONCURVE__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedAnimationCurve* op_Implicit(::UnityEngine::AnimationCurve* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedAnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDANIMATIONCURVE_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
