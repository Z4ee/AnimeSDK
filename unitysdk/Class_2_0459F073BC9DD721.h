#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"

#define CLASS_2_0459F073BC9DD721_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x10C7CBD0)
#define CLASS_2_0459F073BC9DD721_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x10C7CAC0)
#define CLASS_2_0459F073BC9DD721__CTOR_OFFSET UNITYSDK_OFFSET(0x10C7CB60)

inline static constexpr unsigned int Class_2_0459F073BC9DD721_TypeDefinitionIndex = 77206;

class Class_2_0459F073BC9DD721 : public ::Class_1_677CEA8C88AC78AB
{
public:
	::System::Int32 Field_2_3; // 0x80
	::MoleMole::Config::CameraDelayMoveMode Field_2_0; // 0x84
	::System::Boolean Field_2_2; // 0x88
	::System::Single Field_2_1; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0459F073BC9DD721__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0459F073BC9DD721_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0459F073BC9DD721_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
