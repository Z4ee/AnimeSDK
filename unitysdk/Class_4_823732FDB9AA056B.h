#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_823732FDB9AA056B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17EA54B0)
#define CLASS_4_823732FDB9AA056B_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x17EA45A0)
#define CLASS_4_823732FDB9AA056B_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x17EA48C0)
#define CLASS_4_823732FDB9AA056B__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA51B0)

inline static constexpr unsigned int Class_4_823732FDB9AA056B_TypeDefinitionIndex = 54311;

class Class_4_823732FDB9AA056B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_10; // 0x28
	::Class_3_B537A0AA78803363* Field_4_11; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_6; // 0x38
	::Class_3_B537A0AA78803363* Field_4_4; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_7; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_5; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x60

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
