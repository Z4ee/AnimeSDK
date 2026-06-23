#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CLASS_2_186B4E1BC116EFF3_METHOD_2_122857B23140B7E4_OFFSET UNITYSDK_OFFSET(0x1318AAF0)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1318AA50)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_9340052D4180D214_OFFSET UNITYSDK_OFFSET(0x1318AAE0)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_B80FC59DE8797E13_OFFSET UNITYSDK_OFFSET(0x1318AC10)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1318AB80)
#define CLASS_2_186B4E1BC116EFF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1318A9D0)
#define CLASS_2_186B4E1BC116EFF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1318AA40)

inline static constexpr unsigned int Class_2_186B4E1BC116EFF3_TypeDefinitionIndex = 79373;

class Class_2_186B4E1BC116EFF3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x58; // 0x0
	::MoleMole::Config::EntityType Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::MoleMole::Config::EntityType Method_2_9340052D4180D214()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_9340052D4180D214_OFFSET))(this);
	}

	::System::Void Method_2_122857B23140B7E4(::System::UInt32 a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_122857B23140B7E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B80FC59DE8797E13(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_B80FC59DE8797E13_OFFSET))(this, a1);
	}
};
