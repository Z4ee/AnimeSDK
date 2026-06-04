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

#define RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0xB4781F0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0xB478390)
#define RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xB46CB10)
#define RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0xB478140)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0xB4781A0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET UNITYSDK_OFFSET(0xB477340)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET UNITYSDK_OFFSET(0xB477270)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET UNITYSDK_OFFSET(0xB470A40)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET UNITYSDK_OFFSET(0xB477010)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0xB476F60)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xB476EB0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET UNITYSDK_OFFSET(0xB472BD0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xB46B170)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xB46B270)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0xB477170)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB4770C0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0xB477B80)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xB477D10)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xB477E50)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET UNITYSDK_OFFSET(0xB477DB0)
#define RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xB477A00)
#define RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0xB477EE0)
#define RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0xB477AC0)
#define RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB4774B0)
#define RPG_CLIENT_CAKECATCHSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB478400)
#define RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET UNITYSDK_OFFSET(0xB4780F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic_TypeDefinitionIndex = 58919;

	class CakeCatchStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__FinishedPreLevelRequirementUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xDF0);
		}
		static ::System::UInt32* StaticGet_TEXTJOIN_ID_CAKE_CATCH_WEEKLY_CAUGHT_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xDF4);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomSelfEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xDF8);
		}
		static ::System::UInt32* StaticGet_CatBoxGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xDFC);
		}
		static ::System::UInt32* StaticGet_CatBoxInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE00);
		}
		static ::System::UInt32* StaticGet__FirstCatCatchUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE04);
		}
		static ::System::Single* StaticGet_CatDialogueBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE08);
		}
		static ::System::Single* StaticGet_CatTextBubbleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE0C);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE10);
		}
		static ::System::UInt32* StaticGet__FinishedPreArrangeMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE14);
		}
		static ::System::UInt32* StaticGet_CakeCatchShelfMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE18);
		}
		static ::System::UInt32* StaticGet_WEEKLY_MAX_CATCH_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE1C);
		}
		static ::System::UInt32* StaticGet_PreMainMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE20);
		}
		static ::System::UInt32* StaticGet_CatGodGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE24);
		}
		static ::System::UInt32* StaticGet_CatGodMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE28);
		}
		static ::System::UInt32* StaticGet_CatGodInstanceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE2C);
		}
		static ::System::UInt32* StaticGet_CatGodMapIconType()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE30);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFriendEntryId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE34);
		}
		static ::System::UInt32* StaticGet_CatGodPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE38);
		}
		static ::System::UInt32* StaticGet_MAX_CAT_ARRANGE_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE3C);
		}
		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE40);
		}
		static ::System::UInt32* StaticGet__FinishedPreGuideMissionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE44);
		}
		static ::System::UInt32* StaticGet__VisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE48);
		}
		static ::System::Single* StaticGet_CatDialogueGroupCD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE4C);
		}
		static ::System::UInt32* StaticGet_PreGuideMissionGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE50);
		}
		static ::System::UInt32* StaticGet_CAT_NUM_PER_ROOM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic_TypeDefinitionIndex)->GetStaticField(0xE54);
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
