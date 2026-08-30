#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class String; }

#define CLASS_2_0DCB099E64602254_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AA2320)
#define CLASS_2_0DCB099E64602254__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA2370)

inline static constexpr unsigned int Class_2_0DCB099E64602254_TypeDefinitionIndex = 60015;

class Class_2_0DCB099E64602254 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DCB099E64602254__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DCB099E64602254_TOSTRING_OFFSET))(this);
	}
};
