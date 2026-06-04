#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class BattleShowMessageManager_Message; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4177D0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB4178A0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB417940)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__DISPOSEMESSAGES_OFFSET UNITYSDK_OFFSET(0xB4172C0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ISIMAGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB417530)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_OFFSET UNITYSDK_OFFSET(0xB417450)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_WRAP_OFFSET UNITYSDK_OFFSET(0xB417730)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB417260)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONTICK_OFFSET UNITYSDK_OFFSET(0xB4170E0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__SHOWMESSAGEUI_OFFSET UNITYSDK_OFFSET(0xB4175A0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__TICKMESSAGES_OFFSET UNITYSDK_OFFSET(0xB417150)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB417A60)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB417AC0)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB417A00)
#define RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xB4179A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowMessageManager_TypeDefinitionIndex = 67148;

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

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleUIMessage(::RPG::Client::BattleShowMessageManager_Message* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean _IsImageMessage(::RPG::Client::BattleShowMessageManager_Message* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ISIMAGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _TickMessages(::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__TICKMESSAGES_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* _ShowMessageUI(::RPG::Client::BattleShowMessageManager_Message* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__SHOWMESSAGEUI_OFFSET))(this, a1);
		}

		::System::Void _DisposeMessages(::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedList_1<::RPG::Client::BattleShowMessageManager_Message*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__DISPOSEMESSAGES_OFFSET))(this, a1);
		}

		::System::Void _OnBattleUIMessage_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER__ONBATTLEUIMESSAGE_WRAP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWMESSAGEMANAGER___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
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
