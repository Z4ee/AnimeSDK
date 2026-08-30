#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCLEARPRAYQUESTCONFIG_METHOD_3_0CA1A90903399673_OFFSET UNITYSDK_OFFSET(0x1EE6CD90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCLEARPRAYQUESTCONFIG_METHOD_3_C312A52EB9C3A4AF_OFFSET UNITYSDK_OFFSET(0x1EE6CD40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCLEARPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierClearPrayQuestConfig_TypeDefinitionIndex = 19266;

	class GridFightModifierClearPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCLEARPRAYQUESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C312A52EB9C3A4AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierClearPrayQuestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierClearPrayQuestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCLEARPRAYQUESTCONFIG_METHOD_3_C312A52EB9C3A4AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CA1A90903399673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierClearPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierClearPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCLEARPRAYQUESTCONFIG_METHOD_3_0CA1A90903399673_OFFSET))(a1, a2);
		}
	};
}
