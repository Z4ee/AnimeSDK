#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITENTITYEVENT_METHOD_4_5F0931A7939E2247_OFFSET UNITYSDK_OFFSET(0x190FBD60)
#define RPG_GAMECORE_WAITENTITYEVENT_METHOD_4_CADFA0D65FAA705A_OFFSET UNITYSDK_OFFSET(0x190FBE40)
#define RPG_GAMECORE_WAITENTITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190FBDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityEvent_TypeDefinitionIndex = 19696;

	class WaitEntityEvent : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5F0931A7939E2247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENT_METHOD_4_5F0931A7939E2247_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CADFA0D65FAA705A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENT_METHOD_4_CADFA0D65FAA705A_OFFSET))(a1, a2);
		}
	};
}
