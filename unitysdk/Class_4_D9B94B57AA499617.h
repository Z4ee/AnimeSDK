#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_D9B94B57AA499617_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1453C180)
#define CLASS_4_D9B94B57AA499617_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1453BD90)
#define CLASS_4_D9B94B57AA499617_METHOD_4_951F44A98FF73B0A_OFFSET UNITYSDK_OFFSET(0x1453BE70)
#define CLASS_4_D9B94B57AA499617__CTOR_OFFSET UNITYSDK_OFFSET(0x1453C090)

inline static constexpr unsigned int Class_4_D9B94B57AA499617_TypeDefinitionIndex = 47587;

class Class_4_D9B94B57AA499617 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D9B94B57AA499617__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D9B94B57AA499617_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_951F44A98FF73B0A(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_D9B94B57AA499617_METHOD_4_951F44A98FF73B0A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D9B94B57AA499617_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
