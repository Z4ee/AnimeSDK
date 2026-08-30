#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_54A693EE512CAFE8_OFFSET UNITYSDK_OFFSET(0x1EE6F140)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_CB528DB9A8711524_OFFSET UNITYSDK_OFFSET(0x1EE6F190)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierShopReplaceRoleConfig_TypeDefinitionIndex = 19123;

	class GridFightModifierShopReplaceRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54A693EE512CAFE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_54A693EE512CAFE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB528DB9A8711524(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_METHOD_3_CB528DB9A8711524_OFFSET))(a1, a2);
		}
	};
}
