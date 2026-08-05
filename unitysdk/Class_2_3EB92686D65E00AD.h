#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

#define CLASS_2_3EB92686D65E00AD_METHOD_2_32F9D88C5CADC697_OFFSET UNITYSDK_OFFSET(0x158E10C0)
#define CLASS_2_3EB92686D65E00AD_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x158E0FA0)
#define CLASS_2_3EB92686D65E00AD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158E1030)
#define CLASS_2_3EB92686D65E00AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x158E0F20)
#define CLASS_2_3EB92686D65E00AD__CTOR_OFFSET UNITYSDK_OFFSET(0x158E0F90)

inline static constexpr unsigned int Class_2_3EB92686D65E00AD_TypeDefinitionIndex = 67612;

class Class_2_3EB92686D65E00AD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x97; // 0x0
	::System::UInt32 Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x24
	::MoleMole::Config::AidAttackType Field_2_0; // 0x28
	::Enum_3_1003E4A6E5149B9E Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3EB92686D65E00AD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB92686D65E00AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB92686D65E00AD_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB92686D65E00AD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_32F9D88C5CADC697(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Enum_3_1003E4A6E5149B9E a4, ::MoleMole::Config::AidAttackType a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Enum_3_1003E4A6E5149B9E, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + CLASS_2_3EB92686D65E00AD_METHOD_2_32F9D88C5CADC697_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
