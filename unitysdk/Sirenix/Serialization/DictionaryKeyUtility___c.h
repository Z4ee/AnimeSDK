#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class RegisterDictionaryKeyPathProviderAttribute; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB97DE0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB97E20)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1FB97E30)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_1_OFFSET UNITYSDK_OFFSET(0x1FB97FB0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility___c_TypeDefinitionIndex = 7568;

	class DictionaryKeyUtility___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::DictionaryKeyUtility___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::DictionaryKeyUtility___c**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility___c_TypeDefinitionIndex)->GetStaticField(0x6360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::__f__AnonymousType0_2<::System::Reflection::Assembly*, ::Sirenix::Serialization::RegisterDictionaryKeyPathProviderAttribute*>*>* __cctor_b__12_0(::System::Reflection::Assembly* ass)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::__f__AnonymousType0_2<::System::Reflection::Assembly*, ::Sirenix::Serialization::RegisterDictionaryKeyPathProviderAttribute*>*>*(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_0_OFFSET))(this, ass);
		}

		::System::Boolean __cctor_b__12_1(::__f__AnonymousType0_2<::System::Reflection::Assembly*, ::Sirenix::Serialization::RegisterDictionaryKeyPathProviderAttribute*>* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType0_2<::System::Reflection::Assembly*, ::Sirenix::Serialization::RegisterDictionaryKeyPathProviderAttribute*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_1_OFFSET))(this, n);
		}
	};
}
