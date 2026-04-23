#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG_METHOD_2_6EC6118AEB4C46CF_OFFSET UNITYSDK_OFFSET(0x18A449E0)
#define RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A44A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupEditorDefaultConfig_TypeDefinitionIndex = 16523;

	class LevelGroupEditorDefaultConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6EC6118AEB4C46CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupEditorDefaultConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupEditorDefaultConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG_METHOD_2_6EC6118AEB4C46CF_OFFSET))(a1, a2);
		}
	};
}
