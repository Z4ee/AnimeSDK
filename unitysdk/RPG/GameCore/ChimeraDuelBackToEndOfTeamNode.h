#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_2CDB57E8F7C2A48A_OFFSET UNITYSDK_OFFSET(0x1C3910B0)
#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_BA9AA49431C5FD10_OFFSET UNITYSDK_OFFSET(0x1C391050)
#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3910A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBackToEndOfTeamNode_TypeDefinitionIndex = 15409;

	class ChimeraDuelBackToEndOfTeamNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Target; // 0x10
		::System::Single TransitionTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA9AA49431C5FD10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_BA9AA49431C5FD10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CDB57E8F7C2A48A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_2CDB57E8F7C2A48A_OFFSET))(a1, a2);
		}
	};
}
