#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_31.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Tutorial { class ITutorialGuideCollection; }
namespace RPG::Client::Tutorial { class TutorialGuideGroupData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B107DD0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1072E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1079C0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_GETGUIDECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1B107A60)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_GETGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B107C90)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x1B107330)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B107320)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialGuideService_TypeDefinitionIndex = 78530;

	class TutorialGuideService : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Tutorial::ITutorialGuideCollection*>* _GuideCollectionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Tutorial::TutorialGuideService* Create()
		{
			return ((::RPG::Client::Tutorial::TutorialGuideService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Tutorial::ITutorialGuideCollection* GetGuideCollection(::Enum_3_ED790DAC948A65A9_31 a1)
		{
			return ((::RPG::Client::Tutorial::ITutorialGuideCollection*(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_31))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_GETGUIDECOLLECTION_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* GetGuideGroupData(::Enum_3_ED790DAC948A65A9_31 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_31, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_GETGUIDEGROUPDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* CreateGuideGroupData(::Enum_3_ED790DAC948A65A9_31 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_31, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDESERVICE_CREATEGUIDEGROUPDATA_OFFSET))(this, a1, a2);
		}
	};
}
