#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::Client { class RogueNousMainMissionDataItem; }
namespace RPG::Client { class RogueNousSubMissionDataItem; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_ROGUENOUSUTILS_CHECKGUIDEMAINMISSIONSALLFINISHED_OFFSET UNITYSDK_OFFSET(0xA3583E0)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xA34A2B0)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSSTORYREWARD_OFFSET UNITYSDK_OFFSET(0xA34A750)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKLOCKMAINMISSIONSALLFINISHED_OFFSET UNITYSDK_OFFSET(0xA357800)
#define RPG_CLIENT_ROGUENOUSUTILS_GETFINALLEVELAREAID_OFFSET UNITYSDK_OFFSET(0xA356AA0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETGUIDEONEAREAID_OFFSET UNITYSDK_OFFSET(0xA356750)
#define RPG_CLIENT_ROGUENOUSUTILS_GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_OFFSET UNITYSDK_OFFSET(0xA356CA0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETSLOTDATAITEMSORDERBYSLOTID_OFFSET UNITYSDK_OFFSET(0xA356EF0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETSURFACEDATAITEM_OFFSET UNITYSDK_OFFSET(0xA34F1F0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISANYMISSIONREWARDUNTAKEN_OFFSET UNITYSDK_OFFSET(0xA359060)
#define RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLEMAINSTORY_OFFSET UNITYSDK_OFFSET(0xA3588A0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLESUBSTORY_OFFSET UNITYSDK_OFFSET(0xA358570)
#define RPG_CLIENT_ROGUENOUSUTILS_ISFINALLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0xA34F0A0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEAREA_OFFSET UNITYSDK_OFFSET(0xA356800)
#define RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEFINISHED_OFFSET UNITYSDK_OFFSET(0xA349740)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINFINALLEVEL_OFFSET UNITYSDK_OFFSET(0xA356B50)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINGENERALLEVEL_OFFSET UNITYSDK_OFFSET(0xA356860)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINGUIDEONE_OFFSET UNITYSDK_OFFSET(0xA356600)
#define RPG_CLIENT_ROGUENOUSUTILS_ISSTORYMEETLAYERREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xA3589B0)
#define RPG_CLIENT_ROGUENOUSUTILS_PREPAREMULTISUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA357630)
#define RPG_CLIENT_ROGUENOUSUTILS_SETDICEMESHCOLOR_OFFSET UNITYSDK_OFFSET(0xA3590D0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETDICESURFACE_OFFSET UNITYSDK_OFFSET(0xA3594F0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSMAINSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xA357560)
#define RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSSUBSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xA357490)
#define RPG_CLIENT_ROGUENOUSUTILS_SHOULDSHOWRECOMMENDBTN_OFFSET UNITYSDK_OFFSET(0xA357060)
#define RPG_CLIENT_ROGUENOUSUTILS_TAKEALLFINISHEDMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0xA358B00)
#define RPG_CLIENT_ROGUENOUSUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3598A0)
#define RPG_CLIENT_ROGUENOUSUTILS__CHECKMAINMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0xA357CA0)
#define RPG_CLIENT_ROGUENOUSUTILS__GETALLUNTAKENMISSIONREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA358C80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousUtils_TypeDefinitionIndex = 55001;

	class RogueNousUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__4thRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72A0);
		}
		static ::System::Int32* StaticGet_EmiColorPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72A4);
		}
		static ::System::Int32* StaticGet__6ThRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72A8);
		}
		static ::System::Int32* StaticGet__2ndRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72AC);
		}
		static ::System::Int32* StaticGet__2ndTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72B0);
		}
		static ::System::Int32* StaticGet__3rdRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72B4);
		}
		static ::System::Int32* StaticGet_EmiColor02PropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72B8);
		}
		static ::System::Int32* StaticGet__1stTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72BC);
		}
		static ::System::Int32* StaticGet_EmiColor01PropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72C0);
		}
		static ::System::Int32* StaticGet__5thRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72C4);
		}
		static ::System::Int32* StaticGet_EffectColor5PropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72C8);
		}
		static ::System::Int32* StaticGet__1stRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72CC);
		}
		static ::System::Int32* StaticGet__6ThTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		static ::System::Int32* StaticGet__5thTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72D4);
		}
		static ::System::Int32* StaticGet__4thTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72D8);
		}
		static ::System::Int32* StaticGet__3rdTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x72DC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInGuideOne()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINGUIDEONE_OFFSET))();
		}

		static ::System::Boolean IsGuideOneArea(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEAREA_OFFSET))(areaID);
		}

		static ::System::Boolean IsGuideOneFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetGuideOneAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETGUIDEONEAREAID_OFFSET))();
		}

		static ::System::Boolean IsInGeneralLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINGENERALLEVEL_OFFSET))();
		}

		static ::System::Boolean IsInFinalLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINFINALLEVEL_OFFSET))();
		}

		static ::System::Boolean IsFinalLevelFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISFINALLEVELFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetFinalLevelAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETFINALLEVELAREAID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonRow*>* GetRogueNousAccessibleAeonRowSortedList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_OFFSET))();
		}

		static ::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataItem(::System::UInt32 surfaceID)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETSURFACEDATAITEM_OFFSET))(surfaceID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSlotDataItem*>* GetSlotDataItemsOrderBySlotID(::RPG::Client::RogueNousDiceBranchDataItem* branch)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETSLOTDATAITEMSORDERBYSLOTID_OFFSET))(branch);
		}

		static ::System::Boolean ShouldShowRecommendBtn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SHOULDSHOWRECOMMENDBTN_OFFSET))();
		}

		static ::System::Void SetRogueNousSubStorySeen(::System::UInt32 subStoryID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSSUBSTORYSEEN_OFFSET))(subStoryID);
		}

		static ::System::Void SetRogueNousMainStorySeen(::System::UInt32 mainStoryID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSMAINSTORYSEEN_OFFSET))(mainStoryID);
		}

		static ::System::Boolean CheckIfHasRogueNousStoryReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSSTORYREWARD_OFFSET))();
		}

		static ::System::Boolean CheckIfHasRogueNousQuestReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSQUESTREWARD_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* PrepareMultiSubMissionData(::Il2CppArray<::System::String*>* constKeys)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_PREPAREMULTISUBMISSIONDATA_OFFSET))(constKeys);
		}

		static ::System::Boolean CheckLockMainMissionsAllFinished(::System::UInt32& doingMainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKLOCKMAINMISSIONSALLFINISHED_OFFSET))(doingMainMissionID);
		}

		static ::System::Boolean CheckGuideMainMissionsAllFinished(::System::UInt32& doingMainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKGUIDEMAINMISSIONSALLFINISHED_OFFSET))(doingMainMissionID);
		}

		static ::System::Boolean _CheckMainMissionAllFinished(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* mainMissionIDs, ::System::UInt32& doingMainMissionID)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__CHECKMAINMISSIONALLFINISHED_OFFSET))(mainMissionIDs, doingMainMissionID);
		}

		static ::System::Boolean IsCurLayerAccessableSubStory(::RPG::Client::RogueNousSubMissionDataItem* subStory)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousSubMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLESUBSTORY_OFFSET))(subStory);
		}

		static ::System::Boolean IsCurLayerAccessableMainStory(::RPG::Client::RogueNousMainMissionDataItem* mainStory)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousMainMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLEMAINSTORY_OFFSET))(mainStory);
		}

		static ::System::Boolean IsStoryMeetLayerRequirement(::RPG::Client::RogueNousSubMissionDataItem* subStory)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousSubMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISSTORYMEETLAYERREQUIREMENT_OFFSET))(subStory);
		}

		static ::System::Void TakeAllFinishedMissionReward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_TAKEALLFINISHEDMISSIONREWARD_OFFSET))();
		}

		static ::System::Boolean IsAnyMissionRewardUnTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISANYMISSIONREWARDUNTAKEN_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _GetAllUnTakenMissionRewardQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__GETALLUNTAKENMISSIONREWARDQUESTIDS_OFFSET))();
		}

		static ::System::Void SetDiceMeshColor(::UnityEngine::MeshRenderer* diceMeshRender, ::System::UInt32 branchID)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETDICEMESHCOLOR_OFFSET))(diceMeshRender, branchID);
		}

		static ::System::Void SetDiceSurface(::UnityEngine::MeshRenderer* meshRenderer, ::System::UInt32 slotID, ::UnityEngine::Texture* texture, ::System::UInt32 rarity)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::System::UInt32, ::UnityEngine::Texture*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETDICESURFACE_OFFSET))(meshRenderer, slotID, texture, rarity);
		}
	};
}
