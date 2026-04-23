#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::GameCore { class GridFightDragOpGridSelector; }

#define CLASS_1_32612C379DA34D00___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9084020)
#define CLASS_1_32612C379DA34D00___C__DISPLAYCLASS1_0__GETGRID_B__0_OFFSET UNITYSDK_OFFSET(0x9084240)
#define CLASS_1_32612C379DA34D00___C__DISPLAYCLASS1_0__GETGRID_B__1_OFFSET UNITYSDK_OFFSET(0x9084370)

inline static constexpr unsigned int Class_1_32612C379DA34D00___c__DisplayClass1_0_TypeDefinitionIndex = 60301;

class Class_1_32612C379DA34D00___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightDragOpGridSelector* gridSelector; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetGrid_b__0(::RPG::Client::GridFightGridData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00___C__DISPLAYCLASS1_0__GETGRID_B__0_OFFSET))(this, x);
	}

	::System::Boolean _GetGrid_b__1(::RPG::Client::GridFightGridData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00___C__DISPLAYCLASS1_0__GETGRID_B__1_OFFSET))(this, x);
	}
};
