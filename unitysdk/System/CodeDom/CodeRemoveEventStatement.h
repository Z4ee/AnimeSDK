#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }
namespace System::CodeDom { class CodeEventReferenceExpression; }
namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x19EE54D0)
#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_GET_LISTENER_OFFSET UNITYSDK_OFFSET(0x19EE5550)
#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_SET_EVENT_OFFSET UNITYSDK_OFFSET(0x19EE5510)
#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_SET_LISTENER_OFFSET UNITYSDK_OFFSET(0x19EE5590)
#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EE5450)
#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19EE5490)
#define SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE5410)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeRemoveEventStatement_TypeDefinitionIndex = 4275;

	class CodeRemoveEventStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeEventReferenceExpression* eventRef, ::System::CodeDom::CodeExpression* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeEventReferenceExpression*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT__CTOR_1_OFFSET))(this, eventRef, listener);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeExpression* targetObject, ::System::String* eventName, ::System::CodeDom::CodeExpression* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT__CTOR_2_OFFSET))(this, targetObject, eventName, listener);
		}

		::System::CodeDom::CodeEventReferenceExpression* get_Event()
		{
			return ((::System::CodeDom::CodeEventReferenceExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_GET_EVENT_OFFSET))(this);
		}

		::System::Void set_Event(::System::CodeDom::CodeEventReferenceExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeEventReferenceExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_SET_EVENT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Listener()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_GET_LISTENER_OFFSET))(this);
		}

		::System::Void set_Listener(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREMOVEEVENTSTATEMENT_SET_LISTENER_OFFSET))(this, value);
		}
	};
}
