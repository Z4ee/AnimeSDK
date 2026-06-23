#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_EB972DACB2498A5F_METHOD_4_1D8FB28D47813A77_OFFSET UNITYSDK_OFFSET(0x179E4240)
#define CLASS_4_EB972DACB2498A5F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x179E44E0)
#define CLASS_4_EB972DACB2498A5F_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x179E4160)
#define CLASS_4_EB972DACB2498A5F__CTOR_OFFSET UNITYSDK_OFFSET(0x179E43D0)

inline static constexpr unsigned int Class_4_EB972DACB2498A5F_TypeDefinitionIndex = 47947;

class Class_4_EB972DACB2498A5F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB972DACB2498A5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB972DACB2498A5F_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_1D8FB28D47813A77(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_EB972DACB2498A5F_METHOD_4_1D8FB28D47813A77_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EB972DACB2498A5F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
