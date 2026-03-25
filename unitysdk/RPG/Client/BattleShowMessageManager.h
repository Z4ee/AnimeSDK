#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class BattleShowMessageManager_Message; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x91D52A0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x91D5340)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x91D53C0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__DISPOSEMESSAGES_OFFSET UNITYSDK_OFFSET(0x91D4CC0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ISIMAGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D4FC0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D4EE0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_WRAP_OFFSET UNITYSDK_OFFSET(0x91D5200)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x91D4C60)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONTICK_OFFSET UNITYSDK_OFFSET(0x91D4AE0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__SHOWMESSAGEUI_OFFSET UNITYSDK_OFFSET(0x91D5030)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__TICKMESSAGES_OFFSET UNITYSDK_OFFSET(0x91D4B50)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x91D54F0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x91D5550)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x91D5490)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x91D5420)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowMessageManager_TypeDefinitionIndex = 58842;

	class BattleShowMessageManager : public ::Class_1_CA217ABF4E3B4F3F
	{
	public:
		// static const ::System::String* _LUA_TEXT_MESSAGE_DIALOG; // 0x0
		// static const ::System::String* _LUA_IMAGE_MESSAGE_DIALOG; // 0x0
		::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>* _ImageMessages; // 0x60
		::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>* _TextMessages; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleUIMessage(::RPG::Client::BattleShowMessageManager_Message* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_OFFSET))(this, msg);
		}

		::System::Boolean _IsImageMessage(::RPG::Client::BattleShowMessageManager_Message* msg)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ISIMAGEMESSAGE_OFFSET))(this, msg);
		}

		::System::Void _TickMessages(::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>* messages)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__TICKMESSAGES_OFFSET))(this, messages);
		}

		::RPG::Client::UIController* _ShowMessageUI(::RPG::Client::BattleShowMessageManager_Message* msg)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__SHOWMESSAGEUI_OFFSET))(this, msg);
		}

		::System::Void _DisposeMessages(::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>* messages)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__DISPOSEMESSAGES_OFFSET))(this, messages);
		}

		::System::Void _OnBattleUIMessage_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_WRAP_OFFSET))(this, arg);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
		}
	};
}
