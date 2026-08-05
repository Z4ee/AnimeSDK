#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_0C8FF60BACBA4097_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x102D1D70)
#define CLASS_4_0C8FF60BACBA4097_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x102D1B80)
#define CLASS_4_0C8FF60BACBA4097_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x102D1970)
#define CLASS_4_0C8FF60BACBA4097__CTOR_OFFSET UNITYSDK_OFFSET(0x102D1BD0)

inline static constexpr unsigned int Class_4_0C8FF60BACBA4097_TypeDefinitionIndex = 52752;

class Class_4_0C8FF60BACBA4097 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::Config::Spline_WayPoint>* Field_4_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_3; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C8FF60BACBA4097__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C8FF60BACBA4097_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0C8FF60BACBA4097_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C8FF60BACBA4097_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
