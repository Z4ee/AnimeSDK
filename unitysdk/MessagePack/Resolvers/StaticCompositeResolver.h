#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x1BCC7820)
#define MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER_REGISTER_2_OFFSET UNITYSDK_OFFSET(0x1BCC78D0)
#define MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BCC7770)
#define MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCC79B0)
#define MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC7750)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StaticCompositeResolver_TypeDefinitionIndex = 30491;

	class StaticCompositeResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::StaticCompositeResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StaticCompositeResolver**)Il2CppClass::FromTypeDefinitionIndex(StaticCompositeResolver_TypeDefinitionIndex)->GetStaticField(0x241F0);
		}
		::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* resolvers; // 0x18
		::System::Boolean freezed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER__CCTOR_OFFSET))();
		}

		::System::Void Register(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* formatters)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER_REGISTER_OFFSET))(this, formatters);
		}

		::System::Void Register_1(::Il2CppArray<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER_REGISTER_1_OFFSET))(this, resolvers);
		}

		::System::Void Register_2(::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>*, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICCOMPOSITERESOLVER_REGISTER_2_OFFSET))(this, formatters, resolvers);
		}
	};
}
