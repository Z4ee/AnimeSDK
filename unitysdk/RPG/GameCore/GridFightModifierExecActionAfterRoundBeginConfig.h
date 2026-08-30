#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_22B68B3813699ADA_OFFSET UNITYSDK_OFFSET(0x1D159450)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_72F3E91EA991969E_OFFSET UNITYSDK_OFFSET(0x1D159400)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterRoundBeginConfig_TypeDefinitionIndex = 19115;

	class GridFightModifierExecActionAfterRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72F3E91EA991969E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_72F3E91EA991969E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22B68B3813699ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_22B68B3813699ADA_OFFSET))(a1, a2);
		}
	};
}
