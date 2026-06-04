#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_38CA29BF7AB12ADE_OFFSET UNITYSDK_OFFSET(0x197F2DF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_9D5CDD91CD9A6FD7_OFFSET UNITYSDK_OFFSET(0x197EDFB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EDF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMonsterHpRatioConfig_TypeDefinitionIndex = 18479;

	class GridFightModifierMonsterHpRatioConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38CA29BF7AB12ADE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_38CA29BF7AB12ADE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D5CDD91CD9A6FD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_9D5CDD91CD9A6FD7_OFFSET))(a1, a2);
		}
	};
}
