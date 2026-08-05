#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_24D40D17B65ADFF7.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_2_23D4664E72852A15_METHOD_2_1D1F3B17E909A12D_OFFSET UNITYSDK_OFFSET(0x15FE0760)
#define CLASS_2_23D4664E72852A15_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x15FE0640)
#define CLASS_2_23D4664E72852A15_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15FE0450)
#define CLASS_2_23D4664E72852A15_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15FE0810)
#define CLASS_2_23D4664E72852A15_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FE06D0)
#define CLASS_2_23D4664E72852A15__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE0550)
#define CLASS_2_23D4664E72852A15__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE05C0)

inline static constexpr unsigned int Class_2_23D4664E72852A15_TypeDefinitionIndex = 68211;

class Class_2_23D4664E72852A15 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xAF; // 0x0
	::MoleMole::EntityHandle Field_2_7; // 0x20
	::MoleMole::EntityHandle Field_2_0; // 0x30
	::Enum_3_24D40D17B65ADFF7 Field_2_1; // 0x40
	::System::Boolean Field_2_6; // 0x44
	::System::Boolean Field_2_5; // 0x45

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1D1F3B17E909A12D(::Enum_3_24D40D17B65ADFF7 a1, ::MoleMole::EntityHandle a2, ::MoleMole::EntityHandle a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_24D40D17B65ADFF7, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15_METHOD_2_1D1F3B17E909A12D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D4664E72852A15_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
