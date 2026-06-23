#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E2D404E37489DACE.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;

#define CLASS_1_852609683CFD82B9_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1515C890)
#define CLASS_1_852609683CFD82B9_1_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x1515C8D0)
#define CLASS_1_852609683CFD82B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1515C920)

inline static constexpr unsigned int Class_1_852609683CFD82B9_1_TypeDefinitionIndex = 45101;

class Class_1_852609683CFD82B9_1 : public ::System::Object
{
public:
	::Class_1_1EA8435E138F2E03* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852609683CFD82B9_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852609683CFD82B9_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_E2D404E37489DACE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E2D404E37489DACE))((::PBYTE)hIl2Cpp + CLASS_1_852609683CFD82B9_1_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}
};
