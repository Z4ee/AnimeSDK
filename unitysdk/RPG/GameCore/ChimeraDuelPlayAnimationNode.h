#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_METHOD_3_2782CAFB9302087C_OFFSET UNITYSDK_OFFSET(0x1CFCB700)
#define RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_METHOD_3_8412399DDBB74E5A_OFFSET UNITYSDK_OFFSET(0x1CFCB6A0)
#define RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCB6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPlayAnimationNode_TypeDefinitionIndex = 15773;

	class ChimeraDuelPlayAnimationNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraBattleAnimationType Anim; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8412399DDBB74E5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPlayAnimationNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPlayAnimationNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_METHOD_3_8412399DDBB74E5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2782CAFB9302087C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPlayAnimationNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPlayAnimationNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_METHOD_3_2782CAFB9302087C_OFFSET))(a1, a2);
		}
	};
}
