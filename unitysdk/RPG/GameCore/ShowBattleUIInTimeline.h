#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_METHOD_3_6F36E9C1E8336BCA_OFFSET UNITYSDK_OFFSET(0x176F67A0)
#define RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_METHOD_3_9CE461F452198E8B_OFFSET UNITYSDK_OFFSET(0x176F6720)
#define RPG_GAMECORE_SHOWBATTLEUIINTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x176F6770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleUIInTimeline_TypeDefinitionIndex = 21123;

	class ShowBattleUIInTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleUIPanelType>* PanelTypes; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUIINTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CE461F452198E8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleUIInTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleUIInTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_METHOD_3_9CE461F452198E8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F36E9C1E8336BCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleUIInTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleUIInTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_METHOD_3_6F36E9C1E8336BCA_OFFSET))(a1, a2);
		}
	};
}
