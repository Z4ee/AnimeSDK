#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1996B0D0)
#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET UNITYSDK_OFFSET(0x1996B440)
#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_B__2_OFFSET UNITYSDK_OFFSET(0x1996B320)
#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_B__3_OFFSET UNITYSDK_OFFSET(0x1996B3E0)
#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_G___HASEQUIPPEDSAME_1_OFFSET UNITYSDK_OFFSET(0x1996B0E0)

inline static constexpr unsigned int Class_1_50936B9A1F88684A___c__DisplayClass0_0_TypeDefinitionIndex = 65044;

class Class_1_50936B9A1F88684A___c__DisplayClass0_0 : public ::System::Object
{
public:
	::RPG::Client::GridFightRole* role; // 0x10
	::RPG::Client::GridFightEquipItemData* equipItemData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__2(::RPG::Client::GridFightTraitConfigBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_B__2_OFFSET))(this, a1);
	}

	::System::Boolean _Satisfy_b__3(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_B__3_OFFSET))(this, a1);
	}

	::System::Boolean _Satisfy_b__0(::RPG::Client::GridFightTraitConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _Satisfy_g___HasEquippedSame_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_0__SATISFY_G___HASEQUIPPEDSAME_1_OFFSET))(this);
	}
};
