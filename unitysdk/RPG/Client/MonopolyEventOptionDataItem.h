#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyOptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyEventOptionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GETNEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9D593F0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_DICESOREREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x9D59990)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_EFFECTCONTENTTEXT_OFFSET UNITYSDK_OFFSET(0x9D59C40)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_EFFECTCONTENT_OFFSET UNITYSDK_OFFSET(0x9D59CF0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D598D0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ISHIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x9D59EB0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_NEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9D59E90)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_OPTIONBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x9D59DC0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_OPTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x9D59A30)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TEXTDISPLAYPARAM1_OFFSET UNITYSDK_OFFSET(0x9D59B00)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TEXTDISPLAYPARAM2_OFFSET UNITYSDK_OFFSET(0x9D59BA0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9D598F0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9D59390)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_ISOPTIONGAINASSETTAX_OFFSET UNITYSDK_OFFSET(0x9D59680)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_ISOPTIONNEEDSELECTFRIEND_OFFSET UNITYSDK_OFFSET(0x9D59430)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x9D598E0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_NEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9D59EA0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D57500)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__INITNEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9D59120)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEventOptionDataItem_TypeDefinitionIndex = 53865;

	class MonopolyEventOptionDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* _NextOptionDataList_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__CTOR_OFFSET))(this, id);
		}

		::System::Void _InitNextOptionDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__INITNEXTOPTIONDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* GetNextOptionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GETNEXTOPTIONDATALIST_OFFSET))(this);
		}

		::System::Boolean IsOptionNeedSelectFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_ISOPTIONNEEDSELECTFRIEND_OFFSET))(this);
		}

		::System::Boolean IsOptionGainAssetTax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_ISOPTIONGAINASSETTAX_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyEventOptionRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyEventOptionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MonopolyOptionType get_Type()
		{
			return ((::RPG::GameCore::MonopolyOptionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_DiceSoreRequirement()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_DICESOREREQUIREMENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_OptionContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_OPTIONCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_TextDisplayParam1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TEXTDISPLAYPARAM1_OFFSET))(this);
		}

		::System::UInt32 get_TextDisplayParam2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TEXTDISPLAYPARAM2_OFFSET))(this);
		}

		::System::String* get_EffectContentText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_EFFECTCONTENTTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_EffectContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_EFFECTCONTENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_OptionBubbleTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_OPTIONBUBBLETALK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* get_NextOptionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_NEXTOPTIONDATALIST_OFFSET))(this);
		}

		::System::Void set_NextOptionDataList(::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_NEXTOPTIONDATALIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsHideEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ISHIDEEFFECT_OFFSET))(this);
		}
	};
}
