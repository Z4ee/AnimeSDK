#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { class String; }

#define CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5E3D0)
#define CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS15_0__ISTIMELINEPLAYING_B__0_OFFSET UNITYSDK_OFFSET(0x13C603E0)

inline static constexpr unsigned int Class_1_70A640AF11C645FB___c__DisplayClass15_0_TypeDefinitionIndex = 45752;

class Class_1_70A640AF11C645FB___c__DisplayClass15_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsTimelinePlaying_b__0(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_70A640AF11C645FB___C__DISPLAYCLASS15_0__ISTIMELINEPLAYING_B__0_OFFSET))(this, a1);
	}
};
