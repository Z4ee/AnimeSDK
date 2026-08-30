#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingMatchUIShowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1428;

#define CLASS_1_70577C20FA4364DC_METHOD_1_EA818E66B0408165_OFFSET UNITYSDK_OFFSET(0x18D25300)
#define CLASS_1_70577C20FA4364DC__CTOR_OFFSET UNITYSDK_OFFSET(0x18D25390)

inline static constexpr unsigned int Class_1_70577C20FA4364DC_TypeDefinitionIndex = 80584;

class Class_1_70577C20FA4364DC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70577C20FA4364DC__CTOR_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingMatchUIShowType Method_1_EA818E66B0408165(::Class_0_16E4307DCC419505_1428* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingMatchUIShowType(*)(::PVOID, ::Class_0_16E4307DCC419505_1428*))((::PBYTE)hIl2Cpp + CLASS_1_70577C20FA4364DC_METHOD_1_EA818E66B0408165_OFFSET))(this, a1);
	}
};
