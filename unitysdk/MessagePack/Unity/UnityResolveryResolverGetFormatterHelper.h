#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1E6D5800)
#define MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D5900)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolveryResolverGetFormatterHelper_TypeDefinitionIndex = 29866;

	class UnityResolveryResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UnityResolveryResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x26340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(t);
		}
	};
}
