#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_METHOD_3_151CD5631151A84E_OFFSET UNITYSDK_OFFSET(0x188015A0)
#define RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_METHOD_3_4E4C2F9B7DB47A0D_OFFSET UNITYSDK_OFFSET(0x188014C0)
#define RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18801550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPlayEyeAnimationNode_TypeDefinitionIndex = 15111;

	class ChimeraDuelPlayEyeAnimationNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Int32 EyeState; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E4C2F9B7DB47A0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_METHOD_3_4E4C2F9B7DB47A0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_151CD5631151A84E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_METHOD_3_151CD5631151A84E_OFFSET))(a1, a2);
		}
	};
}
