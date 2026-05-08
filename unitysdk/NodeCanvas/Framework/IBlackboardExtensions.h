#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace NodeCanvas::Framework { template <typename T> class Variable_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_ADDVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1B45C620)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_ADDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B45E3D0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETALLPARENTS_OFFSET UNITYSDK_OFFSET(0x1B45E270)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETROOT_OFFSET UNITYSDK_OFFSET(0x1B45E100)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETVARIABLEBYID_OFFSET UNITYSDK_OFFSET(0x1B45B990)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETVARIABLES_OFFSET UNITYSDK_OFFSET(0x1B45ED30)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B45BDB0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_INITIALIZEPROPERTIESBINDING_OFFSET UNITYSDK_OFFSET(0x1B45EA70)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_ISPARTOF_OFFSET UNITYSDK_OFFSET(0x1B45E2D0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_OVERWRITEFROM_OFFSET UNITYSDK_OFFSET(0x1B45ED90)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_OVERWRITEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B45F4D0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_REMOVEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B45E4F0)
#define NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_SETVARIABLEVALUE_OFFSET UNITYSDK_OFFSET(0x1B45E7A0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int IBlackboardExtensions_TypeDefinitionIndex = 27108;

	class IBlackboardExtensions : public ::System::Object
	{
	public:
		static ::NodeCanvas::Framework::IBlackboard* GetRoot(::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETROOT_OFFSET))(blackboard);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::IBlackboard*>* GetAllParents(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::Boolean includeSelf)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::IBlackboard*>*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETALLPARENTS_OFFSET))(blackboard, includeSelf);
		}

		static ::System::Boolean IsPartOf(::NodeCanvas::Framework::IBlackboard* blackboard, ::NodeCanvas::Framework::IBlackboard* target)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IBlackboard*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_ISPARTOF_OFFSET))(blackboard, target);
		}

		static ::NodeCanvas::Framework::Variable* AddVariable(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* varName, ::System::Object* value)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_ADDVARIABLE_OFFSET))(blackboard, varName, value);
		}

		static ::NodeCanvas::Framework::Variable* AddVariable_1(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* varName, ::System::Type* type)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_ADDVARIABLE_1_OFFSET))(blackboard, varName, type);
		}

		static ::NodeCanvas::Framework::Variable* RemoveVariable(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* varName)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_REMOVEVARIABLE_OFFSET))(blackboard, varName);
		}

		static ::NodeCanvas::Framework::Variable* SetVariableValue(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* varName, ::System::Object* value)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_SETVARIABLEVALUE_OFFSET))(blackboard, varName, value);
		}

		static ::System::Void InitializePropertiesBinding(::NodeCanvas::Framework::IBlackboard* blackboard, ::UnityEngine::Component* target, ::System::Boolean callSetter)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IBlackboard*, ::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_INITIALIZEPROPERTIESBINDING_OFFSET))(blackboard, target, callSetter);
		}

		static ::NodeCanvas::Framework::Variable* GetVariable(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* varName, ::System::Type* ofType)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETVARIABLE_OFFSET))(blackboard, varName, ofType);
		}

		static ::NodeCanvas::Framework::Variable* GetVariableByID(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* ID)
		{
			return ((::NodeCanvas::Framework::Variable*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETVARIABLEBYID_OFFSET))(blackboard, ID);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Variable*>* GetVariables(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::Type* ofType)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Variable*>*(*)(::NodeCanvas::Framework::IBlackboard*, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_GETVARIABLES_OFFSET))(blackboard, ofType);
		}

		static ::System::Void OverwriteFrom(::NodeCanvas::Framework::IBlackboard* blackboard, ::NodeCanvas::Framework::IBlackboard* sourceBlackboard, ::System::Boolean removeMissingVariables)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IBlackboard*, ::NodeCanvas::Framework::IBlackboard*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_OVERWRITEFROM_OFFSET))(blackboard, sourceBlackboard, removeMissingVariables);
		}

		static ::System::Void OverwriteVariable(::NodeCanvas::Framework::IBlackboard* blackboard, ::System::String* varName, ::System::Object* varValue)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IBlackboard*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IBLACKBOARDEXTENSIONS_OVERWRITEVARIABLE_OFFSET))(blackboard, varName, varValue);
		}
	};
}
