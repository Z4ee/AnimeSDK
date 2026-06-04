#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_672E31C794868D2D_OFFSET UNITYSDK_OFFSET(0x197F3DD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_CB528DB9A8711524_OFFSET UNITYSDK_OFFSET(0x197F3EA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F3E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopReplaceRoleConfig_TypeDefinitionIndex = 18354;

	class GridFightModifierShopReplaceRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_672E31C794868D2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_672E31C794868D2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB528DB9A8711524(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_CB528DB9A8711524_OFFSET))(a1, a2);
		}
	};
}
