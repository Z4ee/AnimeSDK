#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_METHOD_3_3CDB8D34B48EA7D8_OFFSET UNITYSDK_OFFSET(0x1726B4C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_METHOD_3_42F76368C5F4E8F1_OFFSET UNITYSDK_OFFSET(0x17267F00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17267EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLockDataConfig_TypeDefinitionIndex = 17762;

	class GridFightModifierLockDataConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CDB8D34B48EA7D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLockDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLockDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_METHOD_3_3CDB8D34B48EA7D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42F76368C5F4E8F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLockDataConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLockDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKDATACONFIG_METHOD_3_42F76368C5F4E8F1_OFFSET))(a1, a2);
		}
	};
}
