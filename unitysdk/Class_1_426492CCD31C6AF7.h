#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F18EBDF0A8D837A4.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_426492CCD31C6AF7_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x109BF110)
#define CLASS_1_426492CCD31C6AF7_FROMFLX_OFFSET UNITYSDK_OFFSET(0x109BF390)
#define CLASS_1_426492CCD31C6AF7_METHOD_1_0E51239C21E29F50_OFFSET UNITYSDK_OFFSET(0x109BF170)
#define CLASS_1_426492CCD31C6AF7_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x109BF410)
#define CLASS_1_426492CCD31C6AF7__CTOR_OFFSET UNITYSDK_OFFSET(0x109BF950)

inline static constexpr unsigned int Class_1_426492CCD31C6AF7_TypeDefinitionIndex = 63802;

class Class_1_426492CCD31C6AF7 : public ::System::Object
{
public:
	::MoleMole::Config::BaseProperty Field_1_0; // 0x10
	::System::Single Field_1_3; // 0x14
	::System::Single Field_1_2; // 0x18
	::Enum_3_F18EBDF0A8D837A4 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426492CCD31C6AF7__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_426492CCD31C6AF7_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_426492CCD31C6AF7_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0E51239C21E29F50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_426492CCD31C6AF7_METHOD_1_0E51239C21E29F50_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_426492CCD31C6AF7_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}
};
