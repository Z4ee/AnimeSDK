#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace RPG::GameCore { class SingleAnimEntry; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEANIMEVENTCONFIG_METHOD_2_57ADA397E9BD51E4_OFFSET UNITYSDK_OFFSET(0x18E6E090)
#define RPG_GAMECORE_SINGLEANIMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6E410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleAnimEventConfig_TypeDefinitionIndex = 15415;

	class SingleAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorStateName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::RPG::GameCore::AnimParamRangeEntry* CompareParam; // 0x20
		::Il2CppArray<::RPG::GameCore::SingleAnimEntry*>* AnimatorStates; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EventList; // 0x30
		::System::Boolean OnlyTriggerInFirstLoop; // 0x38
		::System::Boolean AllowTriggeringOnTransitionIn; // 0x39
		::System::Boolean AllowTriggeringOnTransitionOut; // 0x3A
		::System::Boolean ForceTrigger; // 0x3B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_57ADA397E9BD51E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleAnimEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleAnimEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMEVENTCONFIG_METHOD_2_57ADA397E9BD51E4_OFFSET))(a1, a2);
		}
	};
}
