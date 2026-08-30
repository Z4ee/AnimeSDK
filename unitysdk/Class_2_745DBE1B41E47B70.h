#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

#define CLASS_2_745DBE1B41E47B70__CTOR_OFFSET UNITYSDK_OFFSET(0xB99B580)
#define CLASS_2_745DBE1B41E47B70__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB99B4A0)

inline static constexpr unsigned int Class_2_745DBE1B41E47B70_TypeDefinitionIndex = 60020;

class Class_2_745DBE1B41E47B70 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_745DBE1B41E47B70__CTOR_OFFSET))(this);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_745DBE1B41E47B70__DOCHECKIMPL_OFFSET))(this);
	}
};
