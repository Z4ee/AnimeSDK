#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONSTANTS_GETSEASONUPDATEDESC_OFFSET UNITYSDK_OFFSET(0xD0E8ED0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0E9120)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E9110)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET UNITYSDK_OFFSET(0xD0E85F0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEDICT_OFFSET UNITYSDK_OFFSET(0xD0E86C0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET UNITYSDK_OFFSET(0xD0E83B0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xD0E82F0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETSEASONUPDATEDESCSWITCH_OFFSET UNITYSDK_OFFSET(0xD0E8A90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConstants_TypeDefinitionIndex = 64860;

	class GridFightConstants : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>** StaticGet__SeasonUpdateDescSwitch()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C60);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_DivisionLevelUpTable()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C68);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TanTaoAffixIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C70);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GuideLevels()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C78);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>** StaticGet_CraftCostEquipCategories()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C80);
		}
		static ::System::String** StaticGet_SeasonNameTextID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C88);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TutorialSpecialStageIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C90);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowEffectRoleIDsInEnhance()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C98);
		}
		static ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>** StaticGet_HandBookAvatarPropertyTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1CA0);
		}
		static ::System::UInt32* StaticGet_GridFightContentID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BD0);
		}
		static ::System::UInt32* StaticGet_PropMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BD4);
		}
		static ::System::UInt32* StaticGet_FormationSlotNum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BD8);
		}
		static ::System::UInt32* StaticGet_GridStartIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BDC);
		}
		static ::System::UInt32* StaticGet_MaxMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BE0);
		}
		static ::System::UInt32* StaticGet_ElationSpecialOrbID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BE4);
		}
		static ::System::UInt32* StaticGet_FormationTitleLengthLimit()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BE8);
		}
		static ::System::UInt32* StaticGet_MaxBoardMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BEC);
		}
		static ::RPG::Client::TextID* StaticGet_DefaultSeasonUpdateDescTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1BF0);
		}
		static ::System::UInt32* StaticGet_NewBieDivisionLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C00);
		}
		static ::System::UInt32* StaticGet_TrialRoleWorldLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C04);
		}
		static ::System::UInt32* StaticGet_FormationDescLengthLimit()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C08);
		}
		static ::System::UInt32* StaticGet_DraftRoleStar()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C0C);
		}
		static ::System::UInt32* StaticGet_PropEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C10);
		}
		static ::System::UInt32* StaticGet_FormationEditEquipDragAngle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C14);
		}
		static ::System::UInt32* StaticGet_MaxFrontMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C18);
		}
		static ::System::UInt32* StaticGet_EquipTrackMaxMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C1C);
		}
		static ::System::UInt32* StaticGet_MaxOverCrowdCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C20);
		}
		static ::System::Single* StaticGet_ExtraSeasonExpRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C24);
		}
		static ::System::UInt32* StaticGet_TanTaoLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C28);
		}
		static ::System::UInt32* StaticGet_MaxBackMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C2C);
		}
		static ::System::UInt32* StaticGet_MaxRoleStar()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C30);
		}
		static ::System::UInt32* StaticGet_IsDoubleSeasonExp()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C34);
		}
		static ::System::Boolean* StaticGet_IsShowSeasonUpdatedNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C38);
		}
		static ::System::Boolean* StaticGet_IsShowSeasonTimeOverHint()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C39);
		}
		static ::System::UInt32* StaticGet_RoleStarUpgradeCountRequirement()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C3C);
		}
		static ::System::UInt32* StaticGet_OpenOrbWaitMs()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C40);
		}
		static ::System::UInt32* StaticGet_NewSeasonLockModuleID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C44);
		}
		static ::System::UInt32* StaticGet_ExtraSeasonExpMax()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C48);
		}
		static ::System::UInt32* StaticGet_FormationEditRoleDragAngle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C4C);
		}
		static ::System::UInt32* StaticGet_MaxBenchMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C50);
		}
		static ::System::UInt32* StaticGet_MainPageUnlockId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C54);
		}
		static ::System::UInt32* StaticGet_RelicItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C58);
		}
		static ::System::UInt32* StaticGet_OverChargeModeUnlockQuestID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C5C);
		}
		static ::System::UInt32* StaticGet_GalaxyRangersLeaderID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C60);
		}
		static ::System::UInt32* StaticGet_DivisionLevelUpMaxValuePerGame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C64);
		}
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C68);
		}
		static ::System::UInt32* StaticGet_CoinItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C6C);
		}
		static ::System::UInt32* StaticGet_ShowSpecialFrontBackTypeTraitID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C70);
		}
		static ::System::UInt32* StaticGet_MaxRoleEquipCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1C74);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__CCTOR_OFFSET))();
		}

		static ::System::UInt32 _GetConstValue(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _GetConstValueList(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET))(a1);
		}

		static ::System::Boolean _GetConstValueBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GetConstValueDict(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEDICT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* _GetSeasonUpdateDescSwitch()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETSEASONUPDATEDESCSWITCH_OFFSET))();
		}

		static ::RPG::Client::TextID GetSeasonUpdateDesc()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS_GETSEASONUPDATEDESC_OFFSET))();
		}
	};
}
