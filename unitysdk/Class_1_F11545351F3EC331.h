#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4317D736DC46A08B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_F11545351F3EC331_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x132A8CC0)
#define CLASS_1_F11545351F3EC331_METHOD_1_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x132A9060)
#define CLASS_1_F11545351F3EC331_METHOD_1_86B2586D8C91C749_OFFSET UNITYSDK_OFFSET(0x132A8D70)
#define CLASS_1_F11545351F3EC331_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x132A8F90)
#define CLASS_1_F11545351F3EC331__CTOR_OFFSET UNITYSDK_OFFSET(0x132A8CB0)

inline static constexpr unsigned int Class_1_F11545351F3EC331_TypeDefinitionIndex = 82760;

class Class_1_F11545351F3EC331 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x14
	::Enum_3_4317D736DC46A08B Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F11545351F3EC331__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F11545351F3EC331_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_86B2586D8C91C749(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F11545351F3EC331_METHOD_1_86B2586D8C91C749_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F11545351F3EC331_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F11545351F3EC331_METHOD_1_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}
};
