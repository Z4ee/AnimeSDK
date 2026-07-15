#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_FA020C2C23A72B3F;

#define CLASS_1_A4CE45650CD733B7_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1455C220)
#define CLASS_1_A4CE45650CD733B7_2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1455C1E0)
#define CLASS_1_A4CE45650CD733B7_2_METHOD_1_28693131CDCECD7C_OFFSET UNITYSDK_OFFSET(0x1455C160)
#define CLASS_1_A4CE45650CD733B7_2_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1455C4D0)
#define CLASS_1_A4CE45650CD733B7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1455C1D0)

inline static constexpr unsigned int Class_1_A4CE45650CD733B7_2_TypeDefinitionIndex = 74173;

class Class_1_A4CE45650CD733B7_2 : public ::System::Object
{
public:
	::Class_3_FA020C2C23A72B3F* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4CE45650CD733B7_2* Method_1_28693131CDCECD7C(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_A4CE45650CD733B7_2*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2_METHOD_1_28693131CDCECD7C_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2_TEARDOWN_OFFSET))(this);
	}
};
