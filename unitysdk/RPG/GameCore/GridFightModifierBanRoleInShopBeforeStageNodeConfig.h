#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_55C8FEF1A5626862_OFFSET UNITYSDK_OFFSET(0x172610B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_E75EFA1728999E7B_OFFSET UNITYSDK_OFFSET(0x17261180)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17261130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBanRoleInShopBeforeStageNodeConfig_TypeDefinitionIndex = 17849;

	class GridFightModifierBanRoleInShopBeforeStageNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55C8FEF1A5626862(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_55C8FEF1A5626862_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E75EFA1728999E7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBanRoleInShopBeforeStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANROLEINSHOPBEFORESTAGENODECONFIG_METHOD_3_E75EFA1728999E7B_OFFSET))(a1, a2);
		}
	};
}
