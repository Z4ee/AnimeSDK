#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_A25A0C2001E5EE26.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define CLASS_2_259EADE23E2F7EDD_METHOD_2_10E9FBA36EB4DC54_OFFSET UNITYSDK_OFFSET(0x104F03A0)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x104F0280)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0x104F0230)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x104F0310)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x104F01F0)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x104F0270)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x104F0460)
#define CLASS_2_259EADE23E2F7EDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x104F0290)
#define CLASS_2_259EADE23E2F7EDD__CTOR_OFFSET UNITYSDK_OFFSET(0x104F0300)

inline static constexpr unsigned int Class_2_259EADE23E2F7EDD_TypeDefinitionIndex = 69538;

class Class_2_259EADE23E2F7EDD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_8 = 0x32; // 0x0
	::System::Boolean Field_2_0; // 0x20
	::Enum_3_A25A0C2001E5EE26 Field_2_7; // 0x24
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_4; // 0x2C
	::System::UInt32 Field_2_1; // 0x30
	::MoleMole::Config::BuffGroupName Field_2_3; // 0x34
	::System::Single Field_2_6; // 0x38
	::System::Int32 Field_2_5; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_2_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::Enum_3_A25A0C2001E5EE26 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_A25A0C2001E5EE26(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_A25A0C2001E5EE26 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A25A0C2001E5EE26))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_10E9FBA36EB4DC54(::System::Boolean a1, ::System::UInt32 a2, ::System::Int32 a3, ::MoleMole::Config::BuffGroupName a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Int32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_10E9FBA36EB4DC54_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_259EADE23E2F7EDD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
