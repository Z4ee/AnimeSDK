#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueTournBuffRow; }
namespace RPG::GameCore { class RogueTournBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C32D820)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_BUFFTYPENAME_OFFSET UNITYSDK_OFFSET(0x1C32DAB0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1C32DA60)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C32DA10)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESCPARAMSUPGRADED_OFFSET UNITYSDK_OFFSET(0x1C32DE10)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1C32DC70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESCUPGRADED_OFFSET UNITYSDK_OFFSET(0x1C32DD90)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C32DB30)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_EXTRAEFFECTIDSUPGRADED_OFFSET UNITYSDK_OFFSET(0x1C32DE70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1C32DCD0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1C32D9B0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C32DED0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_ISUPGRADABLE_OFFSET UNITYSDK_OFFSET(0x1C32DD30)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_LOCKEDDESC_OFFSET UNITYSDK_OFFSET(0x1C32DBB0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x1C32D8E0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C32D930)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C32DEE0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C32D890)
#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32D740)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookBuffDataItem_TypeDefinitionIndex = 67649;

	class RogueTournHandbookBuffDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournBuffRow* _TournBuffRowUpgraded; // 0x10
		::RPG::GameCore::RogueTournBuffTypeRow* _TournBuffTypeRow; // 0x18
		::RPG::GameCore::RogueTournBuffRow* _TournBuffRow; // 0x20
		::RPG::GameCore::MazeBuffRow* _MazeBuffRowUpgraded; // 0x28
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x30
		::System::Boolean _IsUnlocked_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::RogueTournBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournHandbookBuffDataItem* Create(::RPG::GameCore::RogueTournBuffRow* a1)
		{
			return ((::RPG::Client::RogueTournHandbookBuffDataItem*(*)(::RPG::GameCore::RogueTournBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_MAZEBUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_ICON_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffCategory get_Category()
		{
			return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::System::UInt32 get_BuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_BUFFTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_BUFFTYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_LockedDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_LOCKEDDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESCPARAMS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_ISUPGRADABLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescUpgraded()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESCUPGRADED_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamsUpgraded()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_DESCPARAMSUPGRADED_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDsUpgraded()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_EXTRAEFFECTIDSUPGRADED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}
