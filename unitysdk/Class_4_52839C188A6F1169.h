#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_52839C188A6F1169_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xFF511D0)
#define CLASS_4_52839C188A6F1169_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFF50E20)
#define CLASS_4_52839C188A6F1169_METHOD_4_E51ED98EB6AD33F6_OFFSET UNITYSDK_OFFSET(0xFF50EB0)
#define CLASS_4_52839C188A6F1169__CTOR_OFFSET UNITYSDK_OFFSET(0xFF51130)

inline static constexpr unsigned int Class_4_52839C188A6F1169_TypeDefinitionIndex = 42224;

class Class_4_52839C188A6F1169 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_52839C188A6F1169__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_52839C188A6F1169_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_E51ED98EB6AD33F6(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_52839C188A6F1169_METHOD_4_E51ED98EB6AD33F6_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_52839C188A6F1169_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
