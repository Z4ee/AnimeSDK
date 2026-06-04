#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/System/Object.h"

class Class_1_76E1242397074B5B;
namespace RPG::Client::Tutorial { class TutorialGuideCategoryInfo; }
namespace RPG::Client::Tutorial { class TutorialGuideGroupData; }
namespace RPG::Client::Tutorial { class TutorialGuideSpecialGotoInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCAF2D20)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCAF1930)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xCAF2E80)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCAF2B50)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xCAF2DB0)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0xCAF2C90)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0xCAF3090)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xCAF30E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCAF2930)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF28B0)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialSubGuideCollectionData_TypeDefinitionIndex = 73513;

	class TutorialSubGuideCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Tutorial::TutorialGuideGroupData*>* _GuideDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Tutorial::TutorialSubGuideCollectionData* Create()
		{
			return ((::RPG::Client::Tutorial::TutorialSubGuideCollectionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATE_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* GetGuideGroupDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* CreateGuideGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideCategoryInfo* GetGuideCategoryInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideCategoryInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCategoryIDListByGroupTypeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::Tutorial::TutorialGuideGroupData* _CreateGuideGroupData(::Class_1_76E1242397074B5B* a1, ::RPG::Client::Tutorial::TutorialSubGuideCollectionData* a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::Class_1_76E1242397074B5B*, ::RPG::Client::Tutorial::TutorialSubGuideCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET))(a1, a2);
		}

		::Enum_3_ED790DAC948A65A9_29 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET))(this);
		}
	};
}
