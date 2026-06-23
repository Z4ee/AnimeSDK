#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/EvtDestructionSwitchType.h"

#define CLASS_2_78155712A2147EF9_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x113BF6C0)
#define CLASS_2_78155712A2147EF9_METHOD_2_AE94FCEDD595747C_OFFSET UNITYSDK_OFFSET(0x113BF7E0)
#define CLASS_2_78155712A2147EF9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113BF750)
#define CLASS_2_78155712A2147EF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x113BF640)
#define CLASS_2_78155712A2147EF9__CTOR_OFFSET UNITYSDK_OFFSET(0x113BF6B0)

inline static constexpr unsigned int Class_2_78155712A2147EF9_TypeDefinitionIndex = 46339;

class Class_2_78155712A2147EF9 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x46; // 0x0
	::System::UInt32 Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::MoleMole::EvtDestructionSwitchType Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_78155712A2147EF9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78155712A2147EF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78155712A2147EF9_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78155712A2147EF9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AE94FCEDD595747C(::System::UInt32 a1, ::MoleMole::EvtDestructionSwitchType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::EvtDestructionSwitchType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_78155712A2147EF9_METHOD_2_AE94FCEDD595747C_OFFSET))(this, a1, a2, a3);
	}
};
