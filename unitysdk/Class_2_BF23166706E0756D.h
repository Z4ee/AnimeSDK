#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_D7A4383942F4C6E7.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_E555EF9B1EABB0B4.h"

#define CLASS_2_BF23166706E0756D_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x147A46A0)
#define CLASS_2_BF23166706E0756D_METHOD_2_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0x147A4730)
#define CLASS_2_BF23166706E0756D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x147A47A0)
#define CLASS_2_BF23166706E0756D__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A4620)
#define CLASS_2_BF23166706E0756D__CTOR_OFFSET UNITYSDK_OFFSET(0x147A4690)

inline static constexpr unsigned int Class_2_BF23166706E0756D_TypeDefinitionIndex = 38978;

class Class_2_BF23166706E0756D : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x9B; // 0x0
	::System::Boolean Field_2_3; // 0x20
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x24
	::Enum_3_D7A4383942F4C6E7 Field_2_4; // 0x28
	::System::Single Field_2_2; // 0x2C
	::Struct_2_E555EF9B1EABB0B4 Field_2_5; // 0x30
	::System::Single Field_2_1; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_AA94FB72678389C0(::Struct_2_E555EF9B1EABB0B4 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E555EF9B1EABB0B4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_AA94FB72678389C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
