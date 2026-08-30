#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A561ECB6A41879A;
class Class_1_BB4B99DE4C2501EC_8;

#define CLASS_1_8A561ECB6A41879A___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA69B0)
#define CLASS_1_8A561ECB6A41879A___C__DISPLAYCLASS42_0__SYNCSNAPSHOT_B__0_OFFSET UNITYSDK_OFFSET(0x19AA7D30)

inline static constexpr unsigned int Class_1_8A561ECB6A41879A___c__DisplayClass42_0_TypeDefinitionIndex = 77641;

class Class_1_8A561ECB6A41879A___c__DisplayClass42_0 : public ::System::Object
{
public:
	::Class_1_8A561ECB6A41879A* __4__this; // 0x10
	::Class_1_BB4B99DE4C2501EC_8* snapShot; // 0x18
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
