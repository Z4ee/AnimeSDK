#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class RegisterDictionaryKeyPathProviderAttribute; }
namespace System::Reflection { class Assembly; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD4010)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0___CCTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1FBD4020)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility___c__DisplayClass12_0_TypeDefinitionIndex = 7567;

	class DictionaryKeyUtility___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* ass; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::__f__AnonymousType0_2<::System::Reflection::Assembly*, ::Sirenix::Serialization::RegisterDictionaryKeyPathProviderAttribute*>* __cctor_b__2(::System::Object* attr)
		{
			return ((::__f__AnonymousType0_2<::System::Reflection::Assembly*, ::Sirenix::Serialization::RegisterDictionaryKeyPathProviderAttribute*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0___CCTOR_B__2_OFFSET))(this, attr);
		}
	};
}
