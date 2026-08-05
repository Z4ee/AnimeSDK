#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedActionWrapper.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace ParadoxNotion { class ActionCall; }
namespace System { class Object; }

#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION_CALL_OFFSET UNITYSDK_OFFSET(0x1DFDD9D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION_GETVARIABLES_OFFSET UNITYSDK_OFFSET(0x1DFDD900)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION_INIT_OFFSET UNITYSDK_OFFSET(0x1DFDD940)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDDC80)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedAction_TypeDefinitionIndex = 30976;

	class ReflectedAction : public ::NodeCanvas::Framework::Internal::ReflectedActionWrapper
	{
	public:
		::ParadoxNotion::ActionCall* call; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::NodeCanvas::Framework::BBParameter*>* GetVariables()
		{
			return ((::Il2CppArray<::NodeCanvas::Framework::BBParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION_GETVARIABLES_OFFSET))(this);
		}

		::System::Void Init(::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION_INIT_OFFSET))(this, instance);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTION_CALL_OFFSET))(this);
		}
	};
}
