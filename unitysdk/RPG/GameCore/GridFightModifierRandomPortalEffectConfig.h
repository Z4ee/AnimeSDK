#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMPORTALEFFECTCONFIG_METHOD_3_E04DF58CA8B76A7E_OFFSET UNITYSDK_OFFSET(0x1D15A410)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMPORTALEFFECTCONFIG_METHOD_3_E755CB7746FDFE3A_OFFSET UNITYSDK_OFFSET(0x1D15A460)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMPORTALEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomPortalEffectConfig_TypeDefinitionIndex = 19219;

	class GridFightModifierRandomPortalEffectConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMPORTALEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E04DF58CA8B76A7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRandomPortalEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRandomPortalEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMPORTALEFFECTCONFIG_METHOD_3_E04DF58CA8B76A7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E755CB7746FDFE3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRandomPortalEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRandomPortalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMPORTALEFFECTCONFIG_METHOD_3_E755CB7746FDFE3A_OFFSET))(a1, a2);
		}
	};
}
