#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EC46AA8769DF299;
namespace System { class String; }

#define CLASS_1_0D2F9EE261815B73___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CB6B0)
#define CLASS_1_0D2F9EE261815B73___C__DISPLAYCLASS5_0__ISFILEEXIST_B__0_OFFSET UNITYSDK_OFFSET(0x1A4CBD20)

inline static constexpr unsigned int Class_1_0D2F9EE261815B73___c__DisplayClass5_0_TypeDefinitionIndex = 40206;

class Class_1_0D2F9EE261815B73___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::String* file; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D2F9EE261815B73___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsFileExist_b__0(::Class_1_1EC46AA8769DF299* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1EC46AA8769DF299*))((::PBYTE)hIl2Cpp + CLASS_1_0D2F9EE261815B73___C__DISPLAYCLASS5_0__ISFILEEXIST_B__0_OFFSET))(this, a1);
	}
};
