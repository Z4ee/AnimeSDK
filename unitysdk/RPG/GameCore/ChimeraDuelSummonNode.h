#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSUMMONNODE_METHOD_3_1730EC81CD985747_OFFSET UNITYSDK_OFFSET(0x19647CB0)
#define RPG_GAMECORE_CHIMERADUELSUMMONNODE_METHOD_3_52F3CC04C7305341_OFFSET UNITYSDK_OFFSET(0x19647AE0)
#define RPG_GAMECORE_CHIMERADUELSUMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19647C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSummonNode_TypeDefinitionIndex = 15193;

	class ChimeraDuelSummonNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Boolean IsDefaultLightWeightActive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52F3CC04C7305341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSummonNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSummonNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONNODE_METHOD_3_52F3CC04C7305341_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1730EC81CD985747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSummonNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONNODE_METHOD_3_1730EC81CD985747_OFFSET))(a1, a2);
		}
	};
}
