#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_2D327D36E559E7E6_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF7E0340)
#define CLASS_4_2D327D36E559E7E6_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xF7DFE30)
#define CLASS_4_2D327D36E559E7E6_METHOD_4_7D38146965857770_OFFSET UNITYSDK_OFFSET(0xF7DFF10)
#define CLASS_4_2D327D36E559E7E6__CTOR_OFFSET UNITYSDK_OFFSET(0xF7E0250)

inline static constexpr unsigned int Class_4_2D327D36E559E7E6_TypeDefinitionIndex = 68800;

class Class_4_2D327D36E559E7E6 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D327D36E559E7E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D327D36E559E7E6_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_7D38146965857770(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2D327D36E559E7E6_METHOD_4_7D38146965857770_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D327D36E559E7E6_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
