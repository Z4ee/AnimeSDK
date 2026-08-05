#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDD790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_0_TypeDefinitionIndex = 56971;

	class LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* localAvatar; // 0x10
		::Class_3_C93CC3D2C2AC4067* modelComp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}
	};
}
