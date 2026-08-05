#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E21DA91F1EC19317_Enum_3_3DC591911FF43A91_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E21DA91F1EC19317__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DD050)

inline static constexpr unsigned int Class_1_E21DA91F1EC19317_TypeDefinitionIndex = 68614;

class Class_1_E21DA91F1EC19317 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_9; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::Single Field_1_7; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_6; // 0x28
	::Class_1_E21DA91F1EC19317_Enum_3_3DC591911FF43A91_1 Field_1_10; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_1; // 0x34
	::System::Single Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E21DA91F1EC19317__CTOR_OFFSET))(this);
	}
};
