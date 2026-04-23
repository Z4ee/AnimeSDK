#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1142;
class Class_0_16E4307DCC419505_1143;
class Class_0_16E4307DCC419505_1144;
class Class_1_FC01049DA05831B0;
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADBD650)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_POSTBUBBLEEVENT_OFFSET UNITYSDK_OFFSET(0xADBDDF0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_REGISTERTALKDATA_OFFSET UNITYSDK_OFFSET(0xADBD730)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_SHOWCUSTOMTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xADBEFF0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_UNREGISTERTALKDATA_OFFSET UNITYSDK_OFFSET(0xADBDBA0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xADBF550)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0xADBEC00)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xADBF370)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTTYPEGETTER_OFFSET UNITYSDK_OFFSET(0xADBF4B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xADBEA40)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xADBE200)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__MATCHLISTENEVENTS_OFFSET UNITYSDK_OFFSET(0xADBF2B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__SELECTTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xADBE4B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventManager_TypeDefinitionIndex = 71770;

	class ChimeraDuelBubbleEventManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1142*>** StaticGet__EventHandlerCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1142*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x6E40);
		}
		static ::Class_0_16E4307DCC419505_1143** StaticGet__EventMatcher()
		{
			return (::Class_0_16E4307DCC419505_1143**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x6E48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>** StaticGet__EventTalkData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x6E50);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>** StaticGet__EventCommonTalkData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x6E58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1144*>** StaticGet__EventTypeGetterCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1144*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x6E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_DISPOSE_OFFSET))();
		}

		static ::System::Void RegisterTalkData(::RPG::GameCore::ChimeraDuelBubbleEventListener* eventConfig, ::RPG::Client::ChimeraDuelTalkData* talkData)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelBubbleEventListener*, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_REGISTERTALKDATA_OFFSET))(eventConfig, talkData);
		}

		static ::System::Void UnregisterTalkData(::RPG::GameCore::ChimeraDuelBubbleEventType eventType, ::RPG::Client::ChimeraDuelTalkData* talkData)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_UNREGISTERTALKDATA_OFFSET))(eventType, talkData);
		}

		static ::System::Void PostBubbleEvent(::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_POSTBUBBLEEVENT_OFFSET))(evt);
		}

		static ::System::Void ShowCustomTalkBubble(::System::UInt32 customTalkID, ::System::Collections::Generic::List_1<::System::Int32>* targets, ::System::Collections::Generic::List_1<::System::UInt32>* targetIDs)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_SHOWCUSTOMTALKBUBBLE_OFFSET))(customTalkID, targets, targetIDs);
		}

		static ::Class_1_FC01049DA05831B0* _SelectTriggerEvent(::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>* listenEvents)
		{
			return ((::Class_1_FC01049DA05831B0*(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__SELECTTRIGGEREVENT_OFFSET))(evt, listenEvents);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Class_1_FC01049DA05831B0*>* _MatchListenEvents(::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>* listenEvents)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_1_FC01049DA05831B0*>*(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__MATCHLISTENEVENTS_OFFSET))(evt, listenEvents);
		}

		static ::RPG::Client::Prop::ChimeraDuelBubbleData* _CreateBubbleData(::RPG::Client::ChimeraDuelTalkData* talkData, ::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt)
		{
			return ((::RPG::Client::Prop::ChimeraDuelBubbleData*(*)(::RPG::Client::ChimeraDuelTalkData*, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEBUBBLEDATA_OFFSET))(talkData, evt);
		}

		static ::Class_0_16E4307DCC419505_1142* _GetEventHandler(::RPG::GameCore::ChimeraDuelBubbleEventType eventType)
		{
			return ((::Class_0_16E4307DCC419505_1142*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTHANDLER_OFFSET))(eventType);
		}

		static ::Class_0_16E4307DCC419505_1142* _CreateEventHandler(::RPG::GameCore::ChimeraDuelBubbleEventType eventType)
		{
			return ((::Class_0_16E4307DCC419505_1142*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTHANDLER_OFFSET))(eventType);
		}

		static ::RPG::GameCore::ChimeraDuelBubbleEventType _GetEventType(::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTTYPE_OFFSET))(evt);
		}

		static ::Class_0_16E4307DCC419505_1144* _CreateEventTypeGetter(::RPG::GameCore::ChimeraDuelBubbleEventType eventType)
		{
			return ((::Class_0_16E4307DCC419505_1144*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTTYPEGETTER_OFFSET))(eventType);
		}
	};
}
