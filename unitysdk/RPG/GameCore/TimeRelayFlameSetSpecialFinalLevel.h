#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_METHOD_3_3853BA0E63B80B9A_OFFSET UNITYSDK_OFFSET(0x1789DC90)
#define RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_METHOD_3_6613BD4F1C5F1554_OFFSET UNITYSDK_OFFSET(0x17888C70)
#define RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17888BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRelayFlameSetSpecialFinalLevel_TypeDefinitionIndex = 20217;

	class TimeRelayFlameSetSpecialFinalLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ItemID; // 0x18
		::RPG::GameCore::DynamicFloat* ItemNumPerStep; // 0x20
		::RPG::GameCore::DynamicFloat* MaxStep; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3853BA0E63B80B9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_METHOD_3_3853BA0E63B80B9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6613BD4F1C5F1554(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_METHOD_3_6613BD4F1C5F1554_OFFSET))(a1, a2);
		}
	};
}
