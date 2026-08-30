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

#define RPG_CLIENT_ROGUENOUSUTILS_CHECKGUIDEMAINMISSIONSALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1BA019E0)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x1B9F2DC0)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSSTORYREWARD_OFFSET UNITYSDK_OFFSET(0x1B9F3380)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKLOCKMAINMISSIONSALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1BA00EA0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETFINALLEVELAREAID_OFFSET UNITYSDK_OFFSET(0x1BA00020)
#define RPG_CLIENT_ROGUENOUSUTILS_GETGUIDEONEAREAID_OFFSET UNITYSDK_OFFSET(0x1B9FFCC0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_OFFSET UNITYSDK_OFFSET(0x1BA001E0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETSLOTDATAITEMSORDERBYSLOTID_OFFSET UNITYSDK_OFFSET(0x1BA00500)
#define RPG_CLIENT_ROGUENOUSUTILS_GETSURFACEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1B9F8520)
#define RPG_CLIENT_ROGUENOUSUTILS_ISANYMISSIONREWARDUNTAKEN_OFFSET UNITYSDK_OFFSET(0x1BA02660)
#define RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLEMAINSTORY_OFFSET UNITYSDK_OFFSET(0x1BA01E60)
#define RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLESUBSTORY_OFFSET UNITYSDK_OFFSET(0x1BA01BA0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISFINALLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0x1B9F8420)
#define RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEAREA_OFFSET UNITYSDK_OFFSET(0x1B9FFD80)
#define RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEFINISHED_OFFSET UNITYSDK_OFFSET(0x1B9F2220)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINFINALLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA000E0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINGENERALLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9FFDE0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINGUIDEONE_OFFSET UNITYSDK_OFFSET(0x1B9FFBC0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISSTORYMEETLAYERREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x1BA01F70)
#define RPG_CLIENT_ROGUENOUSUTILS_PREPAREMULTISUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1BA00CA0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETDICEMESHCOLOR_OFFSET UNITYSDK_OFFSET(0x1BA026D0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETDICESURFACE_OFFSET UNITYSDK_OFFSET(0x1BA02AB0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSMAINSTORYSEEN_OFFSET UNITYSDK_OFFSET(0x1BA00BD0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSSUBSTORYSEEN_OFFSET UNITYSDK_OFFSET(0x1BA00B00)
#define RPG_CLIENT_ROGUENOUSUTILS_SHOULDSHOWRECOMMENDBTN_OFFSET UNITYSDK_OFFSET(0x1BA00740)
#define RPG_CLIENT_ROGUENOUSUTILS_TAKEALLFINISHEDMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0x1BA020C0)
#define RPG_CLIENT_ROGUENOUSUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA02E60)
#define RPG_CLIENT_ROGUENOUSUTILS__CHECKMAINMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1BA01240)
#define RPG_CLIENT_ROGUENOUSUTILS__GETALLUNTAKENMISSIONREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1BA02200)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousUtils_TypeDefinitionIndex = 67485;

	class RogueNousUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__1stRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FD0);
		}
		static ::System::Int32* StaticGet__1stTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FD4);
		}
		static ::System::Int32* StaticGet__6ThTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FD8);
		}
		static ::System::Int32* StaticGet__3rdTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FDC);
		}
		static ::System::Int32* StaticGet_EmiColor02PropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FE0);
		}
		static ::System::Int32* StaticGet_EmiColorPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FE4);
		}
		static ::System::Int32* StaticGet__2ndTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FE8);
		}
		static ::System::Int32* StaticGet__5thRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FEC);
		}
		static ::System::Int32* StaticGet__6ThRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FF0);
		}
		static ::System::Int32* StaticGet__3rdRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FF4);
		}
		static ::System::Int32* StaticGet_EmiColor01PropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FF8);
		}
		static ::System::Int32* StaticGet_EffectColor5PropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x3FFC);
		}
		static ::System::Int32* StaticGet__4thRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x4000);
		}
		static ::System::Int32* StaticGet__4thTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x4004);
		}
		static ::System::Int32* StaticGet__5thTexPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x4008);
		}
		static ::System::Int32* StaticGet__2ndRarityPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils_TypeDefinitionIndex)->GetStaticField(0x400C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInGuideOne()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINGUIDEONE_OFFSET))();
		}

		static ::System::Boolean IsGuideOneArea(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEAREA_OFFSET))(a1);
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

		static ::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETSURFACEDATAITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSlotDataItem*>* GetSlotDataItemsOrderBySlotID(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETSLOTDATAITEMSORDERBYSLOTID_OFFSET))(a1);
		}

		static ::System::Boolean ShouldShowRecommendBtn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SHOULDSHOWRECOMMENDBTN_OFFSET))();
		}

		static ::System::Void SetRogueNousSubStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSSUBSTORYSEEN_OFFSET))(a1);
		}

		static ::System::Void SetRogueNousMainStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSMAINSTORYSEEN_OFFSET))(a1);
		}

		static ::System::Boolean CheckIfHasRogueNousStoryReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSSTORYREWARD_OFFSET))();
		}

		static ::System::Boolean CheckIfHasRogueNousQuestReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSQUESTREWARD_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* PrepareMultiSubMissionData(::Il2CppArray<::System::String*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_PREPAREMULTISUBMISSIONDATA_OFFSET))(a1);
		}

		static ::System::Boolean CheckLockMainMissionsAllFinished(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKLOCKMAINMISSIONSALLFINISHED_OFFSET))(a1);
		}

		static ::System::Boolean CheckGuideMainMissionsAllFinished(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKGUIDEMAINMISSIONSALLFINISHED_OFFSET))(a1);
		}

		static ::System::Boolean _CheckMainMissionAllFinished(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__CHECKMAINMISSIONALLFINISHED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCurLayerAccessableSubStory(::RPG::Client::RogueNousSubMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousSubMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLESUBSTORY_OFFSET))(a1);
		}

		static ::System::Boolean IsCurLayerAccessableMainStory(::RPG::Client::RogueNousMainMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousMainMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLEMAINSTORY_OFFSET))(a1);
		}

		static ::System::Boolean IsStoryMeetLayerRequirement(::RPG::Client::RogueNousSubMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousSubMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISSTORYMEETLAYERREQUIREMENT_OFFSET))(a1);
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

		static ::System::Void SetDiceMeshColor(::UnityEngine::MeshRenderer* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETDICEMESHCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetDiceSurface(::UnityEngine::MeshRenderer* a1, ::System::UInt32 a2, ::UnityEngine::Texture* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::System::UInt32, ::UnityEngine::Texture*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETDICESURFACE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
