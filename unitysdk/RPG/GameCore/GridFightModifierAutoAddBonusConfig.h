#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_504B150D3CB730D7_OFFSET UNITYSDK_OFFSET(0x1EE6C9F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_F4B95313880375BB_OFFSET UNITYSDK_OFFSET(0x1EE6CA40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAutoAddBonusConfig_TypeDefinitionIndex = 19164;

	class GridFightModifierAutoAddBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_504B150D3CB730D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_504B150D3CB730D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4B95313880375BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_METHOD_3_F4B95313880375BB_OFFSET))(a1, a2);
		}
	};
}
