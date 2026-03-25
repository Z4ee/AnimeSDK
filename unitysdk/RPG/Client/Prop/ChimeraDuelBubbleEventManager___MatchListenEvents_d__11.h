#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_FC01049DA05831B0;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA0411E0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA041410)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0413A0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA041490)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA041400)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA0413B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0411C0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0xA040DB0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA0411D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventManager___MatchListenEvents_d__11_TypeDefinitionIndex = 63725;

	class ChimeraDuelBubbleEventManager___MatchListenEvents_d__11 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* __3__evt; // 0x10
		::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>* __3__listenEvents; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::Class_1_FC01049DA05831B0*> __7__wrap1; // 0x20
		::System::Collections::Generic::List_1<::Class_1_FC01049DA05831B0*>* listenEvents; // 0x38
		::Class_1_FC01049DA05831B0* __2__current; // 0x40
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* evt; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Int32 __l__initialThreadId; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11___M__FINALLY1_OFFSET))(this);
		}

		::Class_1_FC01049DA05831B0* System_Collections_Generic_IEnumerator_RPG_Client_Prop_ChimeraDuelBubbleListenEvent__get_Current()
		{
			return ((::Class_1_FC01049DA05831B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_1_FC01049DA05831B0*>* System_Collections_Generic_IEnumerable_RPG_Client_Prop_ChimeraDuelBubbleListenEvent__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_1_FC01049DA05831B0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PROP_CHIMERADUELBUBBLELISTENEVENT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER___MATCHLISTENEVENTS_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
