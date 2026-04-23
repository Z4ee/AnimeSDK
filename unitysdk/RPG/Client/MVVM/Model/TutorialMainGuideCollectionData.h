#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class TutorialGuideCategoryInfo; }
namespace RPG::Client::MVVM::Model { class TutorialGuideGroupData; }
namespace RPG::Client::MVVM::Model { class TutorialGuideSpecialGotoInfo; }
namespace RPG::GameCore { class TutorialGuideGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA7337E0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA733350)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xA733940)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA733650)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xA733870)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0xA733720)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0xA733B00)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xA733BD0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA733590)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7332D0)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int TutorialMainGuideCollectionData_TypeDefinitionIndex = 68536;

	class TutorialMainGuideCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MVVM::Model::TutorialGuideGroupData*>* _GuideDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::TutorialMainGuideCollectionData* Create()
		{
			return ((::RPG::Client::MVVM::Model::TutorialMainGuideCollectionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATE_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::TutorialGuideGroupData* GetGuideGroupDataByID(::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET))(this, guideGroupID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideGroupData* CreateGuideGroupData(::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET))(this, guideGroupID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo* GetGuideCategoryInfo(::System::UInt32 categoryID, ::System::UInt32 groupTypeID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET))(this, categoryID, groupTypeID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCategoryIDListByGroupTypeID(::System::UInt32 groupTypeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET))(this, groupTypeID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo(::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET))(this, guideGroupID);
		}

		static ::RPG::Client::MVVM::Model::TutorialGuideGroupData* _CreateGuideGroupData(::RPG::GameCore::TutorialGuideGroupRow* row, ::RPG::Client::MVVM::Model::TutorialMainGuideCollectionData* belongCollection)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::RPG::GameCore::TutorialGuideGroupRow*, ::RPG::Client::MVVM::Model::TutorialMainGuideCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET))(row, belongCollection);
		}

		::Enum_3_ED790DAC948A65A9_29 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALMAINGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET))(this);
		}
	};
}
