#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_METHOD_3_20613692F545808E_OFFSET UNITYSDK_OFFSET(0x1D06A140)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_METHOD_3_810E3F66F26B3772_OFFSET UNITYSDK_OFFSET(0x1D06A0F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierHertaLegionConfig_TypeDefinitionIndex = 18644;

	class GridFightModifierHertaLegionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_810E3F66F26B3772(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierHertaLegionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierHertaLegionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_METHOD_3_810E3F66F26B3772_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20613692F545808E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierHertaLegionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierHertaLegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_METHOD_3_20613692F545808E_OFFSET))(a1, a2);
		}
	};
}
