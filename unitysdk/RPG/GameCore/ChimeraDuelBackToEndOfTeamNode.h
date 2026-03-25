#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_2CDB57E8F7C2A48A_OFFSET UNITYSDK_OFFSET(0x17095DB0)
#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_9D201C772BFA396D_OFFSET UNITYSDK_OFFSET(0x17095CD0)
#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17095D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBackToEndOfTeamNode_TypeDefinitionIndex = 14714;

	class ChimeraDuelBackToEndOfTeamNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Target; // 0x10
		::System::Single TransitionTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D201C772BFA396D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_9D201C772BFA396D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CDB57E8F7C2A48A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_METHOD_3_2CDB57E8F7C2A48A_OFFSET))(a1, a2);
		}
	};
}
