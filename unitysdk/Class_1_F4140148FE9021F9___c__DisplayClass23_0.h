#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B71FC14BA77C9F77;

#define CLASS_1_F4140148FE9021F9___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157FC9F0)
#define CLASS_1_F4140148FE9021F9___C__DISPLAYCLASS23_0__FINDCARDBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x157FD5F0)

inline static constexpr unsigned int Class_1_F4140148FE9021F9___c__DisplayClass23_0_TypeDefinitionIndex = 76145;

class Class_1_F4140148FE9021F9___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::UInt32 uid; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FindCardByUID_b__0(::Class_1_B71FC14BA77C9F77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71FC14BA77C9F77*))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9___C__DISPLAYCLASS23_0__FINDCARDBYUID_B__0_OFFSET))(this, a1);
	}
};
