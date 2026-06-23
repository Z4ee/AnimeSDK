#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_0C8FF60BACBA4097_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13D8E4B0)
#define CLASS_4_0C8FF60BACBA4097_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x13D8E2C0)
#define CLASS_4_0C8FF60BACBA4097_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13D8E0B0)
#define CLASS_4_0C8FF60BACBA4097__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8E310)

inline static constexpr unsigned int Class_4_0C8FF60BACBA4097_TypeDefinitionIndex = 61627;

class Class_4_0C8FF60BACBA4097 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_3; // 0x40
	::Class_4_F91115D9A1F02F5F<::MoleMole::Config::Spline_WayPoint>* Field_4_4; // 0x48

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
