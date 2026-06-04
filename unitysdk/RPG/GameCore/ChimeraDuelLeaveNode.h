#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_1FE28DA51C1EAC67_OFFSET UNITYSDK_OFFSET(0x1963FD20)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_85AD2B36A3E9DDE3_OFFSET UNITYSDK_OFFSET(0x1963FC40)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1963FCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelLeaveNode_TypeDefinitionIndex = 15186;

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

		static ::System::Void Method_3_85AD2B36A3E9DDE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeaveNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeaveNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_85AD2B36A3E9DDE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FE28DA51C1EAC67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeaveNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeaveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_1FE28DA51C1EAC67_OFFSET))(a1, a2);
		}
	};
}
