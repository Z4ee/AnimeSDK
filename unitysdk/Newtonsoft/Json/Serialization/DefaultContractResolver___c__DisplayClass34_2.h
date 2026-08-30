#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class DefaultContractResolver___c__DisplayClass34_0; }
namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC83C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2__SETEXTENSIONDATADELEGATES_B__1_OFFSET UNITYSDK_OFFSET(0x1BED2100)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass34_2_TypeDefinitionIndex = 9653;

	class DefaultContractResolver___c__DisplayClass34_2 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* createEnumerableWrapper; // 0x10
		::Newtonsoft::Json::Serialization::DefaultContractResolver___c__DisplayClass34_0* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*>>* _SetExtensionDataDelegates_b__1(::System::Object* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*>>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2__SETEXTENSIONDATADELEGATES_B__1_OFFSET))(this, a1);
		}
	};
}
