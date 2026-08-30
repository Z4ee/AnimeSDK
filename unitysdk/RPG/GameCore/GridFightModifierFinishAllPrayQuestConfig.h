#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_METHOD_3_035FF04870FEB67A_OFFSET UNITYSDK_OFFSET(0x1EE6DD10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_METHOD_3_4D40E56B8AF17ED6_OFFSET UNITYSDK_OFFSET(0x1EE6DD60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6DD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFinishAllPrayQuestConfig_TypeDefinitionIndex = 19265;

	class GridFightModifierFinishAllPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_035FF04870FEB67A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_METHOD_3_035FF04870FEB67A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D40E56B8AF17ED6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFinishAllPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINISHALLPRAYQUESTCONFIG_METHOD_3_4D40E56B8AF17ED6_OFFSET))(a1, a2);
		}
	};
}
