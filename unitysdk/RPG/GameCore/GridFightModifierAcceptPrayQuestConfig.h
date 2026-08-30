#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_METHOD_3_4CA8803F29D54A1E_OFFSET UNITYSDK_OFFSET(0x1D157AC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_METHOD_3_C35AAAAB2089F602_OFFSET UNITYSDK_OFFSET(0x1D157A70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D157AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAcceptPrayQuestConfig_TypeDefinitionIndex = 19267;

	class GridFightModifierAcceptPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C35AAAAB2089F602(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_METHOD_3_C35AAAAB2089F602_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CA8803F29D54A1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAcceptPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERACCEPTPRAYQUESTCONFIG_METHOD_3_4CA8803F29D54A1E_OFFSET))(a1, a2);
		}
	};
}
