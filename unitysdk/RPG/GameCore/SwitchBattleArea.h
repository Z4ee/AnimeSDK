#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAreaSwitchStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHBATTLEAREA_METHOD_3_26F83C64318FB697_OFFSET UNITYSDK_OFFSET(0x18EB7D50)
#define RPG_GAMECORE_SWITCHBATTLEAREA_METHOD_3_777E7BBDBDE3B375_OFFSET UNITYSDK_OFFSET(0x18EB7CD0)
#define RPG_GAMECORE_SWITCHBATTLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB7D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBattleArea_TypeDefinitionIndex = 22294;

	class SwitchBattleArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaName; // 0x18
		::RPG::GameCore::DynamicString* TagName; // 0x20
		::RPG::GameCore::DynamicFloat* UnifiedId; // 0x28
		::RPG::GameCore::BattleAreaSwitchStatus SwitchStatus; // 0x30
		::System::String* PriorityKey; // 0x38
		::System::Boolean WaitFinish; // 0x40
		::RPG::MVector3 RootPosition; // 0x44
		::RPG::MVector3 RootRotation; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBATTLEAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_777E7BBDBDE3B375(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBattleArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBattleArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBATTLEAREA_METHOD_3_777E7BBDBDE3B375_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_26F83C64318FB697(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBattleArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBATTLEAREA_METHOD_3_26F83C64318FB697_OFFSET))(a1, a2);
		}
	};
}
