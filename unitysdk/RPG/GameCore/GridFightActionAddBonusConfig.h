#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_6_4A2EE79ABE7698A8_OFFSET UNITYSDK_OFFSET(0x197D5300)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_6_50F66100A9CAD543_OFFSET UNITYSDK_OFFSET(0x197D5190)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197D5260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddBonusConfig_TypeDefinitionIndex = 18306;

	class GridFightActionAddBonusConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_50F66100A9CAD543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_6_50F66100A9CAD543_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4A2EE79ABE7698A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_METHOD_6_4A2EE79ABE7698A8_OFFSET))(a1, a2);
		}
	};
}
