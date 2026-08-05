#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }
namespace System { class Type; }
namespace System { class TypeInitializationException; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMICWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x1EB80780)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1EB80300)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_1_OFFSET UNITYSDK_OFFSET(0x1EB80270)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_OFFSET UNITYSDK_OFFSET(0x1EB80200)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB80810)

namespace MessagePack
{
	inline static constexpr unsigned int FormatterResolverExtensions_TypeDefinitionIndex = 30886;

	class FormatterResolverExtensions : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::System::Func_2<::MessagePack::IFormatterResolver*, ::MessagePack::Formatters::IMessagePackFormatter*>*>** StaticGet_FormatterGetters()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::System::Func_2<::MessagePack::IFormatterResolver*, ::MessagePack::Formatters::IMessagePackFormatter*>*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterResolverExtensions_TypeDefinitionIndex)->GetStaticField(0x257F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::MessagePack::IFormatterResolver*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>*>** StaticGet_s_DynamicFormatterCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::MessagePack::IFormatterResolver*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterResolverExtensions_TypeDefinitionIndex)->GetStaticField(0x257F8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetFormatterRuntimeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(FormatterResolverExtensions_TypeDefinitionIndex)->GetStaticField(0x25800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void Throw(::System::TypeInitializationException* ex)
		{
			return ((::System::Void(*)(::System::TypeInitializationException*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_OFFSET))(ex);
		}

		static ::System::Void Throw_1(::System::Type* t, ::MessagePack::IFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_1_OFFSET))(t, resolver);
		}

		static ::System::Object* GetFormatterDynamic(::MessagePack::IFormatterResolver* resolver, ::System::Type* type)
		{
			return ((::System::Object*(*)(::MessagePack::IFormatterResolver*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMIC_OFFSET))(resolver, type);
		}

		static ::System::Object* GetFormatterDynamicWithVerify(::MessagePack::IFormatterResolver* resolver, ::System::Type* type)
		{
			return ((::System::Object*(*)(::MessagePack::IFormatterResolver*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMICWITHVERIFY_OFFSET))(resolver, type);
		}
	};
}
