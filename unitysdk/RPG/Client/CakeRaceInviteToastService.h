#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

class Class_1_7E879E2723D836B1;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xC9D1660)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_ISFORCEVALID_OFFSET UNITYSDK_OFFSET(0xC9D1640)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0xC9D1560)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__DISABLED_OFFSET UNITYSDK_OFFSET(0xC9D1710)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC9D1250)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISRUNNING_OFFSET UNITYSDK_OFFSET(0xC9D1750)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISSHOWING_OFFSET UNITYSDK_OFFSET(0xC9D1510)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETCANSHOW_OFFSET UNITYSDK_OFFSET(0xC9D0D60)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETDISABLED_OFFSET UNITYSDK_OFFSET(0xC9D10A0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETRUNNING_OFFSET UNITYSDK_OFFSET(0xC9A8730)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET_ISFORCEVALID_OFFSET UNITYSDK_OFFSET(0xC9D1650)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__DISABLED_OFFSET UNITYSDK_OFFSET(0xC9D1110)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__ISRUNNING_OFFSET UNITYSDK_OFFSET(0xC9D1760)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D06D0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__INIT_OFFSET UNITYSDK_OFFSET(0xC9D0B20)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ISVALIDINVITATION_OFFSET UNITYSDK_OFFSET(0xC9D12D0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xC9D1440)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET UNITYSDK_OFFSET(0xC9D1160)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0xC9D13E0)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__TRYPLAYNEXT_OFFSET UNITYSDK_OFFSET(0xC9D0E10)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET UNITYSDK_OFFSET(0xC9D1040)
#define RPG_CLIENT_CAKERACEINVITETOASTSERVICE___TRYPLAYNEXT_B__8_0_OFFSET UNITYSDK_OFFSET(0xC9D1770)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceInviteToastService_TypeDefinitionIndex = 63118;

	class CakeRaceInviteToastService : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsForceValid_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CakeRaceInviteToastService_TypeDefinitionIndex)->GetStaticField(0x9520);
		}
		::RPG::Client::LuaUIController* _CurrentDialog; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* _PendingInvitations; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* _AutomaticallySetCanShowOnFocus; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CakeRace::CakeRaceUIType>* _AutomaticallySetCanShowOnFocusTypes; // 0x28
		::System::Boolean _CanShow; // 0x30
		::System::Boolean __IsRunning_k__BackingField; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void SetCanShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETCANSHOW_OFFSET))(this, a1);
		}

		::System::Void SetRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETRUNNING_OFFSET))(this, a1);
		}

		::System::Void SetDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SETDISABLED_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__INIT_OFFSET))(this);
		}

		::System::Void _OnReceiveContact(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET))(this, a1);
		}

		::System::Void _OnToastDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _OnFocusChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET))(this, a1);
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

		static ::System::Void set_IsForceValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET_ISFORCEVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsValidInvitation(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE__ISVALIDINVITATION_OFFSET))(a1);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_GAMEFLOW_OFFSET))(this);
		}

		::Class_1_7E879E2723D836B1* get_UIManager()
		{
			return ((::Class_1_7E879E2723D836B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET_UIMANAGER_OFFSET))(this);
		}

		::System::Boolean get__IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get__IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISRUNNING_OFFSET))(this);
		}

		::System::Void set__IsRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__ISRUNNING_OFFSET))(this, a1);
		}

		::System::Boolean get__IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__ISSHOWING_OFFSET))(this);
		}

		::System::Boolean get__Disabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_GET__DISABLED_OFFSET))(this);
		}

		::System::Void set__Disabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE_SET__DISABLED_OFFSET))(this, a1);
		}

		::System::Void __TryPlayNext_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEINVITETOASTSERVICE___TRYPLAYNEXT_B__8_0_OFFSET))(this);
		}
	};
}
