#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define CLASS_1_BB9A2E8A37857B66___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4CA90)
#define CLASS_1_BB9A2E8A37857B66___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET UNITYSDK_OFFSET(0x14E4CAB0)

inline static constexpr unsigned int Class_1_BB9A2E8A37857B66___c__DisplayClass0_0_TypeDefinitionIndex = 62056;

class Class_1_BB9A2E8A37857B66___c__DisplayClass0_0 : public ::System::Object
{
public:
	::RPG::Client::GridFightEquipItemData* equipItemData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB9A2E8A37857B66___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_BB9A2E8A37857B66___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET))(this, a1);
	}
};
