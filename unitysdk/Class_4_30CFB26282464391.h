#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_30CFB26282464391_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x140BC6E0)
#define CLASS_4_30CFB26282464391_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x140BC300)
#define CLASS_4_30CFB26282464391_METHOD_4_AD35F4723EBA1A1A_OFFSET UNITYSDK_OFFSET(0x140BC390)
#define CLASS_4_30CFB26282464391__CTOR_OFFSET UNITYSDK_OFFSET(0x140BC640)

inline static constexpr unsigned int Class_4_30CFB26282464391_TypeDefinitionIndex = 58306;

class Class_4_30CFB26282464391 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_30CFB26282464391__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_30CFB26282464391_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_AD35F4723EBA1A1A(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_30CFB26282464391_METHOD_4_AD35F4723EBA1A1A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_30CFB26282464391_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
