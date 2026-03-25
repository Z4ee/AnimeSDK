#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELNPCDITHERINNODE_METHOD_3_1607D27E31BF9D89_OFFSET UNITYSDK_OFFSET(0x170A1840)
#define RPG_GAMECORE_CHIMERADUELNPCDITHERINNODE_METHOD_3_89736B7751093BE7_OFFSET UNITYSDK_OFFSET(0x170A1740)
#define RPG_GAMECORE_CHIMERADUELNPCDITHERINNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A17E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcDitherInNode_TypeDefinitionIndex = 14645;

	class ChimeraDuelNpcDitherInNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcSelectorConfig* Npc; // 0x10
		::System::Single DitherTime; // 0x18
		::System::Boolean IsDitherIn; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCDITHERINNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89736B7751093BE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcDitherInNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcDitherInNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCDITHERINNODE_METHOD_3_89736B7751093BE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1607D27E31BF9D89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcDitherInNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcDitherInNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCDITHERINNODE_METHOD_3_1607D27E31BF9D89_OFFSET))(a1, a2);
		}
	};
}
