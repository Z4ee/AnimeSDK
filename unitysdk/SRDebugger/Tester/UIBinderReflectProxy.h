#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_FINDOPENDIALOGMETHOD_OFFSET UNITYSDK_OFFSET(0x11A68F20)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_FINDOPENPAGEMETHOD_OFFSET UNITYSDK_OFFSET(0x11A68D30)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENDIALOGMETHOD_OFFSET UNITYSDK_OFFSET(0x11A69490)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENMETHOD_INNER_OFFSET UNITYSDK_OFFSET(0x11A69180)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENPAGEMETHOD_OFFSET UNITYSDK_OFFSET(0x11A69110)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x11A69500)

namespace SRDebugger::Tester
{
	inline static constexpr unsigned int UIBinderReflectProxy_TypeDefinitionIndex = 91486;

	class UIBinderReflectProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* FindOpenPageMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_FINDOPENPAGEMETHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* FindOpenDialogMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_FINDOPENDIALOGMETHOD_OFFSET))(this);
		}

		::System::Boolean InvokeOpenPageMethod(::System::Reflection::MethodInfo* methodInfo, ::System::Type* controllerType, ::System::Object* firstParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENPAGEMETHOD_OFFSET))(this, methodInfo, controllerType, firstParam);
		}

		::System::Boolean InvokeOpenDialogMethod(::System::Reflection::MethodInfo* methodInfo, ::System::Type* controllerType, ::System::Object* firstParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENDIALOGMETHOD_OFFSET))(this, methodInfo, controllerType, firstParam);
		}

		::System::Boolean InvokeOpenMethod_Inner(::System::Reflection::MethodInfo* methodInfo, ::System::Type* controllerType, ::System::Object* firstParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENMETHOD_INNER_OFFSET))(this, methodInfo, controllerType, firstParam);
		}
	};
}
