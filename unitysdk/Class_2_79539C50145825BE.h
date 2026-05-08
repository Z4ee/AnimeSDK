#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_9.h"
#include "unitysdk/Enum_3_9BF81AE22E7B99D1.h"

class Class_1_E053999CF96A442A;
class Class_3_1F91C9D4E7F7F808;
class Class_3_DF51DE504C82D3C3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_79539C50145825BE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C940B0)
#define CLASS_2_79539C50145825BE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C93D10)

inline static constexpr unsigned int Class_2_79539C50145825BE_TypeDefinitionIndex = 72454;

class Class_2_79539C50145825BE : public ::Class_1_83665B095F1535B5_9
{
public:
	::System::String* Field_2_0; // 0x18
	::Class_1_E053999CF96A442A* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_E053999CF96A442A*>* Field_2_5; // 0x28
	::System::String* Field_2_2; // 0x30
	::System::String* Field_2_1; // 0x38
	::Class_1_E053999CF96A442A* Field_2_7; // 0x40
	::Enum_3_9BF81AE22E7B99D1 Field_2_8; // 0x48
	::System::Int32 Field_2_11; // 0x4C
	::System::Boolean Field_2_13; // 0x50
	::System::Boolean Field_2_9; // 0x51
	::System::Boolean Field_2_10; // 0x52
	::System::Boolean Field_2_3; // 0x53
	::System::Boolean Field_2_4; // 0x54
	::System::Boolean Field_2_12; // 0x55

	::System::Void _ctor(::Class_3_DF51DE504C82D3C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DF51DE504C82D3C3*))((::PBYTE)hIl2Cpp + CLASS_2_79539C50145825BE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_1F91C9D4E7F7F808* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1F91C9D4E7F7F808*))((::PBYTE)hIl2Cpp + CLASS_2_79539C50145825BE__CTOR_1_OFFSET))(this, a1);
	}
};
