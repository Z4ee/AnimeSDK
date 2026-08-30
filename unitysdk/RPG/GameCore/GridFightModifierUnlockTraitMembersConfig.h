#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_METHOD_3_0BB47F10CC0FC7FD_OFFSET UNITYSDK_OFFSET(0x1D15B300)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_METHOD_3_F09D879BFDCE4CB9_OFFSET UNITYSDK_OFFSET(0x1D15B2B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15B2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUnlockTraitMembersConfig_TypeDefinitionIndex = 19131;

	class GridFightModifierUnlockTraitMembersConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F09D879BFDCE4CB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_METHOD_3_F09D879BFDCE4CB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BB47F10CC0FC7FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_METHOD_3_0BB47F10CC0FC7FD_OFFSET))(a1, a2);
		}
	};
}
