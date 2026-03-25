#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_046D7E7D73E44996_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8D50C50)
#define CLASS_1_046D7E7D73E44996_GET_ONLINEID_OFFSET UNITYSDK_OFFSET(0x8D50C70)
#define CLASS_1_046D7E7D73E44996_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8D50C60)
#define CLASS_1_046D7E7D73E44996_SET_ONLINEID_OFFSET UNITYSDK_OFFSET(0x8D50C80)
#define CLASS_1_046D7E7D73E44996__CTOR_OFFSET UNITYSDK_OFFSET(0x8D50C90)

inline static constexpr unsigned int Class_1_046D7E7D73E44996_TypeDefinitionIndex = 54291;

class Class_1_046D7E7D73E44996 : public ::System::Object
{
public:
	::System::String* _OnlineID_k__BackingField; // 0x10
	::System::String* _AccountID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996__CTOR_OFFSET))(this);
	}

	::System::String* get_AccountID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_GET_ACCOUNTID_OFFSET))(this);
	}

	::System::Void set_AccountID(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_SET_ACCOUNTID_OFFSET))(this, value);
	}

	::System::String* get_OnlineID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_GET_ONLINEID_OFFSET))(this);
	}

	::System::Void set_OnlineID(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_SET_ONLINEID_OFFSET))(this, value);
	}
};
