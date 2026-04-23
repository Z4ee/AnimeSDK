#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_626F93E2306641CC;

#define CLASS_1_A4CE45650CD733B7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9BCB9B0)
#define CLASS_1_A4CE45650CD733B7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9BCB970)
#define CLASS_1_A4CE45650CD733B7_METHOD_1_28693131CDCECD7C_OFFSET UNITYSDK_OFFSET(0x9BCB8F0)
#define CLASS_1_A4CE45650CD733B7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9BCBA10)
#define CLASS_1_A4CE45650CD733B7__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB960)

inline static constexpr unsigned int Class_1_A4CE45650CD733B7_TypeDefinitionIndex = 71621;

class Class_1_A4CE45650CD733B7 : public ::System::Object
{
public:
	::Class_3_626F93E2306641CC* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4CE45650CD733B7* Method_1_28693131CDCECD7C(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_A4CE45650CD733B7*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_METHOD_1_28693131CDCECD7C_OFFSET))(a1);
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
