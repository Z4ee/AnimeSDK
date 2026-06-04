#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class Assembly; }

#define MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181918B0)
#define MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x181918A0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int SourceGeneratedFormatterResolver_TypeDefinitionIndex = 7226;

	class SourceGeneratedFormatterResolver : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::Assembly*, ::MessagePack::IFormatterResolver*>** StaticGet_AssemblyResolverCache()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::Assembly*, ::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(SourceGeneratedFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x9970);
		}
		static ::MessagePack::Resolvers::SourceGeneratedFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::SourceGeneratedFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(SourceGeneratedFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x9978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER__CCTOR_OFFSET))();
		}
	};
}
