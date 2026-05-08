#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CLASS_2_186B4E1BC116EFF3_METHOD_2_122857B23140B7E4_OFFSET UNITYSDK_OFFSET(0x16628D80)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16628C50)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_9340052D4180D214_OFFSET UNITYSDK_OFFSET(0x16628E10)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_B80FC59DE8797E13_OFFSET UNITYSDK_OFFSET(0x16628CE0)
#define CLASS_2_186B4E1BC116EFF3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16628CF0)
#define CLASS_2_186B4E1BC116EFF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x16628BD0)
#define CLASS_2_186B4E1BC116EFF3__CTOR_OFFSET UNITYSDK_OFFSET(0x16628C40)

inline static constexpr unsigned int Class_2_186B4E1BC116EFF3_TypeDefinitionIndex = 49273;

class Class_2_186B4E1BC116EFF3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x57; // 0x0
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

	::System::Void Method_2_B80FC59DE8797E13(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_B80FC59DE8797E13_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_122857B23140B7E4(::System::UInt32 a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_122857B23140B7E4_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::EntityType Method_2_9340052D4180D214()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186B4E1BC116EFF3_METHOD_2_9340052D4180D214_OFFSET))(this);
	}
};
