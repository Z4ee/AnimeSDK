#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_METHOD_3_3A67FFCC60B0942E_OFFSET UNITYSDK_OFFSET(0x1EE6CB60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_METHOD_3_546957CA524465EA_OFFSET UNITYSDK_OFFSET(0x1EE6CBB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBanEquipDressConfig_TypeDefinitionIndex = 19264;

	class GridFightModifierBanEquipDressConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A67FFCC60B0942E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBanEquipDressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBanEquipDressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_METHOD_3_3A67FFCC60B0942E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_546957CA524465EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBanEquipDressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBanEquipDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_METHOD_3_546957CA524465EA_OFFSET))(a1, a2);
		}
	};
}
