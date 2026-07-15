#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;
class Class_1_A9BB9C9E4D3134C4;
namespace RPG::GameCore { class CakeRaceEventHandler; }

#define CLASS_1_7686EC5B8E7BB729___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D49900)
#define CLASS_1_7686EC5B8E7BB729___C__DISPLAYCLASS20_0___REGISTEREVENTHANDLERS_G__HANDLER_0_OFFSET UNITYSDK_OFFSET(0x18D49910)

inline static constexpr unsigned int Class_1_7686EC5B8E7BB729___c__DisplayClass20_0_TypeDefinitionIndex = 35854;

class Class_1_7686EC5B8E7BB729___c__DisplayClass20_0 : public ::System::Object
{
public:
	::Class_1_7686EC5B8E7BB729* __4__this; // 0x10
	::RPG::GameCore::CakeRaceEventHandler* eventHandler; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterEventHandlers_g__handler_0(::Class_1_A9BB9C9E4D3134C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729___C__DISPLAYCLASS20_0___REGISTEREVENTHANDLERS_G__HANDLER_0_OFFSET))(this, a1);
	}
};
