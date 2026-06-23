#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_7E951C32CD9CF51B;
class Class_1_81D5D0E008D02E22;

#define CLASS_1_47BE83B98D666EC1_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x13307AB0)
#define CLASS_1_47BE83B98D666EC1_METHOD_1_5EC289B2C3B1836B_OFFSET UNITYSDK_OFFSET(0x13307630)
#define CLASS_1_47BE83B98D666EC1_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x13306E70)
#define CLASS_1_47BE83B98D666EC1_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x13306DA0)
#define CLASS_1_47BE83B98D666EC1__CTOR_OFFSET UNITYSDK_OFFSET(0x13306D90)

inline static constexpr unsigned int Class_1_47BE83B98D666EC1_TypeDefinitionIndex = 67399;

class Class_1_47BE83B98D666EC1 : public ::System::Object
{
public:
	::Class_1_7E951C32CD9CF51B* Field_1_0; // 0x10
	::Class_1_81D5D0E008D02E22* Field_1_1; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47BE83B98D666EC1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_47BE83B98D666EC1_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_47BE83B98D666EC1_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5EC289B2C3B1836B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47BE83B98D666EC1_METHOD_1_5EC289B2C3B1836B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_47BE83B98D666EC1_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}
};
