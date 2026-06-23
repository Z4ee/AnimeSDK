#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_A09FD06BA66A78D7;
class Class_3_5570C1FC79BD430A;
class Class_3_8B38DDDE25B29A1E;
class Class_3_920D00A4D2C57DD8_18;
class Class_3_9D37E1638DCEF44B;
class Class_3_9F2FCC0519F3E06F_68;
class Class_3_C7494A62DFBED8A3_1;
class Class_3_CE3642B3ECB61D27_38;
class Class_3_DE5C2CE2978AA8BF_3;
namespace System { class String; }

#define CLASS_1_1BB2A280EFB76718_METHOD_1_437104B6108A6647_OFFSET UNITYSDK_OFFSET(0x1432A450)
#define CLASS_1_1BB2A280EFB76718__CTOR_OFFSET UNITYSDK_OFFSET(0x1432A3F0)

inline static constexpr unsigned int Class_1_1BB2A280EFB76718_TypeDefinitionIndex = 71347;

class Class_1_1BB2A280EFB76718 : public ::System::Object
{
public:
	::Class_3_920D00A4D2C57DD8_18* Field_1_5; // 0x10
	::Class_3_8B38DDDE25B29A1E* Field_1_6; // 0x18
	::Class_3_9F2FCC0519F3E06F_68* Field_1_3; // 0x20
	::Class_3_CE3642B3ECB61D27_38* Field_1_2; // 0x28
	::Class_3_DE5C2CE2978AA8BF_3* Field_1_7; // 0x30
	::Class_3_C7494A62DFBED8A3_1* Field_1_8; // 0x38
	::Class_3_9D37E1638DCEF44B* Field_1_4; // 0x40
	::System::String* Field_1_1; // 0x48
	::Enum_3_01618AD0437C8486 Field_1_0; // 0x50

	::System::Void _ctor(::Class_3_5570C1FC79BD430A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5570C1FC79BD430A*))((::PBYTE)hIl2Cpp + CLASS_1_1BB2A280EFB76718__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_437104B6108A6647(::Class_1_A09FD06BA66A78D7*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A09FD06BA66A78D7*&))((::PBYTE)hIl2Cpp + CLASS_1_1BB2A280EFB76718_METHOD_1_437104B6108A6647_OFFSET))(this, a1);
	}
};
