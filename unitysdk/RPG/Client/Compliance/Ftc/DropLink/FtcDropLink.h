#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client::Compliance::Ftc::DropLink { class FtcDropLinkEntry; }
namespace RPG::Client::Compliance::Ftc::DropLink { class IFtcDropLinkEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xCBAE4F0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK_GET_ITEM__OFFSET UNITYSDK_OFFSET(0xCBAE4D0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK_GET_RESBARPAGEKEY_OFFSET UNITYSDK_OFFSET(0xCBAE4E0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCBAE4C0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAE360)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLink_TypeDefinitionIndex = 74814;

	class FtcDropLink : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkEntry*>* _EntriesReadOnly; // 0x10
		::RPG::Client::ItemData* _Item__k__BackingField; // 0x18
		::System::String* _ResBarPageKey_k__BackingField; // 0x20
		::Il2CppArray<::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkEntry*>* _Entries; // 0x28

		::System::Void _ctor(::RPG::Client::ItemData* a1, ::System::String* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkEntry*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::Client::ItemData* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkEntry*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Compliance::Ftc::DropLink::FtcDropLinkEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK__CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ItemData* get_Item_()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK_GET_ITEM__OFFSET))(this);
		}

		::System::String* get_ResBarPageKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK_GET_RESBARPAGEKEY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkEntry*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLinkEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINK_GET_ENTRIES_OFFSET))(this);
		}
	};
}
