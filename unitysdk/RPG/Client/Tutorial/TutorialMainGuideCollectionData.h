#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_31.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Tutorial { class TutorialGuideCategoryInfo; }
namespace RPG::Client::Tutorial { class TutorialGuideGroupData; }
namespace RPG::Client::Tutorial { class TutorialGuideSpecialGotoInfo; }
namespace RPG::GameCore { class TutorialGuideGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B108300)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B107480)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET UNITYSDK_OFFSET(0x1B108460)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B108130)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x1B108390)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0x1B108270)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0x1B108680)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0x1B108750)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B108070)
#define RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B107FF0)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialMainGuideCollectionData_TypeDefinitionIndex = 78528;

	class TutorialMainGuideCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Tutorial::TutorialGuideGroupData*>* _GuideDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Tutorial::TutorialMainGuideCollectionData* Create()
		{
			return ((::RPG::Client::Tutorial::TutorialMainGuideCollectionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATE_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* GetGuideGroupDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* CreateGuideGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideCategoryInfo* GetGuideCategoryInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideCategoryInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCategoryIDListByGroupTypeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::Tutorial::TutorialGuideGroupData* _CreateGuideGroupData(::RPG::GameCore::TutorialGuideGroupRow* a1, ::RPG::Client::Tutorial::TutorialMainGuideCollectionData* a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::RPG::GameCore::TutorialGuideGroupRow*, ::RPG::Client::Tutorial::TutorialMainGuideCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET))(a1, a2);
		}

		::Enum_3_ED790DAC948A65A9_31 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_31(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALMAINGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET))(this);
		}
	};
}
