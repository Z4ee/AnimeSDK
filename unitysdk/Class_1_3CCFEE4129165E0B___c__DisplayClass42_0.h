#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ABDF1855FCDB08F;
class Class_1_3CCFEE4129165E0B;

#define CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C548F50)
#define CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS42_0__SIMULATELIFT_G__APPLY_0_OFFSET UNITYSDK_OFFSET(0x1C548F60)
#define CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS42_0__SIMULATELIFT_G__REVERT_1_OFFSET UNITYSDK_OFFSET(0x1C549E00)

inline static constexpr unsigned int Class_1_3CCFEE4129165E0B___c__DisplayClass42_0_TypeDefinitionIndex = 41801;

class Class_1_3CCFEE4129165E0B___c__DisplayClass42_0 : public ::System::Object
{
public:
	::Class_1_1ABDF1855FCDB08F* piece; // 0x10
	::Class_1_3CCFEE4129165E0B* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Void _SimulateLift_g__Apply_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS42_0__SIMULATELIFT_G__APPLY_0_OFFSET))(this);
	}

	::System::Void _SimulateLift_g__Revert_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS42_0__SIMULATELIFT_G__REVERT_1_OFFSET))(this);
	}
};
