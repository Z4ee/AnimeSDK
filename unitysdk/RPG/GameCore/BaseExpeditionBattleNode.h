#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_METHOD_2_7BEE41E8D98D9D83_OFFSET UNITYSDK_OFFSET(0x1CE66FF0)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_METHOD_2_B15B5738578350A5_OFFSET UNITYSDK_OFFSET(0x1CE66DA0)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE67050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseExpeditionBattleNode_TypeDefinitionIndex = 16025;

	class BaseExpeditionBattleNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B15B5738578350A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseExpeditionBattleNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseExpeditionBattleNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_METHOD_2_B15B5738578350A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_7BEE41E8D98D9D83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseExpeditionBattleNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseExpeditionBattleNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_METHOD_2_7BEE41E8D98D9D83_OFFSET))(a1, a2);
		}
	};
}
