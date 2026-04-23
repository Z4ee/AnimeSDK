#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITENTITYSERVEREVENT_METHOD_3_6E4E4EA1CD2B3AAC_OFFSET UNITYSDK_OFFSET(0x190FC5C0)
#define RPG_GAMECORE_WAITENTITYSERVEREVENT_METHOD_3_7ADC3817CF8CFAE3_OFFSET UNITYSDK_OFFSET(0x190FC550)
#define RPG_GAMECORE_WAITENTITYSERVEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x190FC590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityServerEvent_TypeDefinitionIndex = 20995;

	class WaitEntityServerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYSERVEREVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ADC3817CF8CFAE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityServerEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityServerEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYSERVEREVENT_METHOD_3_7ADC3817CF8CFAE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E4E4EA1CD2B3AAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYSERVEREVENT_METHOD_3_6E4E4EA1CD2B3AAC_OFFSET))(a1, a2);
		}
	};
}
