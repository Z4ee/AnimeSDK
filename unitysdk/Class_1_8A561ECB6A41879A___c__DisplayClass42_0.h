#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A561ECB6A41879A;
class Class_1_EB4EA813E55E9D5A;

#define CLASS_1_8A561ECB6A41879A___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB957130)
#define CLASS_1_8A561ECB6A41879A___C__DISPLAYCLASS42_0__SYNCSNAPSHOT_B__0_OFFSET UNITYSDK_OFFSET(0xB9584B0)

inline static constexpr unsigned int Class_1_8A561ECB6A41879A___c__DisplayClass42_0_TypeDefinitionIndex = 78112;

class Class_1_8A561ECB6A41879A___c__DisplayClass42_0 : public ::System::Object
{
public:
	::Class_1_EB4EA813E55E9D5A* snapShot; // 0x10
	::Class_1_8A561ECB6A41879A* __4__this; // 0x18
	::System::UInt64 timeStamp; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Void _SyncSnapShot_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A561ECB6A41879A___C__DISPLAYCLASS42_0__SYNCSNAPSHOT_B__0_OFFSET))(this);
	}
};
