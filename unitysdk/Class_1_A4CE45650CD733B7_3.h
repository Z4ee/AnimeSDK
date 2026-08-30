#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_FA020C2C23A72B3F;

#define CLASS_1_A4CE45650CD733B7_3_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD296070)
#define CLASS_1_A4CE45650CD733B7_3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD296030)
#define CLASS_1_A4CE45650CD733B7_3_METHOD_1_28693131CDCECD7C_OFFSET UNITYSDK_OFFSET(0xD295FB0)
#define CLASS_1_A4CE45650CD733B7_3_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD2960B0)
#define CLASS_1_A4CE45650CD733B7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD296020)

inline static constexpr unsigned int Class_1_A4CE45650CD733B7_3_TypeDefinitionIndex = 77659;

class Class_1_A4CE45650CD733B7_3 : public ::System::Object
{
public:
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_3__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4CE45650CD733B7_3* Method_1_28693131CDCECD7C(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_A4CE45650CD733B7_3*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_3_METHOD_1_28693131CDCECD7C_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_3_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_3_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_3_TEARDOWN_OFFSET))(this);
	}
};
