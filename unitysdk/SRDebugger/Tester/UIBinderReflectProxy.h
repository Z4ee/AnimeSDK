#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_FINDOPENDIALOGMETHOD_OFFSET UNITYSDK_OFFSET(0x12425260)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_FINDOPENPAGEMETHOD_OFFSET UNITYSDK_OFFSET(0x12425070)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENDIALOGMETHOD_OFFSET UNITYSDK_OFFSET(0x124257C0)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENMETHOD_INNER_OFFSET UNITYSDK_OFFSET(0x124254C0)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY_INVOKEOPENPAGEMETHOD_OFFSET UNITYSDK_OFFSET(0x12425450)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x12425830)

namespace SRDebugger::Tester
{
	inline static constexpr unsigned int UIBinderReflectProxy_TypeDefinitionIndex = 95395;

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
