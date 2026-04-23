#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefReportFromUIType.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefReportSourceType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_843;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLYTEAM_OFFSET UNITYSDK_OFFSET(0xB0AE210)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLY_OFFSET UNITYSDK_OFFSET(0xB0AB540)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFAVORITE_OFFSET UNITYSDK_OFFSET(0xB0ADED0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFILTER_OFFSET UNITYSDK_OFFSET(0xB0ACE10)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFLIKE_OFFSET UNITYSDK_OFFSET(0xB0ADB80)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEEXPORT_OFFSET UNITYSDK_OFFSET(0xB0AEB90)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEIMPORT_OFFSET UNITYSDK_OFFSET(0xB0AEA70)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xB0AC7F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB0AC330)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_TOREPORTHASHCODE_OFFSET UNITYSDK_OFFSET(0xB0AC590)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER__GETHASHER_OFFSET UNITYSDK_OFFSET(0xB0AECB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportHelper_TypeDefinitionIndex = 62219;

	class RogueTournBuildRefReportHelper : public ::System::Object
	{
	public:
		static ::System::Void ReportBuildRefApply(::RPG::Client::IRogueTournBuildRefDataItem* buildRefData, ::System::Guid applyBehaviorUID, ::System::Boolean isQuickApply, ::System::Boolean isApply, ::RPG::Client::RogueTournBuildRefReportFromUIType fromUIType)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Guid, ::System::Boolean, ::System::Boolean, ::RPG::Client::RogueTournBuildRefReportFromUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLY_OFFSET))(buildRefData, applyBehaviorUID, isQuickApply, isApply, fromUIType);
		}

		static ::System::Void ReportBuildRefShowDetail(::RPG::Client::IRogueTournBuildRefDataItem* buildRefData, ::RPG::Client::RogueTournBuildRefReportFromUIType fromUIType, ::System::UInt32 itemIndex)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueTournBuildRefReportFromUIType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHOWDETAIL_OFFSET))(buildRefData, fromUIType, itemIndex);
		}

		static ::System::Void ReportBuildRefFilter(::System::Guid filterBehaviorUID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* filterAvatarIDs, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* filterFormulaIDs, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournBuildRefDataItem*>* filteredBuildRefs)
		{
			return ((::System::Void(*)(::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournBuildRefDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFILTER_OFFSET))(filterBehaviorUID, filterAvatarIDs, filterFormulaIDs, filteredBuildRefs);
		}

		static ::System::Void ReportBuildRefLike(::RPG::Client::IRogueTournBuildRefDataItem* buildRefData, ::System::Boolean isLike)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFLIKE_OFFSET))(buildRefData, isLike);
		}

		static ::System::Void ReportBuildRefFavorite(::RPG::Client::IRogueTournBuildRefDataItem* buildRefData, ::System::Boolean isFavorite)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFAVORITE_OFFSET))(buildRefData, isFavorite);
		}

		static ::System::Void ReportBuildRefApplyTeam(::RPG::Client::IRogueTournBuildRefDataItem* buildRefData, ::RPG::Client::RogueTournBuildRefTeamData* teamData, ::System::Collections::Generic::List_1<::System::UInt32>* teamAvatarIDsAfter)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueTournBuildRefTeamData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLYTEAM_OFFSET))(buildRefData, teamData, teamAvatarIDsAfter);
		}

		static ::System::Void ReportBuildRefShareCodeImport(::System::String* shareCodeText, ::RPG::Client::IRogueTournBuildRefDataItem* buildRefData)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEIMPORT_OFFSET))(shareCodeText, buildRefData);
		}

		static ::System::Void ReportBuildRefShareCodeExport(::System::String* shareCodeText, ::RPG::Client::IRogueTournBuildRefDataItem* buildRefData)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEEXPORT_OFFSET))(shareCodeText, buildRefData);
		}

		static ::System::Int32 ToReportHashCode(::RPG::Client::IRogueTournBuildRefDataItem* buildRef)
		{
			return ((::System::Int32(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_TOREPORTHASHCODE_OFFSET))(buildRef);
		}

		static ::RPG::Client::RogueTournBuildRefReportSourceType ReportSourceType(::RPG::Client::IRogueTournBuildRefDataItem* buildRef)
		{
			return ((::RPG::Client::RogueTournBuildRefReportSourceType(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTSOURCETYPE_OFFSET))(buildRef);
		}

		static ::Class_0_16E4307DCC419505_843* _GetHasher()
		{
			return ((::Class_0_16E4307DCC419505_843*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER__GETHASHER_OFFSET))();
		}
	};
}
