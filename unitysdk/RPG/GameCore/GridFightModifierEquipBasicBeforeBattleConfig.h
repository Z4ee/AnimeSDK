#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_METHOD_3_7FC37B139D844931_OFFSET UNITYSDK_OFFSET(0x1C5D0B70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_METHOD_3_CC1CBD1CE7A88D55_OFFSET UNITYSDK_OFFSET(0x1C5D0BC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEquipBasicBeforeBattleConfig_TypeDefinitionIndex = 18710;

	class GridFightModifierEquipBasicBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FC37B139D844931(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_METHOD_3_7FC37B139D844931_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC1CBD1CE7A88D55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierEquipBasicBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPBASICBEFOREBATTLECONFIG_METHOD_3_CC1CBD1CE7A88D55_OFFSET))(a1, a2);
		}
	};
}
