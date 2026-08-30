#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKISUBDATA_GET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xE17FE10)
#define RPG_CLIENT_TAROTWIKISUBDATA_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xE17FDF0)
#define RPG_CLIENT_TAROTWIKISUBDATA_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xE17FDD0)
#define RPG_CLIENT_TAROTWIKISUBDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xE180060)
#define RPG_CLIENT_TAROTWIKISUBDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xE180160)
#define RPG_CLIENT_TAROTWIKISUBDATA_SET_APPLYINGCHANGEID_OFFSET UNITYSDK_OFFSET(0xE17FE20)
#define RPG_CLIENT_TAROTWIKISUBDATA_SET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xE17FE00)
#define RPG_CLIENT_TAROTWIKISUBDATA_SET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xE17FDE0)
#define RPG_CLIENT_TAROTWIKISUBDATA_TRYAPPLYCHANGE_OFFSET UNITYSDK_OFFSET(0xE17FEE0)
#define RPG_CLIENT_TAROTWIKISUBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE17FE30)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiSubData_TypeDefinitionIndex = 68074;

	class TarotWikiSubData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ChangeIDList; // 0x10
		::System::UInt32 _ApplyingChangeID_k__BackingField; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID _DescTextID_k__BackingField; // 0x20
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x30

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
