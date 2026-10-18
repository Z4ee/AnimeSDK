#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5E8372927A4159F;
namespace RPG::Client { class UIController; }

#define CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB78F8C0)
#define CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS1_0__TRYAUTOSHOW_B__0_OFFSET UNITYSDK_OFFSET(0xB790700)

inline static constexpr unsigned int Class_1_C5E8372927A4159F___c__DisplayClass1_0_TypeDefinitionIndex = 82073;

class Class_1_C5E8372927A4159F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_C5E8372927A4159F* __4__this; // 0x10
	::System::UInt32 autoShowEntranceInitLevelGroupID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::UIController* _TryAutoShow_b__0(::RPG::Client::UIController* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS1_0__TRYAUTOSHOW_B__0_OFFSET))(this, a1);
	}
};
