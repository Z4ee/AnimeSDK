#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyOptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyEventOptionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GETNEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC16B6E0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_DICESOREREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xC16BC70)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_EFFECTCONTENTTEXT_OFFSET UNITYSDK_OFFSET(0xC16BF30)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_EFFECTCONTENT_OFFSET UNITYSDK_OFFSET(0xC16BFE0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xC16BBB0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ISHIDEEFFECT_OFFSET UNITYSDK_OFFSET(0xC16C1C0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_NEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC16C1A0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_OPTIONBUBBLETALK_OFFSET UNITYSDK_OFFSET(0xC16C0C0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_OPTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xC16BD10)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TEXTDISPLAYPARAM1_OFFSET UNITYSDK_OFFSET(0xC16BDF0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TEXTDISPLAYPARAM2_OFFSET UNITYSDK_OFFSET(0xC16BE90)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC16BBD0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC16B680)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_ISOPTIONGAINASSETTAX_OFFSET UNITYSDK_OFFSET(0xC16B970)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_ISOPTIONNEEDSELECTFRIEND_OFFSET UNITYSDK_OFFSET(0xC16B720)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xC16BBC0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_NEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC16C1B0)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC169550)
#define RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__INITNEXTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC16B3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEventOptionDataItem_TypeDefinitionIndex = 61943;

	class MonopolyEventOptionDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* _NextOptionDataList_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM__CTOR_OFFSET))(this, a1);
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

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_ID_OFFSET))(this, a1);
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

		::System::Void set_NextOptionDataList(::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonopolyEventOptionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_SET_NEXTOPTIONDATALIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHideEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTOPTIONDATAITEM_GET_ISHIDEEFFECT_OFFSET))(this);
		}
	};
}
