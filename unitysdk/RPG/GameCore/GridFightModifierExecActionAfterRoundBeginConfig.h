#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_22B68B3813699ADA_OFFSET UNITYSDK_OFFSET(0x197EC570)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_CEE4215048DD8D23_OFFSET UNITYSDK_OFFSET(0x197F1EA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EC520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterRoundBeginConfig_TypeDefinitionIndex = 18346;

	class GridFightModifierExecActionAfterRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEE4215048DD8D23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_CEE4215048DD8D23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22B68B3813699ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_METHOD_3_22B68B3813699ADA_OFFSET))(a1, a2);
		}
	};
}
