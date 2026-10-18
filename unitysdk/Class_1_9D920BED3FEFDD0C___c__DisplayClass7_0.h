#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D920BED3FEFDD0C;
class Class_1_E777D0504F5995FF;

#define CLASS_1_9D920BED3FEFDD0C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1266AB10)
#define CLASS_1_9D920BED3FEFDD0C___C__DISPLAYCLASS7_0__EXITSESSION_B__0_OFFSET UNITYSDK_OFFSET(0x1266AC40)

inline static constexpr unsigned int Class_1_9D920BED3FEFDD0C___c__DisplayClass7_0_TypeDefinitionIndex = 80226;

class Class_1_9D920BED3FEFDD0C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_9D920BED3FEFDD0C* __4__this; // 0x10
	::Class_1_E777D0504F5995FF* session; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D920BED3FEFDD0C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _ExitSession_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D920BED3FEFDD0C___C__DISPLAYCLASS7_0__EXITSESSION_B__0_OFFSET))(this);
	}
};
