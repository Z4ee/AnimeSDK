#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_43BD383C98B4C0C5_133;
class Class_1_6D8D23B27B8ED78D;
class Class_1_B823313B2CC4BC8E;
class Class_1_D94CA56F333E077E;
class Class_1_EC9AE4C13166BF65;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlowDataContainer; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xA14F480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0xA14F4C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0xA14E960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_DATACONTAINER_OFFSET UNITYSDK_OFFSET(0xA150B60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA14F5C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0xA14F5D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0xA14EAF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA14EA10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEGOTO_OFFSET UNITYSDK_OFFSET(0xA1503C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xA14FBD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0xA14F7E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xA14F830)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0xA14F880)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONGOTOEVENT_OFFSET UNITYSDK_OFFSET(0xA150B00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0xA150A90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0xA14F330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xA150BD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0xA150C40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0xA150C50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0xA150B70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0xA150CF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xA150D60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET UNITYSDK_OFFSET(0xA150DD0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlow_TypeDefinitionIndex = 69942;

	class DiceCombatV2GameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::Class_1_EC9AE4C13166BF65* _Director; // 0x40
		::Class_1_6D8D23B27B8ED78D* _GameFlowUIManager; // 0x48
		::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* _DataContainer; // 0x50

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CREATE_OFFSET))(parameters);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::System::Boolean CheckCanGoto(::Class_1_B823313B2CC4BC8E* gotoParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANGOTO_OFFSET))(this, gotoParams);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, context);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_133* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_133*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, evt);
		}

		::System::Void _OnGotoEvent(::Class_1_D94CA56F333E077E* gotoGameFlowEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D94CA56F333E077E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONGOTOEVENT_OFFSET))(this, gotoGameFlowEvent);
		}

		::RPG::Client::Promises::IPromise* _HandleGoTo(::Class_1_B823313B2CC4BC8E* gotoParams)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEGOTO_OFFSET))(this, gotoParams);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* get_DataContainer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_DATACONTAINER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanGoto(::Class_1_B823313B2CC4BC8E* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_CHECKCANGOTO_OFFSET))(this, P0);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextAttached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___IFIXBASEPROXY__ONEXITED_OFFSET))(this);
		}
	};
}
