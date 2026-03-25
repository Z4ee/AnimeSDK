#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_METHOD_4_7EE788FB89F45EE2_OFFSET UNITYSDK_OFFSET(0x178FCDE0)
#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x178FD000)
#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_METHOD_4_99780285AEB0CFBA_OFFSET UNITYSDK_OFFSET(0x178FCD00)
#define RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x178FCD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLittleGameCustomEvent_TypeDefinitionIndex = 19631;

	class WaitLittleGameCustomEvent : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::LittleGameEventSourceType SourceType; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::RPG::GameCore::DynamicString* EventName; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_99780285AEB0CFBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_METHOD_4_99780285AEB0CFBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EE788FB89F45EE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_METHOD_4_7EE788FB89F45EE2_OFFSET))(a1, a2);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLITTLEGAMECUSTOMEVENT_METHOD_4_832295EC279E5994_OFFSET))(this);
		}
	};
}
