#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_9.h"
#include "unitysdk/Enum_3_9BF81AE22E7B99D1.h"

class Class_1_E053999CF96A442A;
class Class_3_9EE35545E0570D71_1;
class Class_3_DF51DE504C82D3C3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_79539C50145825BE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x133D5C90)
#define CLASS_2_79539C50145825BE__CTOR_OFFSET UNITYSDK_OFFSET(0x133D5920)

inline static constexpr unsigned int Class_2_79539C50145825BE_TypeDefinitionIndex = 75881;

class Class_2_79539C50145825BE : public ::Class_1_83665B095F1535B5_9
{
public:
	::System::String* Field_2_7; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x28
	::Class_1_E053999CF96A442A* Field_2_11; // 0x30
	::Class_1_E053999CF96A442A* Field_2_10; // 0x38
	::System::Collections::Generic::List_1<::Class_1_E053999CF96A442A*>* Field_2_4; // 0x40
	::System::Boolean Field_2_8; // 0x48
	::System::Boolean Field_2_13; // 0x49
	::System::Int32 Field_2_14; // 0x4C
	::System::Boolean Field_2_12; // 0x50
	::System::Boolean Field_2_5; // 0x51
	::System::Boolean Field_2_15; // 0x52
	::System::Boolean Field_2_6; // 0x53
	::Enum_3_9BF81AE22E7B99D1 Field_2_9; // 0x54

	::System::Void _ctor(::Class_3_DF51DE504C82D3C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DF51DE504C82D3C3*))((::PBYTE)hIl2Cpp + CLASS_2_79539C50145825BE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_9EE35545E0570D71_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9EE35545E0570D71_1*))((::PBYTE)hIl2Cpp + CLASS_2_79539C50145825BE__CTOR_1_OFFSET))(this, a1);
	}
};
