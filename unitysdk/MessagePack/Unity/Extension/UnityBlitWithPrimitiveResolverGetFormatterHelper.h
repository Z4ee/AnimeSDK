#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVERESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1B0B5420)
#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVERESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0B5530)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitWithPrimitiveResolverGetFormatterHelper_TypeDefinitionIndex = 28240;

	class UnityBlitWithPrimitiveResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(UnityBlitWithPrimitiveResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x20AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVERESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVERESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(t);
		}
	};
}
