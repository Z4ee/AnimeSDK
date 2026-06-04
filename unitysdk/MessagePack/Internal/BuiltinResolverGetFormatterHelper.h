#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1814EA60)
#define MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1814ECB0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int BuiltinResolverGetFormatterHelper_TypeDefinitionIndex = 7262;

	class BuiltinResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BuiltinResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x9150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(a1);
		}
	};
}
