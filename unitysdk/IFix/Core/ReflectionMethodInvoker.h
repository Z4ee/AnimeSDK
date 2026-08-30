#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/IFix/Core/ValueType.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_DESCRIBEOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1CC74D00)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_DESCRIBEOBJECT_OFFSET UNITYSDK_OFFSET(0x1CC74800)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_DUMPASYNCBUILDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1CC74E50)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_FORMATARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1CC746D0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_FORMATVALUE_OFFSET UNITYSDK_OFFSET(0x1CC74400)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CC73E10)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC758C0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_ISASYNCMETHODBUILDERDIAGNOSTICMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC73ED0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_ISWRITABLEVALUETYPETHISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1CC73EB0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC72FA0)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 10063;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* outFlags; // 0x10
		::Il2CppArray<::System::Type*>* rawTypes; // 0x18
		::System::Reflection::ConstructorInfo* ctor; // 0x20
		::IFix::Core::TypeInfo* retTypeInfo; // 0x28
		::System::Type* mDeclaringType; // 0x30
		::System::Reflection::MethodBase* method; // 0x38
		::Il2CppArray<::System::Boolean>* refFlags; // 0x40
		::System::Type* returnType; // 0x48
		::System::Boolean hasThis; // 0x50
		::System::Boolean hasReturn; // 0x51
		::System::Boolean isNullableValue; // 0x52
		::System::Boolean isNullableHasValue; // 0x53
		::System::Int32 paramCount; // 0x54
		::System::Boolean IsConstructor; // 0x58
		::System::Boolean IsDirectCall; // 0x59

		::System::Void _ctor(::System::Reflection::MethodBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		static ::System::Boolean isWritableValueTypeThisReference(::IFix::Core::ValueType a1)
		{
			return ((::System::Boolean(*)(::IFix::Core::ValueType))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_ISWRITABLEVALUETYPETHISREFERENCE_OFFSET))(a1);
		}

		static ::System::Boolean isAsyncMethodBuilderDiagnosticMethod(::System::Reflection::MethodBase* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_ISASYNCMETHODBUILDERDIAGNOSTICMETHOD_OFFSET))(a1, a2);
		}

		static ::System::String* formatValue(::IFix::Core::Value* a1)
		{
			return ((::System::String*(*)(::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_FORMATVALUE_OFFSET))(a1);
		}

		static ::System::String* formatArguments(::IFix::Core::Value* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::IFix::Core::Value*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_FORMATARGUMENTS_OFFSET))(a1, a2);
		}

		static ::System::String* describeObject(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_DESCRIBEOBJECT_OFFSET))(a1);
		}

		static ::System::String* describeObjectArray(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_DESCRIBEOBJECTARRAY_OFFSET))(a1);
		}

		static ::System::String* dumpAsyncBuilderObject(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_DUMPASYNCBUILDEROBJECT_OFFSET))(a1);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* a1, ::IFix::Core::Call& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
