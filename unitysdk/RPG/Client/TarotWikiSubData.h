#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKISUBDATA_GET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xC9EB0B0)
#define RPG_CLIENT_TAROTWIKISUBDATA_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB090)
#define RPG_CLIENT_TAROTWIKISUBDATA_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB070)
#define RPG_CLIENT_TAROTWIKISUBDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xC9EB300)
#define RPG_CLIENT_TAROTWIKISUBDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xC9EB400)
#define RPG_CLIENT_TAROTWIKISUBDATA_SET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xC9EB0C0)
#define RPG_CLIENT_TAROTWIKISUBDATA_SET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB0A0)
#define RPG_CLIENT_TAROTWIKISUBDATA_SET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xC9EB080)
#define RPG_CLIENT_TAROTWIKISUBDATA_TRYAPPLYCHANGE_OFFSET UNITYSDK_OFFSET(0xC9EB180)
#define RPG_CLIENT_TAROTWIKISUBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EB0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiSubData_TypeDefinitionIndex = 63697;

	class TarotWikiSubData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ChangeIDList; // 0x10
		::RPG::Client::TextID _DescTextID_k__BackingField; // 0x18
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 _ApplyingChangeID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_GET_TITLETEXTID_OFFSET))(this);
		}

		::System::Void set_TitleTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_SET_TITLETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_GET_DESCTEXTID_OFFSET))(this);
		}

		::System::Void set_DescTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_SET_DESCTEXTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ApplyingChangeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_GET_APPLYINGCHANGEID_OFFSET))(this);
		}

		::System::Void set_ApplyingChangeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_SET_APPLYINGCHANGEID_OFFSET))(this, a1);
		}

		::System::Void TryApplyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_TRYAPPLYCHANGE_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_ISNEW_OFFSET))(this);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKISUBDATA_MARKSEEN_OFFSET))(this);
		}
	};
}
