#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1814AFB0)
#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1814AFA0)

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableCollectionResolver_TypeDefinitionIndex = 7322;

	class ImmutableCollectionResolver : public ::System::Object
	{
	public:
		static ::MessagePack::ImmutableCollection::ImmutableCollectionResolver** StaticGet_Instance()
		{
			return (::MessagePack::ImmutableCollection::ImmutableCollectionResolver**)Il2CppClass::FromTypeDefinitionIndex(ImmutableCollectionResolver_TypeDefinitionIndex)->GetStaticField(0x8FA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONRESOLVER__CCTOR_OFFSET))();
		}
	};
}
