#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefReportFromUIType.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefReportSourceType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_983;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLYTEAM_OFFSET UNITYSDK_OFFSET(0xDF389C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLY_OFFSET UNITYSDK_OFFSET(0xDF36150)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFAVORITE_OFFSET UNITYSDK_OFFSET(0xDF386B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFILTER_OFFSET UNITYSDK_OFFSET(0xDF37770)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFLIKE_OFFSET UNITYSDK_OFFSET(0xDF38360)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEEXPORT_OFFSET UNITYSDK_OFFSET(0xDF39360)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEIMPORT_OFFSET UNITYSDK_OFFSET(0xDF39240)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xDF37150)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xDF36C30)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_TOREPORTHASHCODE_OFFSET UNITYSDK_OFFSET(0xDF36E90)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER__GETHASHER_OFFSET UNITYSDK_OFFSET(0xDF39480)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportHelper_TypeDefinitionIndex = 67515;

	class RogueTournBuildRefReportHelper : public ::System::Object
	{
	public:
		static ::System::Void ReportBuildRefApply(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Guid a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::RogueTournBuildRefReportFromUIType a5)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Guid, ::System::Boolean, ::System::Boolean, ::RPG::Client::RogueTournBuildRefReportFromUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportBuildRefShowDetail(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::RogueTournBuildRefReportFromUIType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueTournBuildRefReportFromUIType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHOWDETAIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportBuildRefFilter(::System::Guid a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournBuildRefDataItem*>* a4)
		{
			return ((::System::Void(*)(::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournBuildRefDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFILTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportBuildRefLike(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFLIKE_OFFSET))(a1, a2);
		}

		static ::System::Void ReportBuildRefFavorite(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFFAVORITE_OFFSET))(a1, a2);
		}

		static ::System::Void ReportBuildRefApplyTeam(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::RogueTournBuildRefTeamData* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueTournBuildRefTeamData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFAPPLYTEAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportBuildRefShareCodeImport(::System::String* a1, ::RPG::Client::IRogueTournBuildRefDataItem* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEIMPORT_OFFSET))(a1, a2);
		}

		static ::System::Void ReportBuildRefShareCodeExport(::System::String* a1, ::RPG::Client::IRogueTournBuildRefDataItem* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTBUILDREFSHARECODEEXPORT_OFFSET))(a1, a2);
		}

		static ::System::Int32 ToReportHashCode(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_TOREPORTHASHCODE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefReportSourceType ReportSourceType(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefReportSourceType(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER_REPORTSOURCETYPE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_983* _GetHasher()
		{
			return ((::Class_0_16E4307DCC419505_983*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER__GETHASHER_OFFSET))();
		}
	};
}
