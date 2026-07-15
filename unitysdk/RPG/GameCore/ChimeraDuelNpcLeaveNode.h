#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELNPCLEAVENODE_METHOD_3_35DBC84190ABE729_OFFSET UNITYSDK_OFFSET(0x1C244430)
#define RPG_GAMECORE_CHIMERADUELNPCLEAVENODE_METHOD_3_5CAAB1C3A1044E75_OFFSET UNITYSDK_OFFSET(0x1C2443D0)
#define RPG_GAMECORE_CHIMERADUELNPCLEAVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C244420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcLeaveNode_TypeDefinitionIndex = 15351;

	class ChimeraDuelNpcLeaveNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcSelectorConfig* Npc; // 0x10
		::System::Single Speed; // 0x18
		::System::Single LeaveTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCLEAVENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CAAB1C3A1044E75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCLEAVENODE_METHOD_3_5CAAB1C3A1044E75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35DBC84190ABE729(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcLeaveNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCLEAVENODE_METHOD_3_35DBC84190ABE729_OFFSET))(a1, a2);
		}
	};
}
