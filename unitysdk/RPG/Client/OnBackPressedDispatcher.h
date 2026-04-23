#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnBackPressedCallback; }
namespace RPG::Client { class OnBackPressedDispatcher_CallbackEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CLEAR_OFFSET UNITYSDK_OFFSET(0xABE7B90)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_DISPATCHONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xABE7A10)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xABE76A0)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xABE78A0)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER__ADDENTRY_OFFSET UNITYSDK_OFFSET(0xABE77D0)
#define RPG_CLIENT_ONBACKPRESSEDDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xABE7C00)

namespace RPG::Client
{
	inline static constexpr unsigned int OnBackPressedDispatcher_TypeDefinitionIndex = 65758;

	class OnBackPressedDispatcher : public ::System::Object
	{
	public:
		// static const ::System::Int32 PRIORITY_DEFAULT = 0x0; // 0x0
		// static const ::System::Int32 PRIORITY_BACK_ZONE = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 PRIORITY_CONTROLLER_EXIT = 0xFFFFFFFE; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::OnBackPressedDispatcher_CallbackEntry*>* _CallbackEntries; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterCallback(::System::Int32 priority, ::RPG::Client::OnBackPressedCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::OnBackPressedCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_REGISTERCALLBACK_OFFSET))(this, priority, callback);
		}

		::System::Void UnregisterCallback(::RPG::Client::OnBackPressedCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnBackPressedCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_UNREGISTERCALLBACK_OFFSET))(this, callback);
		}

		::System::Void DispatchOnBackPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_DISPATCHONBACKPRESSED_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER_CLEAR_OFFSET))(this);
		}

		::System::Void _AddEntry(::RPG::Client::OnBackPressedDispatcher_CallbackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnBackPressedDispatcher_CallbackEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONBACKPRESSEDDISPATCHER__ADDENTRY_OFFSET))(this, entry);
		}
	};
}
