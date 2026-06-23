#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C7C8DAC9B7F55F6A;
class Class_1_F8D7C3AB2C204160;
class Class_2_C3C162BA7C6E9D7E;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define CLASS_1_7D004EF68E427E0B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14DE0840)
#define CLASS_1_7D004EF68E427E0B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14DDF6C0)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x14DDF740)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x14DDF640)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_2D730252EA599DD2_OFFSET UNITYSDK_OFFSET(0x14DE1090)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_3338E25D676DBB67_OFFSET UNITYSDK_OFFSET(0x14DE08A0)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_5D582D26566137B5_OFFSET UNITYSDK_OFFSET(0x14DE1270)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x14DE1140)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x14DE14A0)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_C76B65C3F8F54D3B_OFFSET UNITYSDK_OFFSET(0x14DE11F0)
#define CLASS_1_7D004EF68E427E0B_METHOD_1_CC0163455123FB24_OFFSET UNITYSDK_OFFSET(0x14DE18B0)
#define CLASS_1_7D004EF68E427E0B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14DDF5C0)
#define CLASS_1_7D004EF68E427E0B__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF5B0)

inline static constexpr unsigned int Class_1_7D004EF68E427E0B_TypeDefinitionIndex = 81561;

class Class_1_7D004EF68E427E0B : public ::System::Object
{
public:
	::Class_1_C7C8DAC9B7F55F6A* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x20
	::Class_1_F8D7C3AB2C204160* Field_1_3; // 0x28
	::System::Int32 Field_1_2; // 0x30
	::System::Boolean Field_1_8; // 0x34
	::System::Boolean Field_1_9; // 0x35
	::System::Boolean Field_1_4; // 0x36
	::System::Boolean Field_1_5; // 0x37
	::System::Boolean Field_1_11; // 0x38
	::System::Boolean Field_1_10; // 0x39
	::System::Boolean Field_1_12; // 0x3A
	::MoleMole::Config::HitForwardType Field_1_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_2D730252EA599DD2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_2D730252EA599DD2_OFFSET))(this);
	}

	::Class_2_C3C162BA7C6E9D7E* Method_1_C76B65C3F8F54D3B()
	{
		return ((::Class_2_C3C162BA7C6E9D7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_C76B65C3F8F54D3B_OFFSET))(this);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean Method_1_3338E25D676DBB67(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_3338E25D676DBB67_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5D582D26566137B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_5D582D26566137B5_OFFSET))(this);
	}

	::Class_1_F8D7C3AB2C204160* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_F8D7C3AB2C204160*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_1_CC0163455123FB24()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D004EF68E427E0B_METHOD_1_CC0163455123FB24_OFFSET))(this);
	}
};
