#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelModifier; }

#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_209E4FB5799E6F6F_OFFSET UNITYSDK_OFFSET(0x19641D80)
#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_E053F932FB290682_OFFSET UNITYSDK_OFFSET(0x19641E60)
#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19641E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelModifierContainerNode_TypeDefinitionIndex = 15244;

	class ChimeraDuelModifierContainerNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelModifier*>* Modifiers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_209E4FB5799E6F6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelModifierContainerNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_209E4FB5799E6F6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E053F932FB290682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_E053F932FB290682_OFFSET))(a1, a2);
		}
	};
}
