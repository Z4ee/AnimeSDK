#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ANIMATIONTIMEEVENT_METHOD_2_416EA138A328FB17_OFFSET UNITYSDK_OFFSET(0x186A61C0)
#define RPG_GAMECORE_ANIMATIONTIMEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x186A6310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationTimeEvent_TypeDefinitionIndex = 21344;

	class AnimationTimeEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedTime; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONTIMEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_416EA138A328FB17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimationTimeEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimationTimeEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONTIMEEVENT_METHOD_2_416EA138A328FB17_OFFSET))(a1, a2);
		}
	};
}
