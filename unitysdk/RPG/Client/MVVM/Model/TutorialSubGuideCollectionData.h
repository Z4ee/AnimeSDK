#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_26.h"
#include "unitysdk/System/Object.h"

class Class_1_5CC058B5560FCA8B;
namespace RPG::Client::MVVM::Model { class TutorialGuideCategoryInfo; }
namespace RPG::Client::MVVM::Model { class TutorialGuideGroupData; }
namespace RPG::Client::MVVM::Model { class TutorialGuideSpecialGotoInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9A86510)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9A85F80)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET UNITYSDK_OFFSET(0x9A86670)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9A86380)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x9A865A0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0x9A86450)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0x9A86810)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0x9A86860)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9A861C0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A85F00)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int TutorialSubGuideCollectionData_TypeDefinitionIndex = 61078;

	class TutorialSubGuideCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MVVM::Model::TutorialGuideGroupData*>* _GuideDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::TutorialSubGuideCollectionData* Create()
		{
			return ((::RPG::Client::MVVM::Model::TutorialSubGuideCollectionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATE_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MVVM::Model::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::TutorialGuideGroupData* GetGuideGroupDataByID(::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET))(this, guideGroupID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideGroupData* CreateGuideGroupData(::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET))(this, guideGroupID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo* GetGuideCategoryInfo(::System::UInt32 categoryID, ::System::UInt32 groupTypeID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET))(this, categoryID, groupTypeID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCategoryIDListByGroupTypeID(::System::UInt32 groupTypeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET))(this, groupTypeID);
		}

		::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo(::System::UInt32 guideGroupID)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET))(this, guideGroupID);
		}

		static ::RPG::Client::MVVM::Model::TutorialGuideGroupData* _CreateGuideGroupData(::Class_1_5CC058B5560FCA8B* row, ::RPG::Client::MVVM::Model::TutorialSubGuideCollectionData* belongCollection)
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideGroupData*(*)(::Class_1_5CC058B5560FCA8B*, ::RPG::Client::MVVM::Model::TutorialSubGuideCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET))(row, belongCollection);
		}

		::Enum_3_ED790DAC948A65A9_26 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALSUBGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET))(this);
		}
	};
}
