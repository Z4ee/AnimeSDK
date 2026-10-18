#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_CCF20DC2AAC0169A;
namespace RPG::Client { class OnlineCakeCatchShelfData; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0xC8D7240)
#define RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0xC8D74B0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC8D04E0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0xC8E77B0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0xC8E7810)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET UNITYSDK_OFFSET(0xC8E6B20)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET UNITYSDK_OFFSET(0xC8E6A50)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET UNITYSDK_OFFSET(0xC8E0160)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET UNITYSDK_OFFSET(0xC8E6740)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0xC8E6690)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xC8E65E0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET UNITYSDK_OFFSET(0xC8E2200)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xC8D5CE0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xC8D5DE0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC8E68A0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKID_OFFSET UNITYSDK_OFFSET(0xC8E6950)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xC8D7D10)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC8E67F0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0xC8E7310)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xC8CFA00)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xC8CFBA0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET UNITYSDK_OFFSET(0xC8CFAD0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xC8E7260)
#define RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0xC8E74E0)
#define RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xC8E72B0)
#define RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC8E6C90)
#define RPG_CLIENT_CAKECATCHSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8E7860)
#define RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET UNITYSDK_OFFSET(0xC8E7760)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic_TypeDefinitionIndex = 62971;

	class CakeCatchStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_PreGuideMissionGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x2680);
		}
		static ::System::UInt32* StaticGet__FinishedPreGuideMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x2684);
		}
		static ::System::UInt32* StaticGet__FinishedPreLevelRequirementUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x2688);
		}
		static ::System::Single* StaticGet_CatDialogueGroupCD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x268C);
		}
		static ::System::UInt32* StaticGet_WEEKLY_MAX_CATCH_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x2690);
		}
		static ::System::UInt32* StaticGet_CatBoxGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x2694);
		}
		static ::System::UInt32* StaticGet_CatGodPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x2698);
		}
		static ::System::UInt32* StaticGet_CatGodGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x269C);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26A0);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFriendEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26A4);
		}
		static ::System::UInt32* StaticGet_CakeCatchShelfMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26A8);
		}
		static ::System::UInt32* StaticGet_TEXTJOIN_ID_CAKE_CATCH_WEEKLY_CAUGHT_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26AC);
		}
		static ::System::Single* StaticGet_CatDialogueBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26B0);
		}
		static ::System::UInt32* StaticGet_PreMainMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26B4);
		}
		static ::System::UInt32* StaticGet_CatGodMapIconType()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26B8);
		}
		static ::System::UInt32* StaticGet_CatGodInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26BC);
		}
		static ::System::UInt32* StaticGet_CatBoxInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26C0);
		}
		static ::System::UInt32* StaticGet__FinishedPreArrangeMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26C4);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26C8);
		}
		static ::System::UInt32* StaticGet__VisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26CC);
		}
		static ::System::UInt32* StaticGet_CatGodMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26D0);
		}
		static ::System::Single* StaticGet_CatTextBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26D4);
		}
		static ::System::UInt32* StaticGet_CAT_NUM_PER_ROOM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26D8);
		}
		static ::System::UInt32* StaticGet__FirstCatCatchUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26DC);
		}
		static ::System::UInt32* StaticGet_MAX_CAT_ARRANGE_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26E0);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomSelfEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x26E4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreLevelRequirement()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreGuideMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreArrangeMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET))();
		}

		static ::System::Boolean get_FinishedFirstCakeCatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET))();
		}

		static ::System::Boolean get_VisitFunctionUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET))();
		}

		static ::System::Boolean get_SocialPlayUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKED_OFFSET))();
		}

		static ::System::UInt32 get_POSE1_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_POSE2_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_STORY_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_MAX_CAT_OBTAINABLE_COUNT()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET))();
		}

		static ::System::UInt32 get_SocialPlayUnlockID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKID_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_CatDialogueBubbleOffsets()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET))();
		}

		static ::RPG::Client::TrainCakeCatchExhibitController* GetExhibitController()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::OnlineCakeCatchShelfData*>* GetShelfDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlineCakeCatchShelfData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET))();
		}

		static ::System::Void StartCakePerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET))(a1);
		}

		static ::System::Boolean IsSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))();
		}

		static ::System::Void SetSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))();
		}

		static ::System::Boolean IsCakeGodSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET))();
		}

		static ::System::Boolean IsCatGodInteractable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET))();
		}

		static ::System::Boolean IsLocalCatGodVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET))();
		}

		static ::System::Boolean IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET))();
		}

		static ::System::Void SetCakeGodSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET))();
		}

		static ::System::UInt32 _GetGroundTypeToBubbleOffsetID(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET))(a1);
		}

		static ::System::UInt32 GetGroundBubbleOffsetIndex(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetShelfBubbleOffsetIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET))(a1);
		}

		static ::System::UInt32 GetBubbleOffsetIndex(::Class_1_CCF20DC2AAC0169A* a1)
		{
			return ((::System::UInt32(*)(::Class_1_CCF20DC2AAC0169A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET))(a1);
		}

		static ::RPG::Client::CakeBubbleOffset GetDefaultBubbleOffset()
		{
			return ((::RPG::Client::CakeBubbleOffset(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET))();
		}
	};
}
