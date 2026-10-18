#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_FA020C2C23A72B3F;

#define CLASS_1_A4CE45650CD733B7_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB161570)
#define CLASS_1_A4CE45650CD733B7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB161530)
#define CLASS_1_A4CE45650CD733B7_METHOD_1_28693131CDCECD7C_OFFSET UNITYSDK_OFFSET(0xB1614B0)
#define CLASS_1_A4CE45650CD733B7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB1615D0)
#define CLASS_1_A4CE45650CD733B7__CTOR_OFFSET UNITYSDK_OFFSET(0xB161520)

inline static constexpr unsigned int Class_1_A4CE45650CD733B7_TypeDefinitionIndex = 78124;

class Class_1_A4CE45650CD733B7 : public ::System::Object
{
public:
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4CE45650CD733B7* Method_1_28693131CDCECD7C(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_A4CE45650CD733B7*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_METHOD_1_28693131CDCECD7C_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_TEARDOWN_OFFSET))(this);
	}
};
