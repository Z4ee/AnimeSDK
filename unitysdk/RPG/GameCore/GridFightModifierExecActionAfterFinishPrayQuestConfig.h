#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_METHOD_3_9D6F4F640F65E0F4_OFFSET UNITYSDK_OFFSET(0x1D1591B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_METHOD_3_BC1BB2C87B263178_OFFSET UNITYSDK_OFFSET(0x1D159160)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1591A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterFinishPrayQuestConfig_TypeDefinitionIndex = 19269;

	class GridFightModifierExecActionAfterFinishPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC1BB2C87B263178(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_METHOD_3_BC1BB2C87B263178_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D6F4F640F65E0F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_METHOD_3_9D6F4F640F65E0F4_OFFSET))(a1, a2);
		}
	};
}
