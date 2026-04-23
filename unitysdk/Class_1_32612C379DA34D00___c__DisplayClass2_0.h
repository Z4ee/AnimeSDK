#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }

#define CLASS_1_32612C379DA34D00___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9084110)
#define CLASS_1_32612C379DA34D00___C__DISPLAYCLASS2_0__GETROLE_B__0_OFFSET UNITYSDK_OFFSET(0x90843A0)

inline static constexpr unsigned int Class_1_32612C379DA34D00___c__DisplayClass2_0_TypeDefinitionIndex = 60302;

class Class_1_32612C379DA34D00___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightDragOpRoleSelector* roleSelector; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRole_b__0(::RPG::Client::GridFightRole* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_32612C379DA34D00___C__DISPLAYCLASS2_0__GETROLE_B__0_OFFSET))(this, x);
	}
};
