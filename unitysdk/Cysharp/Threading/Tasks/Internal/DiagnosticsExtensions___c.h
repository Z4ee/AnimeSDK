#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D74DA90)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D74DAF0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D74D8E0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CLEANUPASYNCSTACKTRACE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D74D930)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74D920)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int DiagnosticsExtensions___c_TypeDefinitionIndex = 43073;

	class DiagnosticsExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions___c_TypeDefinitionIndex)->GetStaticField(0x61A10);
		}
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions___c_TypeDefinitionIndex)->GetStaticField(0x61A18);
		}
		static ::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Internal::DiagnosticsExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions___c_TypeDefinitionIndex)->GetStaticField(0x61A20);
		}
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions___c_TypeDefinitionIndex)->GetStaticField(0x61A28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::String* _CleanupAsyncStackTrace_b__3_0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__CLEANUPASYNCSTACKTRACE_B__3_0_OFFSET))(this, a1);
		}

		::System::String* _BeautifyType_b__6_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_0_OFFSET))(this, a1);
		}

		::System::String* _BeautifyType_b__6_1(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS___C__BEAUTIFYTYPE_B__6_1_OFFSET))(this, a1);
		}
	};
}
