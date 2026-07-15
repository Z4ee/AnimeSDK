#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_METHOD_3_09E509B7F346009F_OFFSET UNITYSDK_OFFSET(0x1C247EE0)
#define RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_METHOD_3_96459970D8F274EE_OFFSET UNITYSDK_OFFSET(0x1C247E40)
#define RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C247ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelShopModifierEffectNode_TypeDefinitionIndex = 15354;

	class ChimeraDuelShopModifierEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96459970D8F274EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_METHOD_3_96459970D8F274EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09E509B7F346009F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_METHOD_3_09E509B7F346009F_OFFSET))(a1, a2);
		}
	};
}
