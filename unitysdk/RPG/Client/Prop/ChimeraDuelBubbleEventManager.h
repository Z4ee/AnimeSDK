#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1198;
class Class_0_16E4307DCC419505_1199;
class Class_0_16E4307DCC419505_1200;
class Class_1_FC01049DA05831B0;
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC501810)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_POSTBUBBLEEVENT_OFFSET UNITYSDK_OFFSET(0xC501FD0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_REGISTERTALKDATA_OFFSET UNITYSDK_OFFSET(0xC5018D0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_SHOWCUSTOMTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xC5032B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_UNREGISTERTALKDATA_OFFSET UNITYSDK_OFFSET(0xC501D90)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC503840)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0xC502EC0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC503660)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTTYPEGETTER_OFFSET UNITYSDK_OFFSET(0xC5037A0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC502D10)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC5023C0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__MATCHLISTENEVENTS_OFFSET UNITYSDK_OFFSET(0xC5035A0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__SELECTTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xC502670)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventManager_TypeDefinitionIndex = 72792;

	class ChimeraDuelBubbleEventManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>** StaticGet__EventTalkData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x12A80);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1198*>** StaticGet__EventTypeGetterCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1198*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x12A88);
		}
		static ::Class_0_16E4307DCC419505_1199** StaticGet__EventMatcher()
		{
			return (::Class_0_16E4307DCC419505_1199**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x12A90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>** StaticGet__EventCommonTalkData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x12A98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1200*>** StaticGet__EventHandlerCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::Class_0_16E4307DCC419505_1200*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBubbleEventManager_TypeDefinitionIndex)->GetStaticField(0x12AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_DISPOSE_OFFSET))();
		}

		static ::System::Void RegisterTalkData(::RPG::GameCore::ChimeraDuelBubbleEventListener* a1, ::RPG::Client::ChimeraDuelTalkData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelBubbleEventListener*, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_REGISTERTALKDATA_OFFSET))(a1, a2);
		}

		static ::System::Void UnregisterTalkData(::RPG::GameCore::ChimeraDuelBubbleEventType a1, ::RPG::Client::ChimeraDuelTalkData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_UNREGISTERTALKDATA_OFFSET))(a1, a2);
		}

		static ::System::Void PostBubbleEvent(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_POSTBUBBLEEVENT_OFFSET))(a1);
		}

		static ::System::Void ShowCustomTalkBubble(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_SHOWCUSTOMTALKBUBBLE_OFFSET))(a1, a2, a3);
		}

		static ::Class_1_FC01049DA05831B0* _SelectTriggerEvent(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>* a2)
		{
			return ((::Class_1_FC01049DA05831B0*(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__SELECTTRIGGEREVENT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Class_1_FC01049DA05831B0*>* _MatchListenEvents(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_1_FC01049DA05831B0*>*(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__MATCHLISTENEVENTS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Prop::ChimeraDuelBubbleData* _CreateBubbleData(::RPG::Client::ChimeraDuelTalkData* a1, ::RPG::Client::Prop::ChimeraDuelBubbleEvent* a2)
		{
			return ((::RPG::Client::Prop::ChimeraDuelBubbleData*(*)(::RPG::Client::ChimeraDuelTalkData*, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEBUBBLEDATA_OFFSET))(a1, a2);
		}

		static ::Class_0_16E4307DCC419505_1200* _GetEventHandler(::RPG::GameCore::ChimeraDuelBubbleEventType a1)
		{
			return ((::Class_0_16E4307DCC419505_1200*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTHANDLER_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_1200* _CreateEventHandler(::RPG::GameCore::ChimeraDuelBubbleEventType a1)
		{
			return ((::Class_0_16E4307DCC419505_1200*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTHANDLER_OFFSET))(a1);
		}

		static ::RPG::GameCore::ChimeraDuelBubbleEventType _GetEventType(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTTYPE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_1198* _CreateEventTypeGetter(::RPG::GameCore::ChimeraDuelBubbleEventType a1)
		{
			return ((::Class_0_16E4307DCC419505_1198*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTTYPEGETTER_OFFSET))(a1);
		}
	};
}
