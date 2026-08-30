#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_3_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x17F562E0)
#define CLASS_1_7291C38274750BA2_3_GET_ONLINEID_OFFSET UNITYSDK_OFFSET(0x17F56300)
#define CLASS_1_7291C38274750BA2_3_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x17F562F0)
#define CLASS_1_7291C38274750BA2_3_SET_ONLINEID_OFFSET UNITYSDK_OFFSET(0x17F56310)
#define CLASS_1_7291C38274750BA2_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F56320)

inline static constexpr unsigned int Class_1_7291C38274750BA2_3_TypeDefinitionIndex = 66738;

class Class_1_7291C38274750BA2_3 : public ::System::Object
{
public:
	::System::String* _AccountID_k__BackingField; // 0x10
	::System::String* _OnlineID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_3__CTOR_OFFSET))(this);
	}

	::System::String* get_AccountID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_3_GET_ACCOUNTID_OFFSET))(this);
	}

	::System::Void set_AccountID(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_3_SET_ACCOUNTID_OFFSET))(this, a1);
	}

	::System::String* get_OnlineID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_3_GET_ONLINEID_OFFSET))(this);
	}

	::System::Void set_OnlineID(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_3_SET_ONLINEID_OFFSET))(this, a1);
	}
};
