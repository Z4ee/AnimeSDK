#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x15D24F30)
#define MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D25030)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolveryResolverGetFormatterHelper_TypeDefinitionIndex = 9877;

	class UnityResolveryResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UnityResolveryResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(typeHandle);
		}
	};
}
