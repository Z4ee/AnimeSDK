#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2967FAA88DD8F73_1;
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }

#define CLASS_1_F8232DFF934E6733___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1630DCC0)
#define CLASS_1_F8232DFF934E6733___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0x163147E0)

inline static constexpr unsigned int Class_1_F8232DFF934E6733___c__DisplayClass7_0_TypeDefinitionIndex = 66623;

class Class_1_F8232DFF934E6733___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_A2967FAA88DD8F73_1* history; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Sync_b__0(::RPG::Client::PlanetFesTradingCardApplyItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET))(this, a1);
	}
};
