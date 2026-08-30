#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Reflection { class MethodBase; }
namespace System::Text::RegularExpressions { class Regex; }

#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_APPENDHYPERLINK_OFFSET UNITYSDK_OFFSET(0x1D74CCD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_BEAUTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1D74C210)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_CLEANUPASYNCSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1D74A860)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_IGNORELINE_OFFSET UNITYSDK_OFFSET(0x1D74B600)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_ISASYNC_OFFSET UNITYSDK_OFFSET(0x1D74B8F0)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_TRYRESOLVESTATEMACHINEMETHOD_OFFSET UNITYSDK_OFFSET(0x1D74BA20)
#define CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D74CF30)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int DiagnosticsExtensions_TypeDefinitionIndex = 43072;

	class DiagnosticsExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_builtInTypeNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions_TypeDefinitionIndex)->GetStaticField(0x61A30);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_typeBeautifyRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions_TypeDefinitionIndex)->GetStaticField(0x61A38);
		}
		static ::System::Boolean* StaticGet_displayFilenames()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsExtensions_TypeDefinitionIndex)->GetStaticField(0x14100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::String* CleanupAsyncStackTrace(::System::Diagnostics::StackTrace* a1)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackTrace*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_CLEANUPASYNCSTACKTRACE_OFFSET))(a1);
		}

		static ::System::Boolean IsAsync(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_ISASYNC_OFFSET))(a1);
		}

		static ::System::Boolean TryResolveStateMachineMethod(::System::Reflection::MethodBase*& a1, ::System::Type*& a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*&, ::System::Type*&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_TRYRESOLVESTATEMACHINEMETHOD_OFFSET))(a1, a2);
		}

		static ::System::String* BeautifyType(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_BEAUTIFYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IgnoreLine(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_IGNORELINE_OFFSET))(a1);
		}

		static ::System::String* AppendHyperLink(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_DIAGNOSTICSEXTENSIONS_APPENDHYPERLINK_OFFSET))(a1, a2);
		}
	};
}
