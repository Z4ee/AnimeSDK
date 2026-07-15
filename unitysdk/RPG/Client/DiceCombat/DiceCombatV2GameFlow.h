#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_43BD383C98B4C0C5_152;
class Class_1_B823313B2CC4BC8E;
class Class_1_D07F1588D6DC9E4B;
class Class_1_D94CA56F333E077E;
class Class_1_EC9AE4C13166BF65;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlowDataContainer; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x1A43D590)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0x1A43D5D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x1A43C7F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_DATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1A43F020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A43D760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x1A43D7B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x1A43C980)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43C8A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEGOTO_OFFSET UNITYSDK_OFFSET(0x1A43E5E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A43DE70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x1A43DA10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x1A43DA60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x1A43DAB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONGOTOEVENT_OFFSET UNITYSDK_OFFSET(0x1A43EFC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x1A43EF50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A43D410)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlow_TypeDefinitionIndex = 72267;

	class DiceCombatV2GameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::Class_1_D07F1588D6DC9E4B* _GameFlowUIManager; // 0x40
		::Class_1_EC9AE4C13166BF65* _Director; // 0x48
		::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* _DataContainer; // 0x50

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CREATE_OFFSET))(a1);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::System::Boolean CheckCanGoto(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_CHECKCANGOTO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, a1);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
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

		::System::Void _OnNetworkReconnected(::Class_1_43BD383C98B4C0C5_152* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_152*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, a1);
		}

		::System::Void _OnGotoEvent(::Class_1_D94CA56F333E077E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D94CA56F333E077E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__ONGOTOEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleGoTo(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW__HANDLEGOTO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer* get_DataContainer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2GameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW_GET_DATACONTAINER_OFFSET))(this);
		}
	};
}
