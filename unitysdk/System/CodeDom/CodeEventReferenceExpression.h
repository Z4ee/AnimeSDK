#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1E27CCB0)
#define SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1E27CD30)
#define SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1E27CCF0)
#define SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1E27CD70)
#define SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27CC70)
#define SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E27CC30)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeEventReferenceExpression_TypeDefinitionIndex = 4241;

	class CodeEventReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, targetObject, eventName);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void set_EventName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_SET_EVENTNAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEVENTREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}
	};
}
