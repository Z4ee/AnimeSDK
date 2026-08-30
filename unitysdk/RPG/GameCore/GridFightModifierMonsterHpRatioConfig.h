#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_59DB532F03EDB793_OFFSET UNITYSDK_OFFSET(0x1D15A170)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_9D5CDD91CD9A6FD7_OFFSET UNITYSDK_OFFSET(0x1D15A1C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMonsterHpRatioConfig_TypeDefinitionIndex = 19254;

	class GridFightModifierMonsterHpRatioConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59DB532F03EDB793(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_59DB532F03EDB793_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D5CDD91CD9A6FD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMonsterHpRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMONSTERHPRATIOCONFIG_METHOD_3_9D5CDD91CD9A6FD7_OFFSET))(a1, a2);
		}
	};
}
