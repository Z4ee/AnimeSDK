#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

inline static constexpr unsigned int Class_1_0D912EB8FF0B361F_TypeDefinitionIndex = 25541;

template <typename T>
class Class_1_0D912EB8FF0B361F : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D912EB8FF0B361F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::System::Int32 Field_1_3; // 0x0
	::Il2CppArray<T>* Field_1_4; // 0x0
	::System::Int32 Field_1_5; // 0x0
	::System::Int32 Field_1_6; // 0x0
};
