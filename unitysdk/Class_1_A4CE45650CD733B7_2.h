#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_626F93E2306641CC;

#define CLASS_1_A4CE45650CD733B7_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF3696A0)
#define CLASS_1_A4CE45650CD733B7_2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF369660)
#define CLASS_1_A4CE45650CD733B7_2_METHOD_1_28693131CDCECD7C_OFFSET UNITYSDK_OFFSET(0xF3695E0)
#define CLASS_1_A4CE45650CD733B7_2_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF3699D0)
#define CLASS_1_A4CE45650CD733B7_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF369650)

inline static constexpr unsigned int Class_1_A4CE45650CD733B7_2_TypeDefinitionIndex = 63586;

class Class_1_A4CE45650CD733B7_2 : public ::System::Object
{
public:
	::Class_3_626F93E2306641CC* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4CE45650CD733B7_2* Method_1_28693131CDCECD7C(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_A4CE45650CD733B7_2*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_A4CE45650CD733B7_2_METHOD_1_28693131CDCECD7C_OFFSET))(a1);
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
