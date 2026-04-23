#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyItem; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA739510)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__REBUILDSURVEYITEMSBYRECOMMENDID_B__0_OFFSET UNITYSDK_OFFSET(0xA739DF0)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyService___c__DisplayClass2_0_TypeDefinitionIndex = 68498;

	class LimaoNewsOfficeSurveyService___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 recommendSurveyID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RebuildSurveyItemsByRecommendID_b__0(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFICESURVEYSERVICE___C__DISPLAYCLASS2_0__REBUILDSURVEYITEMSBYRECOMMENDID_B__0_OFFSET))(this, item);
		}
	};
}
