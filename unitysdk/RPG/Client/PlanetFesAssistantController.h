#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesAssistantController_State.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A794720E3EA5DFF0;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3F7A50)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_GETGLOBALCOOLDOWNSENDTIME_OFFSET UNITYSDK_OFFSET(0xC3F7AD0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC3F7570)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC3F7B20)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC3F7B90)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F84A0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__HIDEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC3F81B0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__INITMESSAGES_OFFSET UNITYSDK_OFFSET(0xC3F7680)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__ONPLANETFESASSISTANTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC3F83A0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__SHOWMESSAGE_OFFSET UNITYSDK_OFFSET(0xC3F8260)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TICKALLMESSAGES_OFFSET UNITYSDK_OFFSET(0xC3F7D40)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TICKHIDE_OFFSET UNITYSDK_OFFSET(0xC3F8140)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TICKSHOWING_OFFSET UNITYSDK_OFFSET(0xC3F80C0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TRYSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC3F7E70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAssistantController_TypeDefinitionIndex = 62152;

	class PlanetFesAssistantController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _FADE_IN_ANIM; // 0x0
		// static const ::System::String* _FADE_OUT_ANIM; // 0x0
		::System::Single Duration; // 0x18
		::System::Single Interval; // 0x1C
		::RPG::Client::PlanetFesAssistantController_State _State; // 0x20
		::RPG::Client::LocalizedText* _Text; // 0x28
		::RPG::Client::TextID _CurrTextID; // 0x30
		::UnityEngine::Animation* _Animation; // 0x40
		::RPG::Client::UIController* _Controller; // 0x48
		::System::Boolean _Initilized; // 0x50
		::System::Single _GlobalCoolDownSendTime; // 0x54
		::System::Collections::Generic::List_1<::Class_1_A794720E3EA5DFF0*>* _Messages; // 0x58
		::System::Single _Elapsed; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Single GetGlobalCoolDownSendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_GETGLOBALCOOLDOWNSENDTIME_OFFSET))(this);
		}

		::System::Void _InitMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__INITMESSAGES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void _TickAllMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TICKALLMESSAGES_OFFSET))(this);
		}

		::System::Void _TickShowing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TICKSHOWING_OFFSET))(this);
		}

		::System::Void _TickHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TICKHIDE_OFFSET))(this);
		}

		::System::Void _TrySendMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__TRYSENDMESSAGE_OFFSET))(this);
		}

		::System::Void _ShowMessage(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__SHOWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _HideMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__HIDEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnPlanetFesAssistantMessage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER__ONPLANETFESASSISTANTMESSAGE_OFFSET))(this, a1);
		}
	};
}
