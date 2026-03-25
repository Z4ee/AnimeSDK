#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::MVVM::Service { class LimaoNewsTrackService; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__BEGINTRACKOFFICE_B__0_OFFSET UNITYSDK_OFFSET(0x9A907B0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8E840)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsTrackService___c__DisplayClass7_0_TypeDefinitionIndex = 61049;

	class LimaoNewsTrackService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::MVVM::Service::LimaoNewsTrackService* __4__this; // 0x10
		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* surveyItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginTrackOffice_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTRACKSERVICE___C__DISPLAYCLASS7_0__BEGINTRACKOFFICE_B__0_OFFSET))(this);
		}
	};
}
