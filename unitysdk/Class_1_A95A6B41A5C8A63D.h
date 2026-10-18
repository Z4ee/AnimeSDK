#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_3C02425323B914AE;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace System { class String; }

#define CLASS_1_A95A6B41A5C8A63D__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2E790)

inline static constexpr unsigned int Class_1_A95A6B41A5C8A63D_TypeDefinitionIndex = 61205;

class Class_1_A95A6B41A5C8A63D : public ::System::Object
{
public:
	::RPG::GameCore::BattleAreaReferenceInfo* APNJHDKFEEG; // 0x10
	::RPG::Client::Map* AOKAGIJCFBO; // 0x18
	::System::String* ENIKCJNGIFO; // 0x20
	::Class_1_3C02425323B914AE* AOLFKIMFNPN; // 0x28
	::System::String* DDOCMAPPGKF; // 0x30
	::RPG::Client::GamePhaseType CCIDLCBEFLN; // 0x38
	::System::Boolean JKGKHODLKNA; // 0x3C
	::System::Boolean HCHOKIEPMEA; // 0x3D
	::System::Boolean BPHEALGCHOD; // 0x3E

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A95A6B41A5C8A63D__CTOR_OFFSET))(this, a1);
	}
};
