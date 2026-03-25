#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotWikiSubData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKISUBTITLE_GET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xA55F810)
#define RPG_CLIENT_TAROTWIKISUBTITLE_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xA55F7F0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xA55F7D0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_ISNEW_OFFSET UNITYSDK_OFFSET(0xA55FC80)
#define RPG_CLIENT_TAROTWIKISUBTITLE_MARKALLSEEN_OFFSET UNITYSDK_OFFSET(0xA55FF40)
#define RPG_CLIENT_TAROTWIKISUBTITLE_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xA55FEE0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_SET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xA55F820)
#define RPG_CLIENT_TAROTWIKISUBTITLE_SET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xA55F800)
#define RPG_CLIENT_TAROTWIKISUBTITLE_SET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xA55F7E0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_TRYAPPLYCHANGE_OFFSET UNITYSDK_OFFSET(0xA55FAD0)
#define RPG_CLIENT_TAROTWIKISUBTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA55F830)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiSubTitle_TypeDefinitionIndex = 55569;

	class TarotWikiSubTitle : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ChangeIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiSubData*>* SubDataList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 _ApplyingChangeID_k__BackingField; // 0x24
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x28
		::RPG::Client::TextID _DescTextID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 subTitleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE__CTOR_OFFSET))(this, subTitleID);
		}

		::RPG::Client::TextID get_TitleTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_GET_TITLETEXTID_OFFSET))(this);
		}

		::System::Void set_TitleTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_SET_TITLETEXTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_GET_DESCTEXTID_OFFSET))(this);
		}

		::System::Void set_DescTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_SET_DESCTEXTID_OFFSET))(this, value);
		}

		::System::UInt32 get_ApplyingChangeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_GET_APPLYINGCHANGEID_OFFSET))(this);
		}

		::System::Void set_ApplyingChangeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_SET_APPLYINGCHANGEID_OFFSET))(this, value);
		}

		::System::Void TryApplyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_TRYAPPLYCHANGE_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_ISNEW_OFFSET))(this);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_MARKSEEN_OFFSET))(this);
		}

		::System::Void MarkAllSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_MARKALLSEEN_OFFSET))(this);
		}
	};
}
