#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERPLAYERLEVELUPCONFIG_METHOD_3_340BC7B61A042B5B_OFFSET UNITYSDK_OFFSET(0x1D159330)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERPLAYERLEVELUPCONFIG_METHOD_3_5322A0F584E9B6F7_OFFSET UNITYSDK_OFFSET(0x1D1592E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERPLAYERLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterPlayerLevelUpConfig_TypeDefinitionIndex = 19135;

	class GridFightModifierExecActionAfterPlayerLevelUpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERPLAYERLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5322A0F584E9B6F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterPlayerLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterPlayerLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERPLAYERLEVELUPCONFIG_METHOD_3_5322A0F584E9B6F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_340BC7B61A042B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterPlayerLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterPlayerLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERPLAYERLEVELUPCONFIG_METHOD_3_340BC7B61A042B5B_OFFSET))(a1, a2);
		}
	};
}
