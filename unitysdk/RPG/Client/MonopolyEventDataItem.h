#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyEventOptionDataItem; }
namespace RPG::GameCore { class MonopolyEventConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GETOPTIONDATAITEM_OFFSET UNITYSDK_OFFSET(0x1C2A2C30)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1C2A2DF0)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1C2A3020)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_DICENUM_OFFSET UNITYSDK_OFFSET(0x1C2A2EA0)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C2A2D30)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISDATAREPORT_OFFSET UNITYSDK_OFFSET(0x1C2A31B0)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISEVENTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C2A3330)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1C2A3260)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISTRIGGERCOUNTED_OFFSET UNITYSDK_OFFSET(0x1C2A3350)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_OPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1C2A3310)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_PICTUREPATH_OFFSET UNITYSDK_OFFSET(0x1C2A3100)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C2A2F40)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2A2D50)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C2A2B70)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_SETEVENTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C2A2BE0)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C2A2D40)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_SET_ISEVENTTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C2A3340)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM_SET_OPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1C2A3320)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A2940)
#define RPG_CLIENT_MONOPOLYEVENTDATAITEM__INITOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C2A2950)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEventDataItem_TypeDefinitionIndex = 66289;

	class MonopolyEventDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* _OptionList_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Boolean _IsEventTriggered_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM__INITOPTIONS_OFFSET))(this);
		}

		::System::Void SetEventTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_SETEVENTTRIGGERED_OFFSET))(this);
		}

		::RPG::Client::MonopolyEventOptionDataItem* GetOptionDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonopolyEventOptionDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GETOPTIONDATAITEM_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyEventConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyEventType get_Type()
		{
			return ((::RPG::GameCore::MonopolyEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_CANSKIP_OFFSET))(this);
		}

		::System::UInt32 get_DiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_DICENUM_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_CONTENT_OFFSET))(this);
		}

		::System::String* get_PicturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_PICTUREPATH_OFFSET))(this);
		}

		::System::Boolean get_IsDataReport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISDATAREPORT_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* get_OptionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_OPTIONLIST_OFFSET))(this);
		}

		::System::Void set_OptionList(::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_SET_OPTIONLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEventTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISEVENTTRIGGERED_OFFSET))(this);
		}

		::System::Void set_IsEventTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_SET_ISEVENTTRIGGERED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTriggerCounted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTDATAITEM_GET_ISTRIGGERCOUNTED_OFFSET))(this);
		}
	};
}
