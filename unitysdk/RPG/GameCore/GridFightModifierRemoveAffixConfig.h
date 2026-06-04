#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_METHOD_3_192A77660EF67F33_OFFSET UNITYSDK_OFFSET(0x197F32F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_METHOD_3_4CA1A7F9A3CDD2EA_OFFSET UNITYSDK_OFFSET(0x197EE870)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EE820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRemoveAffixConfig_TypeDefinitionIndex = 18478;

	class GridFightModifierRemoveAffixConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_192A77660EF67F33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRemoveAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRemoveAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_METHOD_3_192A77660EF67F33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CA1A7F9A3CDD2EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierRemoveAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierRemoveAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVEAFFIXCONFIG_METHOD_3_4CA1A7F9A3CDD2EA_OFFSET))(a1, a2);
		}
	};
}
