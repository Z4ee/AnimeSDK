#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_3_7428343FF41DF56A_OFFSET UNITYSDK_OFFSET(0x190C74D0)
#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x190C7630)
#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_3_F15BEF49B393C7AF_OFFSET UNITYSDK_OFFSET(0x190C7450)
#define RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190C74A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerLittleGameCustomEvent_TypeDefinitionIndex = 20312;

	class TriggerLittleGameCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameEventSourceType SourceType; // 0x18
		::RPG::GameCore::DynamicString* EntityID; // 0x20
		::RPG::GameCore::DynamicString* EventName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F15BEF49B393C7AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerLittleGameCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerLittleGameCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_3_F15BEF49B393C7AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7428343FF41DF56A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_3_7428343FF41DF56A_OFFSET))(a1, a2);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLITTLEGAMECUSTOMEVENT_METHOD_3_832295EC279E5994_OFFSET))(this);
		}
	};
}
