#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_902742FEC03162EB;
namespace RPG::Client { class OnlineCakeCatchShelfData; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x9ECCDD0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x9ECD040)
#define RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0x9EC5250)
#define RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x9EDB970)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x9EDB9D0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET UNITYSDK_OFFSET(0x9EDADE0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET UNITYSDK_OFFSET(0x9EDAD10)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET UNITYSDK_OFFSET(0x9ED4FE0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET UNITYSDK_OFFSET(0x9EDABB0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x9EDAB00)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x9EDAA50)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET UNITYSDK_OFFSET(0x9ED6ED0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x9ECB8B0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x9ECB9B0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x9ECD8D0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9EDAC60)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0x9EDB580)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x9EC4720)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x9EC4860)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET UNITYSDK_OFFSET(0x9EC47C0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x9EDB400)
#define RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0x9EDB710)
#define RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x9EDB4C0)
#define RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9EDAEA0)
#define RPG_CLIENT_CAKECATCHSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EDBA20)
#define RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET UNITYSDK_OFFSET(0x9EDB920)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic_TypeDefinitionIndex = 58003;

	class CakeCatchStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_CatGodPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A80);
		}
		static ::System::UInt32* StaticGet_CAT_NUM_PER_ROOM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A84);
		}
		static ::System::UInt32* StaticGet_CatBoxInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A88);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFriendEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A8C);
		}
		static ::System::UInt32* StaticGet_WEEKLY_MAX_CATCH_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A90);
		}
		static ::System::UInt32* StaticGet__VisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A94);
		}
		static ::System::UInt32* StaticGet_CatGodGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A98);
		}
		static ::System::Single* StaticGet_CatDialogueGroupCD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5A9C);
		}
		static ::System::UInt32* StaticGet_TEXTJOIN_ID_CAKE_CATCH_WEEKLY_CAUGHT_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AA0);
		}
		static ::System::UInt32* StaticGet_CakeCatchShelfMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AA4);
		}
		static ::System::UInt32* StaticGet_CatBoxGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AA8);
		}
		static ::System::UInt32* StaticGet__FinishedPreGuideMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AAC);
		}
		static ::System::UInt32* StaticGet_MAX_CAT_ARRANGE_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AB0);
		}
		static ::System::Single* StaticGet_CatDialogueBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AB4);
		}
		static ::System::UInt32* StaticGet_CatGodMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AB8);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5ABC);
		}
		static ::System::Single* StaticGet_CatTextBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AC0);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AC4);
		}
		static ::System::UInt32* StaticGet__FinishedPreArrangeMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AC8);
		}
		static ::System::UInt32* StaticGet_PreMainMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5ACC);
		}
		static ::System::UInt32* StaticGet_CatGodInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AD0);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomSelfEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AD4);
		}
		static ::System::UInt32* StaticGet_CatGodMapIconType()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AD8);
		}
		static ::System::UInt32* StaticGet__FinishedPreLevelRequirementUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5ADC);
		}
		static ::System::UInt32* StaticGet_PreGuideMissionGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AE0);
		}
		static ::System::UInt32* StaticGet__FirstCatCatchUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0x5AE4);
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

		static ::System::Void StartCakePerformance(::System::UInt32 performanceID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET))(performanceID);
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

		static ::System::UInt32 _GetGroundTypeToBubbleOffsetID(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType state)
		{
			return ((::System::UInt32(*)(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET))(state);
		}

		static ::System::UInt32 GetGroundBubbleOffsetIndex(::System::UInt32 pile, ::System::UInt32 state, ::System::UInt32 position)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET))(pile, state, position);
		}

		static ::System::UInt32 GetShelfBubbleOffsetIndex(::System::UInt32 position)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET))(position);
		}

		static ::System::UInt32 GetBubbleOffsetIndex(::Class_1_902742FEC03162EB* positionInfo)
		{
			return ((::System::UInt32(*)(::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET))(positionInfo);
		}

		static ::RPG::Client::CakeBubbleOffset GetDefaultBubbleOffset()
		{
			return ((::RPG::Client::CakeBubbleOffset(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET))();
		}
	};
}
