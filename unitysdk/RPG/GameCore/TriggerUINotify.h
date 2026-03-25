#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_7C3C04A9C7514BB5_OFFSET UNITYSDK_OFFSET(0x178CFBB0)
#define RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_F7532F9D17D30B79_OFFSET UNITYSDK_OFFSET(0x178CFB30)
#define RPG_GAMECORE_TRIGGERUINOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x178CFB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUINotify_TypeDefinitionIndex = 21119;

	class TriggerUINotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::System::Boolean WaitCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7532F9D17D30B79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_F7532F9D17D30B79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C3C04A9C7514BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_METHOD_3_7C3C04A9C7514BB5_OFFSET))(a1, a2);
		}
	};
}
