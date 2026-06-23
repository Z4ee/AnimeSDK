#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_13CEEB677B88846A_METHOD_4_1B5CCAA3C91F67F2_OFFSET UNITYSDK_OFFSET(0x1920FD50)
#define CLASS_4_13CEEB677B88846A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x19210250)
#define CLASS_4_13CEEB677B88846A_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1920FC70)
#define CLASS_4_13CEEB677B88846A__CTOR_OFFSET UNITYSDK_OFFSET(0x19210160)

inline static constexpr unsigned int Class_4_13CEEB677B88846A_TypeDefinitionIndex = 57990;

class Class_4_13CEEB677B88846A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_13CEEB677B88846A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_13CEEB677B88846A_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_1B5CCAA3C91F67F2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_13CEEB677B88846A_METHOD_4_1B5CCAA3C91F67F2_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_13CEEB677B88846A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
