#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x114D0250)
#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__SATISFY_B__4_OFFSET UNITYSDK_OFFSET(0x114D0260)

inline static constexpr unsigned int Class_1_50936B9A1F88684A___c__DisplayClass0_1_TypeDefinitionIndex = 52770;

class Class_1_50936B9A1F88684A___c__DisplayClass0_1 : public ::System::Object
{
public:
	::System::UInt32 baseID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__4(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__SATISFY_B__4_OFFSET))(this, x);
	}
};
