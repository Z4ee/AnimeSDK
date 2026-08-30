#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_METHOD_3_6CFA232E2BAE40AB_OFFSET UNITYSDK_OFFSET(0x1EE6CCE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_METHOD_3_9589ED87861891AF_OFFSET UNITYSDK_OFFSET(0x1EE6CD30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCheckEquipAndAddBonusConfig_TypeDefinitionIndex = 19168;

	class GridFightModifierCheckEquipAndAddBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6CFA232E2BAE40AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_METHOD_3_6CFA232E2BAE40AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9589ED87861891AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_METHOD_3_9589ED87861891AF_OFFSET))(a1, a2);
		}
	};
}
