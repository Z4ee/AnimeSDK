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

#define RPG_CLIENT_GRIDFIGHTCONSTANTS_GETSEASONUPDATEDESC_OFFSET UNITYSDK_OFFSET(0x1C959910)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C959B60)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C959B50)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x1C959400)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET UNITYSDK_OFFSET(0x1C9591C0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1C959100)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETSEASONUPDATEDESCSWITCH_OFFSET UNITYSDK_OFFSET(0x1C9594D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConstants_TypeDefinitionIndex = 64920;

	class GridFightConstants : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowEffectRoleIDsInEnhance()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x4470);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TutorialSpecialStageIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x4478);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>** StaticGet_CraftCostEquipCategories()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x4480);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GuideLevels()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x4488);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>** StaticGet__SeasonUpdateDescSwitch()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x4490);
		}
		static ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>** StaticGet_HandBookAvatarPropertyTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x4498);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_DivisionLevelUpTable()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x44A0);
		}
		static ::System::String** StaticGet_SeasonNameTextID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x44A8);
		}
		static ::System::UInt32* StaticGet_MaxFrontMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15C0);
		}
		static ::System::UInt32* StaticGet_OverChargeModeUnlockQuestID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15C4);
		}
		static ::System::UInt32* StaticGet_GalaxyRangersLeaderID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15C8);
		}
		static ::System::Boolean* StaticGet_IsShowSeasonTimeOverHint()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15CC);
		}
		static ::System::Boolean* StaticGet_IsShowSeasonUpdatedNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15CD);
		}
		static ::System::UInt32* StaticGet_MaxMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15D0);
		}
		static ::System::UInt32* StaticGet_DraftRoleStar()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15D4);
		}
		static ::System::UInt32* StaticGet_MainPageUnlockId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15D8);
		}
		static ::System::UInt32* StaticGet_MaxBackMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15DC);
		}
		static ::RPG::Client::TextID* StaticGet_DefaultSeasonUpdateDescTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15E0);
		}
		static ::System::UInt32* StaticGet_CoinItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15F0);
		}
		static ::System::UInt32* StaticGet_FormationTitleLengthLimit()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15F4);
		}
		static ::System::UInt32* StaticGet_ExtraSeasonExpMax()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15F8);
		}
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x15FC);
		}
		static ::System::UInt32* StaticGet_FormationSlotNum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1600);
		}
		static ::System::UInt32* StaticGet_NewSeasonLockModuleID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1604);
		}
		static ::System::UInt32* StaticGet_MaxRoleEquipCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1608);
		}
		static ::System::UInt32* StaticGet_RoleStarUpgradeCountRequirement()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x160C);
		}
		static ::System::UInt32* StaticGet_MaxOverCrowdCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1610);
		}
		static ::System::UInt32* StaticGet_PropMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1614);
		}
		static ::System::UInt32* StaticGet_NewBieDivisionLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1618);
		}
		static ::System::UInt32* StaticGet_FormationDescLengthLimit()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x161C);
		}
		static ::System::UInt32* StaticGet_RelicItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1620);
		}
		static ::System::UInt32* StaticGet_FormationEditRoleDragAngle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1624);
		}
		static ::System::UInt32* StaticGet_GridStartIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1628);
		}
		static ::System::UInt32* StaticGet_MaxBenchMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x162C);
		}
		static ::System::UInt32* StaticGet_DivisionLevelUpMaxValuePerGame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1630);
		}
		static ::System::UInt32* StaticGet_FormationEditEquipDragAngle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1634);
		}
		static ::System::UInt32* StaticGet_MaxBoardMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1638);
		}
		static ::System::UInt32* StaticGet_ElationSpecialOrbID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x163C);
		}
		static ::System::UInt32* StaticGet_PropEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1640);
		}
		static ::System::UInt32* StaticGet_OpenOrbWaitMs()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1644);
		}
		static ::System::Single* StaticGet_ExtraSeasonExpRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1648);
		}
		static ::System::UInt32* StaticGet_GridFightContentID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x164C);
		}
		static ::System::UInt32* StaticGet_ShowSpecialFrontBackTypeTraitID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1650);
		}
		static ::System::UInt32* StaticGet_EquipTrackMaxMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1654);
		}
		static ::System::UInt32* StaticGet_TrialRoleWorldLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x1658);
		}
		static ::System::UInt32* StaticGet_MaxRoleStar()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x165C);
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
