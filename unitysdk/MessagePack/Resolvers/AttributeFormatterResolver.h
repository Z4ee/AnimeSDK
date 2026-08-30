#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D56B370)
#define MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B360)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int AttributeFormatterResolver_TypeDefinitionIndex = 7196;

	class AttributeFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::AttributeFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::AttributeFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(AttributeFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x38820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER__CCTOR_OFFSET))();
		}
	};
}
