#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_0B2B0A0A770F731E;
class Class_1_A3807EBD42CD3397;
class Class_1_B823313B2CC4BC8E;
class Class_1_D94CA56F333E077E;
class Class_1_F3F244B8F91CE2D0;
class Class_2_DEB09B6D92A9CA86;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlowDataContainer; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x1C40ABE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x1C409D30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_DATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1C40C960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_ISINPVE_OFFSET UNITYSDK_OFFSET(0x1C40C9A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C40C910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x1C40AC20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x1C409FC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C409E10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEGOTO_OFFSET UNITYSDK_OFFSET(0x1C40BEC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1C40B490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x1C40AE90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x1C40AF90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x1C40B000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONGOTOEVENT_OFFSET UNITYSDK_OFFSET(0x1C40C830)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C40AA60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlow_TypeDefinitionIndex = 75627;

	class DiceCombatGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* _DataContainer; // 0x40
		::RPG::Client::DiceCombat::DiceCombatBattleContext* BattleContext; // 0x48
		::Class_1_0B2B0A0A770F731E* _PVPInviteToastController; // 0x50
		::Class_1_F3F244B8F91CE2D0* _Director; // 0x58
		::Class_2_DEB09B6D92A9CA86* PVPMatchContext; // 0x60
		::Class_1_A3807EBD42CD3397* _GameFlowUIManager; // 0x68

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CREATE_OFFSET))(a1);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, a1);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		::System::Void _OnGotoEvent(::Class_1_D94CA56F333E077E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D94CA56F333E077E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__ONGOTOEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleGoTo(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW__HANDLEGOTO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* get_DataContainer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_DATACONTAINER_OFFSET))(this);
		}

		::System::Boolean get_IsInPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW_GET_ISINPVE_OFFSET))(this);
		}
	};
}
