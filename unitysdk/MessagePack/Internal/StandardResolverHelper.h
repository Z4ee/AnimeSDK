#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }

#define MESSAGEPACK_INTERNAL_STANDARDRESOLVERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E27E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int StandardResolverHelper_TypeDefinitionIndex = 30741;

	class StandardResolverHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_DefaultResolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverHelper_TypeDefinitionIndex)->GetStaticField(0x23AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STANDARDRESOLVERHELPER__CCTOR_OFFSET))();
		}
	};
}
