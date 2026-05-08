#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/BBParameter_1.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_GETVALUEBOXED_OFFSET UNITYSDK_OFFSET(0x1B4603C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B460320)
#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_GET_VARTYPE_OFFSET UNITYSDK_OFFSET(0x1B4602E0)
#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_SETTYPE_OFFSET UNITYSDK_OFFSET(0x1B4604C0)
#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_SETVALUEBOXED_OFFSET UNITYSDK_OFFSET(0x1B460450)
#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B4603B0)
#define NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B460520)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int TaskAgentParameter_TypeDefinitionIndex = 28035;

	class TaskAgentParameter : public ::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Object*>
	{
	public:
		::System::Type* _type; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Type* get_varType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_GET_VARTYPE_OFFSET))(this);
		}

		::UnityEngine::Object* get_value()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Object* GetValueBoxed()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_GETVALUEBOXED_OFFSET))(this);
		}

		::System::Void SetValueBoxed(::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_SETVALUEBOXED_OFFSET))(this, newValue);
		}

		::System::Void SetType(::System::Type* newType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_TASKAGENTPARAMETER_SETTYPE_OFFSET))(this, newType);
		}
	};
}
