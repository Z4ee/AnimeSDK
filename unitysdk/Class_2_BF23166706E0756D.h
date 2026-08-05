#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_FBAA779B2229F6F3.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_E555EF9B1EABB0B4.h"

#define CLASS_2_BF23166706E0756D_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xE539D00)
#define CLASS_2_BF23166706E0756D_METHOD_2_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0xE539E20)
#define CLASS_2_BF23166706E0756D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE539D90)
#define CLASS_2_BF23166706E0756D__CCTOR_OFFSET UNITYSDK_OFFSET(0xE539C80)
#define CLASS_2_BF23166706E0756D__CTOR_OFFSET UNITYSDK_OFFSET(0xE539CF0)

inline static constexpr unsigned int Class_2_BF23166706E0756D_TypeDefinitionIndex = 77675;

class Class_2_BF23166706E0756D : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_10 = 0xA5; // 0x0
	::Enum_3_FBAA779B2229F6F3 Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x24
	::System::Single Field_2_6; // 0x28
	::Struct_2_E555EF9B1EABB0B4 Field_2_11; // 0x2C
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x44
	::System::Single Field_2_7; // 0x48

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

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AA94FB72678389C0(::Struct_2_E555EF9B1EABB0B4 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E555EF9B1EABB0B4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_AA94FB72678389C0_OFFSET))(this, a1, a2);
	}
};
