#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChatBubbleRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATBUBBLEDATA_ADDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9F794C0)
#define RPG_CLIENT_CHATBUBBLEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F79720)
#define RPG_CLIENT_CHATBUBBLEDATA_GETDISPLAYCHATBUBBLES_OFFSET UNITYSDK_OFFSET(0x9F797B0)
#define RPG_CLIENT_CHATBUBBLEDATA_GET_CURRENTBUBBLEID_OFFSET UNITYSDK_OFFSET(0x9F79B60)
#define RPG_CLIENT_CHATBUBBLEDATA_GET_UNLOCKEDBUBBLEIDS_OFFSET UNITYSDK_OFFSET(0x9F79B40)
#define RPG_CLIENT_CHATBUBBLEDATA_SET_CURRENTBUBBLEID_OFFSET UNITYSDK_OFFSET(0x9F79B70)
#define RPG_CLIENT_CHATBUBBLEDATA_SET_UNLOCKEDBUBBLEIDS_OFFSET UNITYSDK_OFFSET(0x9F79B50)
#define RPG_CLIENT_CHATBUBBLEDATA_SYNCCURRENT_OFFSET UNITYSDK_OFFSET(0x9F79690)
#define RPG_CLIENT_CHATBUBBLEDATA_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9F790F0)
#define RPG_CLIENT_CHATBUBBLEDATA__CANDISPLAY_OFFSET UNITYSDK_OFFSET(0x9F79AC0)
#define RPG_CLIENT_CHATBUBBLEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F79C00)
#define RPG_CLIENT_CHATBUBBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F79B80)
#define RPG_CLIENT_CHATBUBBLEDATA__NOTIFYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9F79610)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatBubbleData_TypeDefinitionIndex = 61201;

	class ChatBubbleData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_DefaultBubbleID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChatBubbleData_TypeDefinitionIndex)->GetStaticField(0x43A0);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedBubbleIDs_k__BackingField; // 0x10
		::System::UInt32 _CurrentBubbleID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA__CCTOR_OFFSET))();
		}

		::System::Void SyncUnlocked(::System::Collections::Generic::IList_1<::System::UInt32>* unlockedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SYNCUNLOCKED_OFFSET))(this, unlockedIDs);
		}

		::System::Void AddUnlocked(::System::UInt32 unlockedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_ADDUNLOCKED_OFFSET))(this, unlockedID);
		}

		::System::Void SyncCurrent(::System::UInt32 currentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SYNCCURRENT_OFFSET))(this, currentID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayChatBubbles()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_GETDISPLAYCHATBUBBLES_OFFSET))(this);
		}

		::System::Void _NotifyTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA__NOTIFYTUTORIAL_OFFSET))(this);
		}

		::System::Boolean _CanDisplay(::RPG::GameCore::ChatBubbleRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChatBubbleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA__CANDISPLAY_OFFSET))(this, row);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedBubbleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_GET_UNLOCKEDBUBBLEIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedBubbleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SET_UNLOCKEDBUBBLEIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentBubbleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_GET_CURRENTBUBBLEID_OFFSET))(this);
		}

		::System::Void set_CurrentBubbleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SET_CURRENTBUBBLEID_OFFSET))(this, value);
		}
	};
}
