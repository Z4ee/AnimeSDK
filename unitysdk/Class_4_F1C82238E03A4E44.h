#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_F1C82238E03A4E44_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11A7D120)
#define CLASS_4_F1C82238E03A4E44_METHOD_4_2C511ACA26F77163_OFFSET UNITYSDK_OFFSET(0x11A7CF00)
#define CLASS_4_F1C82238E03A4E44_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11A7CE70)
#define CLASS_4_F1C82238E03A4E44__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7D080)

inline static constexpr unsigned int Class_4_F1C82238E03A4E44_TypeDefinitionIndex = 63101;

class Class_4_F1C82238E03A4E44 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F1C82238E03A4E44__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F1C82238E03A4E44_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_2C511ACA26F77163(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_F1C82238E03A4E44_METHOD_4_2C511ACA26F77163_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F1C82238E03A4E44_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
