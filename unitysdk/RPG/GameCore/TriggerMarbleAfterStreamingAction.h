#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_METHOD_3_1B1D8D2331478BD2_OFFSET UNITYSDK_OFFSET(0x19E171D0)
#define RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_METHOD_3_E9617C78E8463BDE_OFFSET UNITYSDK_OFFSET(0x19E172E0)
#define RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E172B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMarbleAfterStreamingAction_TypeDefinitionIndex = 20102;

	class TriggerMarbleAfterStreamingAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B1D8D2331478BD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_METHOD_3_1B1D8D2331478BD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9617C78E8463BDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMarbleAfterStreamingAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMARBLEAFTERSTREAMINGACTION_METHOD_3_E9617C78E8463BDE_OFFSET))(a1, a2);
		}
	};
}
