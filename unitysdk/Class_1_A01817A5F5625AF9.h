#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;

#define CLASS_1_A01817A5F5625AF9__CTOR_OFFSET UNITYSDK_OFFSET(0x152E4980)

inline static constexpr unsigned int Class_1_A01817A5F5625AF9_TypeDefinitionIndex = 75624;

class Class_1_A01817A5F5625AF9 : public ::System::Object
{
public:
	::Class_2_7EA45D2647F35CDD* Field_1_0; // 0x10
	::Class_1_D294488719556168* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::Class_1_D294488719556168* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::Class_1_D294488719556168*))((::PBYTE)hIl2Cpp + CLASS_1_A01817A5F5625AF9__CTOR_OFFSET))(this, a1, a2);
	}
};
