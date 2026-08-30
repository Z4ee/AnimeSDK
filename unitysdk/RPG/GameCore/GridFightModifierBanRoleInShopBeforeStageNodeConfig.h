#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_3070F24B7D743397_OFFSET UNITYSDK_OFFSET(0x1EE6CBC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_E75EFA1728999E7B_OFFSET UNITYSDK_OFFSET(0x1EE6CC10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBanRoleInShopBeforeStageNodeConfig_TypeDefinitionIndex = 19216;

	class GridFightModifierBanRoleInShopBeforeStageNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3070F24B7D743397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_3070F24B7D743397_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E75EFA1728999E7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_E75EFA1728999E7B_OFFSET))(a1, a2);
		}
	};
}
