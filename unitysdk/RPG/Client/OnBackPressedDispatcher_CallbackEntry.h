#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnBackPressedCallback; }

#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xABE7C40)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xABE7C60)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xABE7C50)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xABE7C70)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xABE77C0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnBackPressedDispatcher_CallbackEntry_TypeDefinitionIndex = 65759;

	class OnBackPressedDispatcher_CallbackEntry : public ::System::Object
	{
	public:
		::RPG::Client::OnBackPressedCallback* _Callback_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY__CTOR_OFFSET))(this);
		}

		::RPG::Client::OnBackPressedCallback* get_Callback()
		{
			return ((::RPG::Client::OnBackPressedCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_Callback(::RPG::Client::OnBackPressedCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnBackPressedCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_SET_CALLBACK_OFFSET))(this, value);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CALLBACKENTRY_SET_PRIORITY_OFFSET))(this, value);
		}
	};
}
