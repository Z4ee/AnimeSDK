#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18155B30)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x18152E10)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18155B90)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicGenericResolverGetFormatterHelper_TypeDefinitionIndex = 7263;

	class DynamicGenericResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x9370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(a1);
		}

		static ::System::Object* CreateInstance(::System::Type* a1, ::Il2CppArray<::System::Type*>* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_CREATEINSTANCE_OFFSET))(a1, a2, a3);
		}
	};
}
