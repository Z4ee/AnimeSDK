#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_METHOD_3_520A2EF6A2450A0A_OFFSET UNITYSDK_OFFSET(0x17199930)
#define RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_METHOD_3_8A991D283B281E60_OFFSET UNITYSDK_OFFSET(0x171998B0)
#define RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17199900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRandomTriggerAnimEvent_TypeDefinitionIndex = 20621;

	class EnableRandomTriggerAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueKey; // 0x18
		::System::Boolean Enable; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Events; // 0x28
		::System::Single MinRandomTime; // 0x30
		::System::Single MaxRandomTime; // 0x34
		::Il2CppArray<::System::Single>* MultiTriggerWeightList; // 0x38
		::System::Single MultiTriggerDeltaTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A991D283B281E60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRandomTriggerAnimEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRandomTriggerAnimEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_METHOD_3_8A991D283B281E60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_520A2EF6A2450A0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRandomTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRandomTriggerAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLERANDOMTRIGGERANIMEVENT_METHOD_3_520A2EF6A2450A0A_OFFSET))(a1, a2);
		}
	};
}
