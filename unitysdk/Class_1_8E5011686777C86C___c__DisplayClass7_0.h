#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4172F4030D1E5435;
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }

#define CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A3C640)
#define CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x10A41ED0)

inline static constexpr unsigned int Class_1_8E5011686777C86C___c__DisplayClass7_0_TypeDefinitionIndex = 54185;

class Class_1_8E5011686777C86C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_4172F4030D1E5435* history; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Sync_b__0(::RPG::Client::PlanetFesTradingCardApplyItem* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET))(this, x);
	}
};
