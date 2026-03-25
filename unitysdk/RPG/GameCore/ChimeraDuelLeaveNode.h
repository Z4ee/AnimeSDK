#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_68F3C1212D656C7E_OFFSET UNITYSDK_OFFSET(0x1709E7E0)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_803116249400F93C_OFFSET UNITYSDK_OFFSET(0x1709E8C0)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1709E870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelLeaveNode_TypeDefinitionIndex = 14654;

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

		static ::System::Void Method_3_68F3C1212D656C7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeaveNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeaveNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_68F3C1212D656C7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_803116249400F93C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelLeaveNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelLeaveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_METHOD_3_803116249400F93C_OFFSET))(a1, a2);
		}
	};
}
