#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_0FBB572199EDA5E4_OFFSET UNITYSDK_OFFSET(0x197F1AA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_29F0DFC6C71FD65D_OFFSET UNITYSDK_OFFSET(0x197EBE70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EBE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterCraftConfig_TypeDefinitionIndex = 18375;

	class GridFightModifierExecActionAfterCraftConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0FBB572199EDA5E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_0FBB572199EDA5E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29F0DFC6C71FD65D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_29F0DFC6C71FD65D_OFFSET))(a1, a2);
		}
	};
}
