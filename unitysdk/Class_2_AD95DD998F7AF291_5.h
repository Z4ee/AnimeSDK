#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_2_BE316F2570FA4FE3;

#define CLASS_2_AD95DD998F7AF291_5_METHOD_2_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0x160AF580)
#define CLASS_2_AD95DD998F7AF291_5__CTOR_OFFSET UNITYSDK_OFFSET(0x160AF570)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_5_TypeDefinitionIndex = 74304;

class Class_2_AD95DD998F7AF291_5 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_BE316F2570FA4FE3* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_BE316F2570FA4FE3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BE316F2570FA4FE3*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_5_METHOD_2_745F93A8744358B2_OFFSET))(this);
	}
};
