#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4C8B0)
#define CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__SATISFY_B__4_OFFSET UNITYSDK_OFFSET(0x16F4C8C0)

inline static constexpr unsigned int Class_1_50936B9A1F88684A___c__DisplayClass0_1_TypeDefinitionIndex = 62061;

class Class_1_50936B9A1F88684A___c__DisplayClass0_1 : public ::System::Object
{
public:
	::System::UInt32 baseID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__4(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A___C__DISPLAYCLASS0_1__SATISFY_B__4_OFFSET))(this, a1);
	}
};
