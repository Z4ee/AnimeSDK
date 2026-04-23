#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2967FAA88DD8F73;
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }

#define CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A52480)
#define CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x9A57D30)

inline static constexpr unsigned int Class_1_8E5011686777C86C___c__DisplayClass7_0_TypeDefinitionIndex = 61348;

class Class_1_8E5011686777C86C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_A2967FAA88DD8F73* history; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Sync_b__0(::RPG::Client::PlanetFesTradingCardApplyItem* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET))(this, x);
	}
};
