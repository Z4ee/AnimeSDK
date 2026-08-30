#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Map; }
namespace RPG::Client { class MapDef; }

#define CLASS_1_180D5F47839854B4_METHOD_1_153CBF405B19D373_OFFSET UNITYSDK_OFFSET(0x15220720)
#define CLASS_1_180D5F47839854B4__CTOR_OFFSET UNITYSDK_OFFSET(0x15220790)

inline static constexpr unsigned int Class_1_180D5F47839854B4_TypeDefinitionIndex = 60975;

class Class_1_180D5F47839854B4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_180D5F47839854B4__CTOR_OFFSET))(this);
	}

	::RPG::Client::Map* Method_1_153CBF405B19D373(::RPG::Client::MapDef* a1)
	{
		return ((::RPG::Client::Map*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_180D5F47839854B4_METHOD_1_153CBF405B19D373_OFFSET))(this, a1);
	}
};
