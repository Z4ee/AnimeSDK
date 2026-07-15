#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JEnumerable_1_TypeDefinitionIndex = 9436;

	template <typename T>
	struct JEnumerable_1
	{
		static ::Newtonsoft::Json::Linq::JEnumerable_1<T>* StaticGet_Empty()
		{
			return (::Newtonsoft::Json::Linq::JEnumerable_1<T>*)Il2CppClass::FromTypeDefinitionIndex(JEnumerable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::IEnumerable_1<T>* _enumerable; // 0x0
	};
}
