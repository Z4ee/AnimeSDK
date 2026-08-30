#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_METHOD_3_7E2C7D5E215819FA_OFFSET UNITYSDK_OFFSET(0x1D52C9C0)
#define RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_METHOD_3_BBB7EEE4764B83AD_OFFSET UNITYSDK_OFFSET(0x1D52CA00)
#define RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazeBuffSelectInBattle_TypeDefinitionIndex = 22262;

	class ShowMazeBuffSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* MazeBuffIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E2C7D5E215819FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_METHOD_3_7E2C7D5E215819FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBB7EEE4764B83AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_METHOD_3_BBB7EEE4764B83AD_OFFSET))(a1, a2);
		}
	};
}
