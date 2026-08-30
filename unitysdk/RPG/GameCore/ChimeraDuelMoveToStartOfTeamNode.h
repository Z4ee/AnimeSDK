#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELMOVETOSTARTOFTEAMNODE_METHOD_3_08C9B8C912BF75DD_OFFSET UNITYSDK_OFFSET(0x1CFCA700)
#define RPG_GAMECORE_CHIMERADUELMOVETOSTARTOFTEAMNODE_METHOD_3_0B105768ECF5AA1F_OFFSET UNITYSDK_OFFSET(0x1CFCA6A0)
#define RPG_GAMECORE_CHIMERADUELMOVETOSTARTOFTEAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCA6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMoveToStartOfTeamNode_TypeDefinitionIndex = 15847;

	class ChimeraDuelMoveToStartOfTeamNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Target; // 0x10
		::System::Single TransitionTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMOVETOSTARTOFTEAMNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B105768ECF5AA1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMoveToStartOfTeamNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMoveToStartOfTeamNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMOVETOSTARTOFTEAMNODE_METHOD_3_0B105768ECF5AA1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08C9B8C912BF75DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMoveToStartOfTeamNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMoveToStartOfTeamNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMOVETOSTARTOFTEAMNODE_METHOD_3_08C9B8C912BF75DD_OFFSET))(a1, a2);
		}
	};
}
