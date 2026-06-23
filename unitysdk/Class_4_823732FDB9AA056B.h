#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_823732FDB9AA056B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11CFF900)
#define CLASS_4_823732FDB9AA056B_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11CFEA80)
#define CLASS_4_823732FDB9AA056B_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x11CFEDA0)
#define CLASS_4_823732FDB9AA056B__CTOR_OFFSET UNITYSDK_OFFSET(0x11CFF600)

inline static constexpr unsigned int Class_4_823732FDB9AA056B_TypeDefinitionIndex = 77484;

class Class_4_823732FDB9AA056B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_6; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_7; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_3; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_2; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x50
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_4; // 0x58
	::Class_3_B537A0AA78803363* Field_4_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_823732FDB9AA056B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_823732FDB9AA056B_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_823732FDB9AA056B_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_823732FDB9AA056B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
