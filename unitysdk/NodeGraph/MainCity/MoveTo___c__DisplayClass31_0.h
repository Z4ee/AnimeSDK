#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class MoveTo; }

#define NODEGRAPH_MAINCITY_MOVETO___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5893E0)
#define NODEGRAPH_MAINCITY_MOVETO___C__DISPLAYCLASS31_0__ONNODEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xE5893F0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int MoveTo___c__DisplayClass31_0_TypeDefinitionIndex = 52382;

	class MoveTo___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::NodeGraph::MainCity::MoveTo* __4__this; // 0x10
		::MoleMole::Battle::Entity* avatar; // 0x18

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
