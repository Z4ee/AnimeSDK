#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1D38CD90)
#define MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1D38CE00)
#define MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D38CCA0)
#define MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D38CE70)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int CompositeResolver_TypeDefinitionIndex = 30548;

	class CompositeResolver : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet_EmptyFormattersByType()
		{
			return (::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(CompositeResolver_TypeDefinitionIndex)->GetStaticField(0x246D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER__CCTOR_OFFSET))();
		}

		static ::MessagePack::IFormatterResolver* Create(::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::MessagePack::IFormatterResolver*(*)(::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>*, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CREATE_OFFSET))(formatters, resolvers);
		}

		static ::MessagePack::IFormatterResolver* Create_1(::Il2CppArray<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::MessagePack::IFormatterResolver*(*)(::Il2CppArray<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CREATE_1_OFFSET))(resolvers);
		}

		static ::MessagePack::IFormatterResolver* Create_2(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* formatters)
		{
			return ((::MessagePack::IFormatterResolver*(*)(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CREATE_2_OFFSET))(formatters);
		}
	};
}
