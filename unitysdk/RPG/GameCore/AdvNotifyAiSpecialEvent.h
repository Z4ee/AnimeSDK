#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_METHOD_3_8F1007DD74DCE97D_OFFSET UNITYSDK_OFFSET(0x1BE23310)
#define RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_METHOD_3_95F0FD6D6F8F9448_OFFSET UNITYSDK_OFFSET(0x1BE232D0)
#define RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE23300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNotifyAiSpecialEvent_TypeDefinitionIndex = 19455;

	class AdvNotifyAiSpecialEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::STSpecialEventType SpecialEventType; // 0x18
		::RPG::GameCore::DynamicFloat* Distance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95F0FD6D6F8F9448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNotifyAiSpecialEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNotifyAiSpecialEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_METHOD_3_95F0FD6D6F8F9448_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F1007DD74DCE97D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNotifyAiSpecialEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNotifyAiSpecialEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNOTIFYAISPECIALEVENT_METHOD_3_8F1007DD74DCE97D_OFFSET))(a1, a2);
		}
	};
}
