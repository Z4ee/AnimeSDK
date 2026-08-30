#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_METHOD_3_8FF4EDD28B3B2BEB_OFFSET UNITYSDK_OFFSET(0x1D081430)
#define RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_METHOD_3_B240F77B457716D5_OFFSET UNITYSDK_OFFSET(0x1D081490)
#define RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D081480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleLoopNode_TypeDefinitionIndex = 16031;

	class ExpeditionBattleLoopNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x10
		::System::UInt32 LoopCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FF4EDD28B3B2BEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleLoopNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleLoopNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_METHOD_3_8FF4EDD28B3B2BEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B240F77B457716D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleLoopNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleLoopNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_METHOD_3_B240F77B457716D5_OFFSET))(a1, a2);
		}
	};
}
