#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHHANDRESETGAME_METHOD_3_8B6E6B73C860A32D_OFFSET UNITYSDK_OFFSET(0x19CDB660)
#define RPG_GAMECORE_SWITCHHANDRESETGAME_METHOD_3_A12E072C76515B54_OFFSET UNITYSDK_OFFSET(0x19CDB5E0)
#define RPG_GAMECORE_SWITCHHANDRESETGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDB630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandResetGame_TypeDefinitionIndex = 19811;

	class SwitchHandResetGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::RPG::GameCore::DynamicString* AnchorID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A12E072C76515B54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandResetGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandResetGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETGAME_METHOD_3_A12E072C76515B54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B6E6B73C860A32D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandResetGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandResetGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETGAME_METHOD_3_8B6E6B73C860A32D_OFFSET))(a1, a2);
		}
	};
}
