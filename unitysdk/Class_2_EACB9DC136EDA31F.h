#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/RPG/Client/LuaEvent_1.h"

#define CLASS_2_EACB9DC136EDA31F__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1C550)

inline static constexpr unsigned int Class_2_EACB9DC136EDA31F_TypeDefinitionIndex = 50678;

class Class_2_EACB9DC136EDA31F : public ::RPG::Client::LuaEvent_1<::RPG::Client::AlleyTransportRouteState>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACB9DC136EDA31F__CTOR_OFFSET))(this);
	}
};
