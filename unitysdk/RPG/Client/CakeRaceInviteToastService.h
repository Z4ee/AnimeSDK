#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

class Class_1_791CB467786D8BD6;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0x9245180)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_ISFORCEVALID_OFFSET UNITYSDK_OFFSET(0x9245160)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x92450E0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__DISABLED_OFFSET UNITYSDK_OFFSET(0x9245220)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9244CD0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISRUNNING_OFFSET UNITYSDK_OFFSET(0x9245230)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISSHOWING_OFFSET UNITYSDK_OFFSET(0x92450D0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETCANSHOW_OFFSET UNITYSDK_OFFSET(0x9244550)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x9244AD0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETRUNNING_OFFSET UNITYSDK_OFFSET(0x9244920)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET_ISFORCEVALID_OFFSET UNITYSDK_OFFSET(0x9245170)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__DISABLED_OFFSET UNITYSDK_OFFSET(0x9244B40)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__ISRUNNING_OFFSET UNITYSDK_OFFSET(0x9245240)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9244160)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__INIT_OFFSET UNITYSDK_OFFSET(0x9244320)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ISVALIDINVITATION_OFFSET UNITYSDK_OFFSET(0x9244D30)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9244F50)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET UNITYSDK_OFFSET(0x9244B90)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x9244EC0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__TRYPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x9244600)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET UNITYSDK_OFFSET(0x92448C0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE___TRYPLAYNEXT_B__8_0_OFFSET UNITYSDK_OFFSET(0x9245250)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceInviteToastService_TypeDefinitionIndex = 51163;

	class CakeRaceInviteToastService : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsForceValid_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CakeRaceInviteToastService_TypeDefinitionIndex)->GetStaticField(0x11990);
		}
		::System::Collections::Generic::HashSet_1<::System::String*>* _AutomaticallySetCanShowOnFocus; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceUIType>* _AutomaticallySetCanShowOnFocusTypes; // 0x18
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* _PendingInvitations; // 0x20
		::RPG::Client::LuaUIController* _CurrentDialog; // 0x28
		::System::Boolean __IsRunning_k__BackingField; // 0x30
		::System::Boolean _CanShow; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void SetCanShow(::System::Boolean canShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETCANSHOW_OFFSET))(this, canShow);
		}

		::System::Void SetRunning(::System::Boolean isRunning)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETRUNNING_OFFSET))(this, isRunning);
		}

		::System::Void SetDisabled(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETDISABLED_OFFSET))(this, disabled);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__INIT_OFFSET))(this);
		}

		::System::Void _OnReceiveContact(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET))(this, param);
		}

		::System::Void _OnToastDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _OnFocusChanged(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET))(this, _);
		}

		::System::Void _TryPlayNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__TRYPLAYNEXT_OFFSET))(this);
		}

		::System::Void _TryStopCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET))(this);
		}

		static ::System::Boolean get_IsForceValid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_ISFORCEVALID_OFFSET))();
		}

		static ::System::Void set_IsForceValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET_ISFORCEVALID_OFFSET))(value);
		}

		static ::System::Boolean _IsValidInvitation(::RPG::Client::ChatMessageData* messageData)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ISVALIDINVITATION_OFFSET))(messageData);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_GAMEFLOW_OFFSET))(this);
		}

		::Class_1_791CB467786D8BD6* get_UIManager()
		{
			return ((::Class_1_791CB467786D8BD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_UIMANAGER_OFFSET))(this);
		}

		::System::Boolean get__IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get__IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISRUNNING_OFFSET))(this);
		}

		::System::Void set__IsRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__ISRUNNING_OFFSET))(this, value);
		}

		::System::Boolean get__IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISSHOWING_OFFSET))(this);
		}

		::System::Boolean get__Disabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__DISABLED_OFFSET))(this);
		}

		::System::Void set__Disabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__DISABLED_OFFSET))(this, value);
		}

		::System::Void __TryPlayNext_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE___TRYPLAYNEXT_B__8_0_OFFSET))(this);
		}
	};
}
