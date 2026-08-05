#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }
namespace System::CodeDom { class CodeEventReferenceExpression; }
namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x1DEADD60)
#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_GET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1DEADDE0)
#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_SET_EVENT_OFFSET UNITYSDK_OFFSET(0x1DEADDA0)
#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_SET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1DEADE20)
#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEADCE0)
#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DEADD20)
#define SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEADCA0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeAttachEventStatement_TypeDefinitionIndex = 4240;

	class CodeAttachEventStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeEventReferenceExpression* eventRef, ::System::CodeDom::CodeExpression* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeEventReferenceExpression*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT__CTOR_1_OFFSET))(this, eventRef, listener);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeExpression* targetObject, ::System::String* eventName, ::System::CodeDom::CodeExpression* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT__CTOR_2_OFFSET))(this, targetObject, eventName, listener);
		}

		::System::CodeDom::CodeEventReferenceExpression* get_Event()
		{
			return ((::System::CodeDom::CodeEventReferenceExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_GET_EVENT_OFFSET))(this);
		}

		::System::Void set_Event(::System::CodeDom::CodeEventReferenceExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeEventReferenceExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_SET_EVENT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Listener()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_GET_LISTENER_OFFSET))(this);
		}

		::System::Void set_Listener(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTACHEVENTSTATEMENT_SET_LISTENER_OFFSET))(this, value);
		}
	};
}
