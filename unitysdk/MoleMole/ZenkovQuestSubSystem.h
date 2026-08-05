#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_26.h"
#include "unitysdk/Enum_3_B5A00F1EAD6A5337.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/ZenkovQuestSubSystem_PendingSetEvacuationData.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_920D00A4D2C57DD8_12;
namespace MoleMole::Config { class ZenkovEvacuationSystemTrait; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_FLUSHPENDINGEVACUATIONTIPS_OFFSET UNITYSDK_OFFSET(0x141134C0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_GETEVACUATIONTIPSID_OFFSET UNITYSDK_OFFSET(0x14113650)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_HANDLESETEVACUATIONDATA_OFFSET UNITYSDK_OFFSET(0x14111840)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYEVACUATIONCANCELONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x141130B0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYSETEVACUATIONDATA_OFFSET UNITYSDK_OFFSET(0x14112110)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141114A0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14111DC0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEARNINGSREACHEDMINEXFIL_OFFSET UNITYSDK_OFFSET(0x14111F90)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x14112430)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x141123A0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14112EE0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_PROCESSEVACUATIONTIPS_OFFSET UNITYSDK_OFFSET(0x141124F0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14112A50)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SENDEVACUATIONCANCELEVENT_OFFSET UNITYSDK_OFFSET(0x14112220)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SHOWEVACUATIONCOUNTDOWNTIPS_OFFSET UNITYSDK_OFFSET(0x14113700)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14112D00)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x141138D0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14113850)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14113940)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x141139D0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14113A60)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14113AF0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14113B80)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovQuestSubSystem_TypeDefinitionIndex = 54625;

	class ZenkovQuestSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ZenkovQuestSubSystem*>
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::ZenkovQuestSubSystem_PendingSetEvacuationData>** StaticGet_s_pendingBeforeSubsystem()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::ZenkovQuestSubSystem_PendingSetEvacuationData>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem_TypeDefinitionIndex)->GetStaticField(0x4AFE0);
		}
		::System::Collections::Generic::List_1<::Class_3_920D00A4D2C57DD8_12*>* _pendingEvacuationTips; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEarningsReachedMinExfil(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEARNINGSREACHEDMINEXFIL_OFFSET))(this, args);
		}

		static ::System::Void NotifySetEvacuationData(::Class_3_920D00A4D2C57DD8_12* evacuationData, ::System::Boolean isUpdate)
		{
			return ((::System::Void(*)(::Class_3_920D00A4D2C57DD8_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYSETEVACUATIONDATA_OFFSET))(evacuationData, isUpdate);
		}

		::System::Void HandleSetEvacuationData(::Class_3_920D00A4D2C57DD8_12* evacuationData, ::System::Boolean isUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_HANDLESETEVACUATIONDATA_OFFSET))(this, evacuationData, isUpdate);
		}

		::System::Void OnEvacuationDataUpdated(::Class_3_920D00A4D2C57DD8_12* evacuationData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_12*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONDATAUPDATED_OFFSET))(this, evacuationData);
		}

		::System::Void OnEvacuationStateChange(::Class_3_920D00A4D2C57DD8_12* state)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_12*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONSTATECHANGE_OFFSET))(this, state);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void NotifyEvacuationCancelOnEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYEVACUATIONCANCELONENTERBATTLE_OFFSET))(this);
		}

		::System::Void SendEvacuationCancelEvent(::Class_3_920D00A4D2C57DD8_12* evacuationData, ::Enum_3_B5A00F1EAD6A5337 cancelType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_12*, ::Enum_3_B5A00F1EAD6A5337))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SENDEVACUATIONCANCELEVENT_OFFSET))(this, evacuationData, cancelType);
		}

		::System::Void FlushPendingEvacuationTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_FLUSHPENDINGEVACUATIONTIPS_OFFSET))(this);
		}

		::System::Void ProcessEvacuationTips(::Class_3_920D00A4D2C57DD8_12* evacuationData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_12*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_PROCESSEVACUATIONTIPS_OFFSET))(this, evacuationData);
		}

		static ::System::Int32 GetEvacuationTipsId(::MoleMole::Config::ZenkovEvacuationSystemTrait* trait, ::Enum_3_4608E37A1B3D374A_26 state)
		{
			return ((::System::Int32(*)(::MoleMole::Config::ZenkovEvacuationSystemTrait*, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_GETEVACUATIONTIPSID_OFFSET))(trait, state);
		}

		::System::Void ShowEvacuationCountdownTips(::System::Int32 tipsId, ::System::String* showName, ::Class_3_920D00A4D2C57DD8_12* evacuationData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_3_920D00A4D2C57DD8_12*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SHOWEVACUATIONCOUNTDOWNTIPS_OFFSET))(this, tipsId, showName, evacuationData);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
