#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_METHOD_3_D3C6374A21A777EC_OFFSET UNITYSDK_OFFSET(0x18800680)
#define RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_METHOD_3_F56F987565D262E3_OFFSET UNITYSDK_OFFSET(0x188005A0)
#define RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18800630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcAnimatorControlNode_TypeDefinitionIndex = 15113;

	class ChimeraDuelNpcAnimatorControlNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcSelectorConfig* Npc; // 0x10
		::System::String* AnimatorTrigger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F56F987565D262E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_METHOD_3_F56F987565D262E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D3C6374A21A777EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_METHOD_3_D3C6374A21A777EC_OFFSET))(a1, a2);
		}
	};
}
