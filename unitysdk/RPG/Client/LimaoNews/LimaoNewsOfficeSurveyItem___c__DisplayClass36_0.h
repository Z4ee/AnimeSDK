#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5561F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM___C__DISPLAYCLASS36_0__FETCHFIRSTJUMPABLESUBMISSIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1C556610)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyItem___c__DisplayClass36_0_TypeDefinitionIndex = 78971;

	class LimaoNewsOfficeSurveyItem___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::SubMissionData*>* ret; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _FetchFirstJumpableSubMissionData_b__0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM___C__DISPLAYCLASS36_0__FETCHFIRSTJUMPABLESUBMISSIONDATA_B__0_OFFSET))(this, a1);
		}
	};
}
