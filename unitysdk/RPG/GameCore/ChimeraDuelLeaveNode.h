#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_1FE28DA51C1EAC67_OFFSET UNITYSDK_OFFSET(0x1E335B50)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_F3A11E641E368B5B_OFFSET UNITYSDK_OFFSET(0x1E335AF0)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E335B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelLeaveNode_TypeDefinitionIndex = 15787;

	class ChimeraDuelLeaveNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::Single TurnTime; // 0x18
		::System::Single TurnAngle; // 0x1C
		::System::Single TurnRatio; // 0x20
		::System::Single Speed; // 0x24
		::System::Single LeaveTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3A11E641E368B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeaveNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeaveNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_F3A11E641E368B5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FE28DA51C1EAC67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeaveNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeaveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_1FE28DA51C1EAC67_OFFSET))(a1, a2);
		}
	};
}
