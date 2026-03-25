#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelModifier; }

#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_9A82C3F36EFB80D7_OFFSET UNITYSDK_OFFSET(0x170A0B20)
#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_A954EC6E42428FFC_OFFSET UNITYSDK_OFFSET(0x170A0A40)
#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A0AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelModifierContainerNode_TypeDefinitionIndex = 14713;

	class ChimeraDuelModifierContainerNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelModifier*>* Modifiers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A954EC6E42428FFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelModifierContainerNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_A954EC6E42428FFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A82C3F36EFB80D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_METHOD_3_9A82C3F36EFB80D7_OFFSET))(a1, a2);
		}
	};
}
