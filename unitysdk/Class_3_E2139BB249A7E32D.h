#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_049053A9DCD26B56.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_E2139BB249A7E32D_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1A40C380)
#define CLASS_3_E2139BB249A7E32D_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1A40C3E0)
#define CLASS_3_E2139BB249A7E32D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40C3D0)

inline static constexpr unsigned int Class_3_E2139BB249A7E32D_TypeDefinitionIndex = 20823;

class Class_3_E2139BB249A7E32D : public ::Class_2_049053A9DCD26B56
{
public:
	::System::String* CDEEHGCEOKN; // 0x30
	::System::Single LHLIGPFJFGE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2139BB249A7E32D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E2139BB249A7E32D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E2139BB249A7E32D*&))((::PBYTE)hIl2Cpp + CLASS_3_E2139BB249A7E32D_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E2139BB249A7E32D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E2139BB249A7E32D*))((::PBYTE)hIl2Cpp + CLASS_3_E2139BB249A7E32D_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
