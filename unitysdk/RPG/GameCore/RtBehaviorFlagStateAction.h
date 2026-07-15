#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION_METHOD_2_91D730AF9E23B194_OFFSET UNITYSDK_OFFSET(0x1BB8B390)
#define RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8B510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagStateAction_TypeDefinitionIndex = 16929;

	class RtBehaviorFlagStateAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtBehaviorFlag Flag; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDeactive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_91D730AF9E23B194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBehaviorFlagStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBehaviorFlagStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION_METHOD_2_91D730AF9E23B194_OFFSET))(a1, a2);
		}
	};
}
