#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_EA5A78559ECD45B1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1503ACC0)
#define CLASS_1_EA5A78559ECD45B1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1503AF90)
#define CLASS_1_EA5A78559ECD45B1_METHOD_1_4A800470AF0169D6_OFFSET UNITYSDK_OFFSET(0x1503AD20)
#define CLASS_1_EA5A78559ECD45B1_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1503B010)
#define CLASS_1_EA5A78559ECD45B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1503B550)

inline static constexpr unsigned int Class_1_EA5A78559ECD45B1_TypeDefinitionIndex = 83985;

class Class_1_EA5A78559ECD45B1 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A78559ECD45B1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A78559ECD45B1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_EA5A78559ECD45B1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_EA5A78559ECD45B1_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4A800470AF0169D6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A78559ECD45B1_METHOD_1_4A800470AF0169D6_OFFSET))(this, a1, a2);
	}
};
