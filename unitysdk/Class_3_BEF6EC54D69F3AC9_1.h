#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1FEF34E5FE4407ED.h"
#include "unitysdk/Struct_2_B0EA746FCD339C19.h"

class Class_3_5F814DBCD2974AFB;

#define CLASS_3_BEF6EC54D69F3AC9_1_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1260CF60)
#define CLASS_3_BEF6EC54D69F3AC9_1_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x1260D050)
#define CLASS_3_BEF6EC54D69F3AC9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1260CEC0)

inline static constexpr unsigned int Class_3_BEF6EC54D69F3AC9_1_TypeDefinitionIndex = 57943;

class Class_3_BEF6EC54D69F3AC9_1 : public ::Class_2_1FEF34E5FE4407ED
{
public:
	::System::Single Field_3_7; // 0x40
	::System::Single Field_3_0; // 0x44

	::System::Void _ctor(::Struct_2_B0EA746FCD339C19 a1, ::Class_3_5F814DBCD2974AFB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B0EA746FCD339C19, ::Class_3_5F814DBCD2974AFB*))((::PBYTE)hIl2Cpp + CLASS_3_BEF6EC54D69F3AC9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEF6EC54D69F3AC9_1_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEF6EC54D69F3AC9_1_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}
};
