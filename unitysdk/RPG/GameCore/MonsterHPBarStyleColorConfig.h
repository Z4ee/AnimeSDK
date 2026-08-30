#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterHPBarStyleColorSetting; }

#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG_METHOD_2_AEB7E74DC29C09C5_OFFSET UNITYSDK_OFFSET(0x1D2D3DC0)
#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D3ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterHPBarStyleColorConfig_TypeDefinitionIndex = 16960;

	class MonsterHPBarStyleColorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MonsterHPBarStyleColorSetting* Normal; // 0x10
		::RPG::GameCore::MonsterHPBarStyleColorSetting* SuperArmorBreak; // 0x18
		::RPG::GameCore::MonsterHPBarStyleColorSetting* StageInvasion; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AEB7E74DC29C09C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterHPBarStyleColorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterHPBarStyleColorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORCONFIG_METHOD_2_AEB7E74DC29C09C5_OFFSET))(a1, a2);
		}
	};
}
