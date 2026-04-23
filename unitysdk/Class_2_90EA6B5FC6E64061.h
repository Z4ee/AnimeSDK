#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_10.h"

class Class_2_8C608625ABC8C4FA_1;
class Class_4_38B51614211CBC7D;

#define CLASS_2_90EA6B5FC6E64061_METHOD_2_15B15A0F6674C957_OFFSET UNITYSDK_OFFSET(0x17D0FB40)
#define CLASS_2_90EA6B5FC6E64061_METHOD_2_5AB20B48B8E64C8B_OFFSET UNITYSDK_OFFSET(0x17D0FDC0)
#define CLASS_2_90EA6B5FC6E64061__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0FB30)

inline static constexpr unsigned int Class_2_90EA6B5FC6E64061_TypeDefinitionIndex = 34259;

class Class_2_90EA6B5FC6E64061 : public ::Class_1_43BD383C98B4C0C5_10
{
public:
	::Class_4_38B51614211CBC7D* Field_2_0; // 0x10
	::Class_2_8C608625ABC8C4FA_1* Field_2_1; // 0x18

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_2_90EA6B5FC6E64061__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_15B15A0F6674C957(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_90EA6B5FC6E64061_METHOD_2_15B15A0F6674C957_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5AB20B48B8E64C8B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_90EA6B5FC6E64061_METHOD_2_5AB20B48B8E64C8B_OFFSET))(this, a1);
	}
};
