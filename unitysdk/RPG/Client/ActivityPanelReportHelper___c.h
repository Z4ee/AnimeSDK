#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTagData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C385D0)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C38610)
#define RPG_CLIENT_ACTIVITYPANELREPORTHELPER___C__REPORTSHOWRESIDENTACTIVITYDETAIL_B__8_0_OFFSET UNITYSDK_OFFSET(0x9C38620)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelReportHelper___c_TypeDefinitionIndex = 56915;

	class ActivityPanelReportHelper___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityPanelReportHelper___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPanelReportHelper___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x35440);
		}
		static ::System::Func_2<::RPG::Client::ActivityTagData*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityTagData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x35448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _ReportShowResidentActivityDetail_b__8_0(::RPG::Client::ActivityTagData* tag)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityTagData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELREPORTHELPER___C__REPORTSHOWRESIDENTACTIVITYDETAIL_B__8_0_OFFSET))(this, tag);
		}
	};
}
