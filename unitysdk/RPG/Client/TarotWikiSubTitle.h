#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotWikiSubData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKISUBTITLE_GET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xC9EB4A0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB480)
#define RPG_CLIENT_TAROTWIKISUBTITLE_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB460)
#define RPG_CLIENT_TAROTWIKISUBTITLE_ISNEW_OFFSET UNITYSDK_OFFSET(0xC9EB940)
#define RPG_CLIENT_TAROTWIKISUBTITLE_MARKALLSEEN_OFFSET UNITYSDK_OFFSET(0xC9EBBB0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xC9EBB50)
#define RPG_CLIENT_TAROTWIKISUBTITLE_SET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xC9EB4B0)
#define RPG_CLIENT_TAROTWIKISUBTITLE_SET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB490)
#define RPG_CLIENT_TAROTWIKISUBTITLE_SET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB470)
#define RPG_CLIENT_TAROTWIKISUBTITLE_TRYAPPLYCHANGE_OFFSET UNITYSDK_OFFSET(0xC9EB7C0)
#define RPG_CLIENT_TAROTWIKISUBTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EB4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiSubTitle_TypeDefinitionIndex = 63696;

	class TarotWikiSubTitle : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiSubData*>* SubDataList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ChangeIDList; // 0x18
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x20
		::System::UInt32 _ApplyingChangeID_k__BackingField; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID _DescTextID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_GET_TITLETEXTID_OFFSET))(this);
		}

		::System::Void set_TitleTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_SET_TITLETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_GET_DESCTEXTID_OFFSET))(this);
		}

		::System::Void set_DescTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_SET_DESCTEXTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ApplyingChangeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_GET_APPLYINGCHANGEID_OFFSET))(this);
		}

		::System::Void set_ApplyingChangeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBTITLE_SET_APPLYINGCHANGEID_OFFSET))(this, a1);
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
