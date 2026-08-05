#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_A25A0C2001E5EE26.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define CLASS_2_259EADE23E2F7EDD_METHOD_2_10E9FBA36EB4DC54_OFFSET UNITYSDK_OFFSET(0xE98C770)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0xE98C650)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0xE98C600)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xE98C6E0)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE98C5C0)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xE98C640)
#define CLASS_2_259EADE23E2F7EDD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE98C830)
#define CLASS_2_259EADE23E2F7EDD__CCTOR_OFFSET UNITYSDK_OFFSET(0xE98C660)
#define CLASS_2_259EADE23E2F7EDD__CTOR_OFFSET UNITYSDK_OFFSET(0xE98C6D0)

inline static constexpr unsigned int Class_2_259EADE23E2F7EDD_TypeDefinitionIndex = 88420;

class Class_2_259EADE23E2F7EDD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_9 = 0x35; // 0x0
	::System::UInt32 Field_2_0; // 0x20
	::MoleMole::Config::BuffGroupName Field_2_6; // 0x24
	::Enum_3_A25A0C2001E5EE26 Field_2_10; // 0x28
	::System::Int32 Field_2_5; // 0x2C
	::System::Int32 Field_2_7; // 0x30
	::System::Boolean Field_2_1; // 0x34
	::System::Single Field_2_11; // 0x38
	::System::Int32 Field_2_4; // 0x3C

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
