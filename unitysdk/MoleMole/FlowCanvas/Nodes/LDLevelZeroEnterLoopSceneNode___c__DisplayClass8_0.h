#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6CF10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_0_TypeDefinitionIndex = 63835;

	class LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_3_DFD5D1FDB9D2A4AC* modelComp; // 0x10
		::MoleMole::Battle::Entity* localAvatar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}
	};
}
