#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class MoveTo; }

#define NODEGRAPH_MAINCITY_MOVETO___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x102CAA80)
#define NODEGRAPH_MAINCITY_MOVETO___C__DISPLAYCLASS31_0__ONNODEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x102CAA90)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int MoveTo___c__DisplayClass31_0_TypeDefinitionIndex = 74287;

	class MoveTo___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* avatar; // 0x10
		::NodeGraph::MainCity::MoveTo* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___C__DISPLAYCLASS31_0__ONNODEUPDATE_B__0_OFFSET))(this);
		}
	};
}
