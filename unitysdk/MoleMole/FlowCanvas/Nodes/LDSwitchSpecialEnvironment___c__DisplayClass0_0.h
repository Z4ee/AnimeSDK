#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E82A8DEF8081DA8E;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170CA9C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchSpecialEnvironment___c__DisplayClass0_0_TypeDefinitionIndex = 74793;

	class LDSwitchSpecialEnvironment___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* stageEntity; // 0x10
		::Class_3_E82A8DEF8081DA8E* stageBehaviorDataComponent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}
	};
}
