#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimelineIntermediaStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG_METHOD_2_CA89BB556C618CD4_OFFSET UNITYSDK_OFFSET(0x1D5D2180)
#define RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineStateTransitionConfig_TypeDefinitionIndex = 16435;

	class TimelineStateTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartStateName; // 0x10
		::System::String* EndStateName; // 0x18
		::Il2CppArray<::RPG::GameCore::TimelineIntermediaStateConfig*>* TransitionStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA89BB556C618CD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimelineStateTransitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimelineStateTransitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATETRANSITIONCONFIG_METHOD_2_CA89BB556C618CD4_OFFSET))(a1, a2);
		}
	};
}
