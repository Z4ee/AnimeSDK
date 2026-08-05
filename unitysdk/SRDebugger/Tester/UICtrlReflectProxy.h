#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_FINDOPENDIALOGMETHOD_OFFSET UNITYSDK_OFFSET(0x12425F00)
#define SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_FINDOPENPAGEMETHOD_OFFSET UNITYSDK_OFFSET(0x12425D10)
#define SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_INVOKEOPENDIALOGMETHOD_OFFSET UNITYSDK_OFFSET(0x12426460)
#define SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_INVOKEOPENMETHOD_INNER_OFFSET UNITYSDK_OFFSET(0x12426160)
#define SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_INVOKEOPENPAGEMETHOD_OFFSET UNITYSDK_OFFSET(0x124260F0)
#define SRDEBUGGER_TESTER_UICTRLREFLECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x124264D0)

namespace SRDebugger::Tester
{
	inline static constexpr unsigned int UICtrlReflectProxy_TypeDefinitionIndex = 95385;

	class UICtrlReflectProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UICTRLREFLECTPROXY__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* FindOpenPageMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_FINDOPENPAGEMETHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* FindOpenDialogMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_FINDOPENDIALOGMETHOD_OFFSET))(this);
		}

		::System::Boolean InvokeOpenPageMethod(::System::Reflection::MethodInfo* methodInfo, ::System::Type* controllerType, ::System::Object* firstParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_INVOKEOPENPAGEMETHOD_OFFSET))(this, methodInfo, controllerType, firstParam);
		}

		::System::Boolean InvokeOpenDialogMethod(::System::Reflection::MethodInfo* methodInfo, ::System::Type* controllerType, ::System::Object* firstParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_INVOKEOPENDIALOGMETHOD_OFFSET))(this, methodInfo, controllerType, firstParam);
		}

		::System::Boolean InvokeOpenMethod_Inner(::System::Reflection::MethodInfo* methodInfo, ::System::Type* controllerType, ::System::Object* firstParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UICTRLREFLECTPROXY_INVOKEOPENMETHOD_INNER_OFFSET))(this, methodInfo, controllerType, firstParam);
		}
	};
}
