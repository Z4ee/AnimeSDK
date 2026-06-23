#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/CampType.h"

#define CLASS_2_E51F61BB7DD18C33_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1A823380)
#define CLASS_2_E51F61BB7DD18C33_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8234A0)
#define CLASS_2_E51F61BB7DD18C33_METHOD_2_F3501F4AA9BFBDE2_OFFSET UNITYSDK_OFFSET(0x1A823410)
#define CLASS_2_E51F61BB7DD18C33__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A823300)
#define CLASS_2_E51F61BB7DD18C33__CTOR_OFFSET UNITYSDK_OFFSET(0x1A823370)

inline static constexpr unsigned int Class_2_E51F61BB7DD18C33_TypeDefinitionIndex = 75475;

class Class_2_E51F61BB7DD18C33 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x38; // 0x0
	::MoleMole::Config::CampType Field_2_1; // 0x20
	::MoleMole::Config::CampType Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E51F61BB7DD18C33__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E51F61BB7DD18C33__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E51F61BB7DD18C33_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_F3501F4AA9BFBDE2(::System::UInt32 a1, ::MoleMole::Config::CampType a2, ::MoleMole::Config::CampType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_2_E51F61BB7DD18C33_METHOD_2_F3501F4AA9BFBDE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E51F61BB7DD18C33_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
