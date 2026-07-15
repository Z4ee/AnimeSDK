#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_2F6AC431AAB2D4A6.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_GAMECORE_EVENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFC15580)
#define RPG_GAMECORE_EVENTMANAGER_FIREEVENT_OFFSET UNITYSDK_OFFSET(0xFBEF340)
#define RPG_GAMECORE_EVENTMANAGER_GETEXECUTELIST_OFFSET UNITYSDK_OFFSET(0xFC157A0)
#define RPG_GAMECORE_EVENTMANAGER_REGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xFC08FA0)
#define RPG_GAMECORE_EVENTMANAGER_RELEASEEXECUTELIST_OFFSET UNITYSDK_OFFSET(0xFC15830)
#define RPG_GAMECORE_EVENTMANAGER_UNREGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xFC09140)
#define RPG_GAMECORE_EVENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xFC158B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventManager_TypeDefinitionIndex = 54148;

	class EventManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*>* _ExecuteListPool; // 0x10
		::System::Collections::Generic::Dictionary_2<::Struct_2_2F6AC431AAB2D4A6, ::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*>* _EntityEventHandleMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void FireEvent(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_FIREEVENT_OFFSET))(this, a1);
		}

		::System::Void RegisterEventListener(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_REGISTEREVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnRegisterEventListener(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_UNREGISTEREVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>* GetExecuteList()
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_GETEXECUTELIST_OFFSET))(this);
		}

		::System::Void ReleaseExecuteList(::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::RPG::GameCore::OnEventCallBack*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMANAGER_RELEASEEXECUTELIST_OFFSET))(this, a1);
		}
	};
}
