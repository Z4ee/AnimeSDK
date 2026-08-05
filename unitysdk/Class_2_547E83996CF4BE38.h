#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_FBAA779B2229F6F3.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define CLASS_2_547E83996CF4BE38_METHOD_2_0D02AF7002A6B470_OFFSET UNITYSDK_OFFSET(0x1017FD20)
#define CLASS_2_547E83996CF4BE38_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1017FC90)
#define CLASS_2_547E83996CF4BE38_METHOD_2_A7E1420A21E0295B_OFFSET UNITYSDK_OFFSET(0x1017FE20)
#define CLASS_2_547E83996CF4BE38_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1017FEE0)
#define CLASS_2_547E83996CF4BE38__CCTOR_OFFSET UNITYSDK_OFFSET(0x1017FC10)
#define CLASS_2_547E83996CF4BE38__CTOR_OFFSET UNITYSDK_OFFSET(0x1017FC80)

inline static constexpr unsigned int Class_2_547E83996CF4BE38_TypeDefinitionIndex = 89385;

class Class_2_547E83996CF4BE38 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_9 = 0x9F; // 0x0
	::MoleMole::Config::PropertyModifyFunction Field_2_2; // 0x20
	::System::Boolean Field_2_4; // 0x24
	::System::Boolean Field_2_7; // 0x25
	::System::Boolean Field_2_5; // 0x26
	::System::Boolean Field_2_6; // 0x27
	::System::UInt32 Field_2_10; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Double Field_2_0; // 0x30
	::Enum_3_FBAA779B2229F6F3 Field_2_11; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_0D02AF7002A6B470(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::Enum_3_FBAA779B2229F6F3 a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Enum_3_FBAA779B2229F6F3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_0D02AF7002A6B470_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_A7E1420A21E0295B(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Double a3, ::Enum_3_FBAA779B2229F6F3 a4, ::System::Boolean a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double, ::Enum_3_FBAA779B2229F6F3, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_A7E1420A21E0295B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_547E83996CF4BE38_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
