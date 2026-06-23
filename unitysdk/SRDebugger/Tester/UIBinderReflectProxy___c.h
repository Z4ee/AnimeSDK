#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A69510)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A69550)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENDIALOGMETHOD_B__1_0_OFFSET UNITYSDK_OFFSET(0x11A697A0)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENPAGEMETHOD_B__0_0_OFFSET UNITYSDK_OFFSET(0x11A69560)

namespace SRDebugger::Tester
{
	inline static constexpr unsigned int UIBinderReflectProxy___c_TypeDefinitionIndex = 91487;

	class UIBinderReflectProxy___c : public ::System::Object
	{
	public:
		static ::SRDebugger::Tester::UIBinderReflectProxy___c** StaticGet___9()
		{
			return (::SRDebugger::Tester::UIBinderReflectProxy___c**)Il2CppClass::FromTypeDefinitionIndex(UIBinderReflectProxy___c_TypeDefinitionIndex)->GetStaticField(0x4F370);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBinderReflectProxy___c_TypeDefinitionIndex)->GetStaticField(0x4F378);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBinderReflectProxy___c_TypeDefinitionIndex)->GetStaticField(0x4F380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindOpenPageMethod_b__0_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENPAGEMETHOD_B__0_0_OFFSET))(this, m);
		}

		::System::Boolean _FindOpenDialogMethod_b__1_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENDIALOGMETHOD_B__1_0_OFFSET))(this, m);
		}
	};
}
