#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T1, typename T2> class Class_1_794C5C54C4B94319;

inline static constexpr unsigned int Class_1_9F8A29CE9345237C_TypeDefinitionIndex = 29288;

template <typename T, typename U>
class Class_1_9F8A29CE9345237C : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_1()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F8A29CE9345237C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Class_1_794C5C54C4B94319<T, U>* Field_1_0; // 0x0
	::Class_1_794C5C54C4B94319<T, U>* Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x0
	::System::Collections::Generic::ICollection_1<T>* Field_1_5; // 0x0
	::System::Collections::Generic::ICollection_1<U>* Field_1_4; // 0x0
	::System::Int32 Field_1_11; // 0x0
	::System::Collections::Generic::IComparer_1<T>* Field_1_10; // 0x0
};
