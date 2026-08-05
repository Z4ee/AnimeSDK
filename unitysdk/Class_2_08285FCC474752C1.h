#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

class Class_1_8289F2785D9AA990;
class Class_3_BC378AF92CB85E1D;
namespace MoleMole::Config { class ConfigLockTarget; }
namespace System { class String; }

#define CLASS_2_08285FCC474752C1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x18703FF0)
#define CLASS_2_08285FCC474752C1_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x18704170)
#define CLASS_2_08285FCC474752C1_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x18703CD0)
#define CLASS_2_08285FCC474752C1_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x18704180)
#define CLASS_2_08285FCC474752C1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x187040B0)
#define CLASS_2_08285FCC474752C1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18703DD0)
#define CLASS_2_08285FCC474752C1__CTOR_OFFSET UNITYSDK_OFFSET(0x18703F80)

inline static constexpr unsigned int Class_2_08285FCC474752C1_TypeDefinitionIndex = 76331;

class Class_2_08285FCC474752C1 : public ::Class_1_8377BAB19A574A40
{
public:
	::MoleMole::Config::ConfigLockTarget* Field_2_0; // 0x80
	::MoleMole::Config::ConfigLockTarget* Field_2_7; // 0x88
	::Class_1_8289F2785D9AA990* Field_2_5; // 0x90
	::Class_3_BC378AF92CB85E1D* Field_2_6; // 0x98
	::System::Int32 Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08285FCC474752C1_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}
};
