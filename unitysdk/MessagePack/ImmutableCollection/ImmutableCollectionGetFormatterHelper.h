#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONGETFORMATTERHELPER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x14F796C0)
#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x14F78FF0)
#define MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F79780)

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableCollectionGetFormatterHelper_TypeDefinitionIndex = 7330;

	class ImmutableCollectionGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableCollectionGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x9700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONGETFORMATTERHELPER_GETFORMATTER_OFFSET))(a1);
		}

		static ::System::Object* CreateInstance(::System::Type* a1, ::Il2CppArray<::System::Type*>* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_IMMUTABLECOLLECTION_IMMUTABLECOLLECTIONGETFORMATTERHELPER_CREATEINSTANCE_OFFSET))(a1, a2, a3);
		}
	};
}
