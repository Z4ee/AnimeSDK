#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS24_0__CONTAINSROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xA7CAF30)
#define CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C9E10)

inline static constexpr unsigned int Class_1_3CCCD675D7774146___c__DisplayClass24_0_TypeDefinitionIndex = 59537;

class Class_1_3CCCD675D7774146___c__DisplayClass24_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ContainsRoleID_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_181F61C600ECA68B*> x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_181F61C600ECA68B*>))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS24_0__CONTAINSROLEID_B__0_OFFSET))(this, x);
	}
};
