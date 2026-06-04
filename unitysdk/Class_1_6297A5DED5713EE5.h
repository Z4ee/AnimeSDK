#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_0EF1FE815B5E0EF7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6297A5DED5713EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x134C9CA0)

inline static constexpr unsigned int Class_1_6297A5DED5713EE5_TypeDefinitionIndex = 57103;

class Class_1_6297A5DED5713EE5 : public ::System::Object
{
public:
	::Class_1_0EF1FE815B5E0EF7* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::Nullable_1<::System::Boolean> Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6297A5DED5713EE5__CTOR_OFFSET))(this);
	}
};
