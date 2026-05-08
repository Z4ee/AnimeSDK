#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E2D404E37489DACE.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;

#define CLASS_1_852609683CFD82B9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE4D8210)
#define CLASS_1_852609683CFD82B9_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0xE4D8250)
#define CLASS_1_852609683CFD82B9__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D82A0)

inline static constexpr unsigned int Class_1_852609683CFD82B9_TypeDefinitionIndex = 66706;

class Class_1_852609683CFD82B9 : public ::System::Object
{
public:
	::Class_1_1EA8435E138F2E03* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852609683CFD82B9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852609683CFD82B9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_E2D404E37489DACE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E2D404E37489DACE))((::PBYTE)hIl2Cpp + CLASS_1_852609683CFD82B9_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
