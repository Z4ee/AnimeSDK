#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5452947417BCF16A;
class Class_1_97E659ED8D5D259C_25;

#define CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16931BE0)
#define CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS49_0___APPLYPREMATCHTRACKINFO_B__0_OFFSET UNITYSDK_OFFSET(0x16931F80)

inline static constexpr unsigned int Class_1_E66A76128908BBEC___c__DisplayClass49_0_TypeDefinitionIndex = 80386;

class Class_1_E66A76128908BBEC___c__DisplayClass49_0 : public ::System::Object
{
public:
	::Class_1_97E659ED8D5D259C_25* info; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __ApplyPreMatchTrackInfo_b__0(::Class_1_5452947417BCF16A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5452947417BCF16A*))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__DISPLAYCLASS49_0___APPLYPREMATCHTRACKINFO_B__0_OFFSET))(this, a1);
	}
};
