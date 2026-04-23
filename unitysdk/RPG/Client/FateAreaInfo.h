#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_53AFE00DD1E71CE4;
namespace RPG::Client { class FateAreaDataItem; }
namespace RPG::Client { class FateDifficultyDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAREAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA32C400)
#define RPG_CLIENT_FATEAREAINFO_GETAREABYID_OFFSET UNITYSDK_OFFSET(0xA32CB70)
#define RPG_CLIENT_FATEAREAINFO_GETAREABYTYPE_OFFSET UNITYSDK_OFFSET(0xA32CC40)
#define RPG_CLIENT_FATEAREAINFO_GETDEFAULTDIFFTOSHOW_OFFSET UNITYSDK_OFFSET(0xA32D500)
#define RPG_CLIENT_FATEAREAINFO_GETDIFFITEM_OFFSET UNITYSDK_OFFSET(0xA32CE00)
#define RPG_CLIENT_FATEAREAINFO_GETDIFFUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xA32CFF0)
#define RPG_CLIENT_FATEAREAINFO_GETMAXDIFFPASSED_OFFSET UNITYSDK_OFFSET(0xA32D290)
#define RPG_CLIENT_FATEAREAINFO_GETMAXDIFFPOSSIBLE_OFFSET UNITYSDK_OFFSET(0xA32D3B0)
#define RPG_CLIENT_FATEAREAINFO_GETMAXDIFFSEEN_OFFSET UNITYSDK_OFFSET(0xA32D3F0)
#define RPG_CLIENT_FATEAREAINFO_GETPASSDIALOGDESC_OFFSET UNITYSDK_OFFSET(0xA32CF60)
#define RPG_CLIENT_FATEAREAINFO_GETPASSDIALOGTITLE_OFFSET UNITYSDK_OFFSET(0xA32CED0)
#define RPG_CLIENT_FATEAREAINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA32BFD0)
#define RPG_CLIENT_FATEAREAINFO_ISGUIDEAREAPASSED_OFFSET UNITYSDK_OFFSET(0xA32D080)
#define RPG_CLIENT_FATEAREAINFO_SETDEFAULTDIFFTOSHOW_OFFSET UNITYSDK_OFFSET(0xA32D560)
#define RPG_CLIENT_FATEAREAINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA32C520)
#define RPG_CLIENT_FATEAREAINFO_UPDATEMAXDIFFSEEN_OFFSET UNITYSDK_OFFSET(0xA32D450)
#define RPG_CLIENT_FATEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA32BFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAreaInfo_TypeDefinitionIndex = 58853;

	class FateAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PassedDiffs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _PassedAreaIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateAreaDataItem*>* _AreaDataItems; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateDifficultyDataItem*>* _DiffDataItems; // 0x28
		::System::UInt32 _MaxDiffPossible; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_53AFE00DD1E71CE4* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53AFE00DD1E71CE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::FateAreaDataItem* GetAreaByID(::System::UInt32 areaID)
		{
			return ((::RPG::Client::FateAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETAREABYID_OFFSET))(this, areaID);
		}

		::RPG::Client::FateAreaDataItem* GetAreaByType(::RPG::GameCore::FateAreaType areaType)
		{
			return ((::RPG::Client::FateAreaDataItem*(*)(::PVOID, ::RPG::GameCore::FateAreaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETAREABYTYPE_OFFSET))(this, areaType);
		}

		::RPG::Client::FateDifficultyDataItem* GetDiffItem(::System::UInt32 difficulty)
		{
			return ((::RPG::Client::FateDifficultyDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETDIFFITEM_OFFSET))(this, difficulty);
		}

		static ::RPG::Client::TextID GetPassDialogTitle(::System::UInt32 diffPassed)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETPASSDIALOGTITLE_OFFSET))(diffPassed);
		}

		static ::RPG::Client::TextID GetPassDialogDesc(::System::UInt32 diffPassed)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETPASSDIALOGDESC_OFFSET))(diffPassed);
		}

		static ::RPG::Client::TextID GetDiffUnlockHint(::System::UInt32 diffPassed)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETDIFFUNLOCKHINT_OFFSET))(diffPassed);
		}

		::System::Boolean IsGuideAreaPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_ISGUIDEAREAPASSED_OFFSET))(this);
		}

		::System::UInt32 GetMaxDiffPassed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETMAXDIFFPASSED_OFFSET))(this);
		}

		::System::UInt32 GetMaxDiffPossible()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETMAXDIFFPOSSIBLE_OFFSET))(this);
		}

		::System::UInt32 GetMaxDiffSeen()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETMAXDIFFSEEN_OFFSET))(this);
		}

		::System::Void UpdateMaxDiffSeen(::System::UInt32 diff)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_UPDATEMAXDIFFSEEN_OFFSET))(this, diff);
		}

		::System::UInt32 GetDefaultDiffToShow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_GETDEFAULTDIFFTOSHOW_OFFSET))(this);
		}

		::System::Void SetDefaultDiffToShow(::System::UInt32 diff)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREAINFO_SETDEFAULTDIFFTOSHOW_OFFSET))(this, diff);
		}
	};
}
