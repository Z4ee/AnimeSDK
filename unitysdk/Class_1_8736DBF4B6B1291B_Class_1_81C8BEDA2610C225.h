#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5469D397DAE62876;
class Class_1_C1EF032BF58D5C23;
class Class_2_850C234AA2B8A0A3;

#define CLASS_1_8736DBF4B6B1291B_CLASS_1_81C8BEDA2610C225_CLEAR_OFFSET UNITYSDK_OFFSET(0x117795E0)
#define CLASS_1_8736DBF4B6B1291B_CLASS_1_81C8BEDA2610C225__CTOR_OFFSET UNITYSDK_OFFSET(0x11779660)

inline static constexpr unsigned int Class_1_8736DBF4B6B1291B_Class_1_81C8BEDA2610C225_TypeDefinitionIndex = 44896;

class Class_1_8736DBF4B6B1291B_Class_1_81C8BEDA2610C225 : public ::System::Object
{
public:
	::Class_1_C1EF032BF58D5C23* Field_1_1; // 0x10
	::Class_2_850C234AA2B8A0A3* Field_1_0; // 0x18
	::Class_1_5469D397DAE62876* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_CLASS_1_81C8BEDA2610C225__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8736DBF4B6B1291B_CLASS_1_81C8BEDA2610C225_CLEAR_OFFSET))(this);
	}
};
