#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D572E70)
#define MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D572E60)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StaticEnumResolver_TypeDefinitionIndex = 7223;

	class StaticEnumResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::StaticEnumResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StaticEnumResolver**)Il2CppClass::FromTypeDefinitionIndex(StaticEnumResolver_TypeDefinitionIndex)->GetStaticField(0x38840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER__CCTOR_OFFSET))();
		}
	};
}
