#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA462BE0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0xA462BD0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET UNITYSDK_OFFSET(0xA462B00)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET UNITYSDK_OFFSET(0xA4628F0)
#define RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA462830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConstants_TypeDefinitionIndex = 59710;

	class GridFightConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SeasonNameTextID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x8490);
		}
		static ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>** StaticGet_HandBookAvatarPropertyTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x8498);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>** StaticGet_CraftCostEquipCategories()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightEquipCategory>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x84A0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_ShowEffectRoleIDsInEnhance()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x84A8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GuideLevels()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x84B0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_DivisionLevelUpTable()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x84B8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_TutorialSpecialStageIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x84C0);
		}
		static ::System::UInt32* StaticGet_ElationSpecialOrbID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3980);
		}
		static ::System::UInt32* StaticGet_OverChargeModeUnlockQuestID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3984);
		}
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3988);
		}
		static ::System::UInt32* StaticGet_FormationSlotNum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x398C);
		}
		static ::System::UInt32* StaticGet_MaxMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3990);
		}
		static ::System::UInt32* StaticGet_GridStartIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3994);
		}
		static ::System::Boolean* StaticGet_IsShowSeasonUpdatedNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3998);
		}
		static ::System::Boolean* StaticGet_IsShowSeasonTimeOverHint()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3999);
		}
		static ::System::UInt32* StaticGet_PropMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x399C);
		}
		static ::System::Single* StaticGet_ExtraSeasonExpRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39A0);
		}
		static ::System::UInt32* StaticGet_EquipTrackMaxMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39A4);
		}
		static ::System::UInt32* StaticGet_MaxBenchMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39A8);
		}
		static ::System::UInt32* StaticGet_GalaxyRangersLeaderID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39AC);
		}
		static ::System::UInt32* StaticGet_PropEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39B0);
		}
		static ::System::UInt32* StaticGet_RoleStarUpgradeCountRequirement()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39B4);
		}
		static ::System::UInt32* StaticGet_OpenOrbWaitMs()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39B8);
		}
		static ::System::UInt32* StaticGet_DivisionLevelUpMaxValuePerGame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39BC);
		}
		static ::System::UInt32* StaticGet_TrialRoleWorldLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}
		static ::System::UInt32* StaticGet_FormationTitleLengthLimit()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39C4);
		}
		static ::System::UInt32* StaticGet_MaxBoardMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39C8);
		}
		static ::System::UInt32* StaticGet_MainPageUnlockId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39CC);
		}
		static ::System::UInt32* StaticGet_NewBieDivisionLevel()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}
		static ::System::UInt32* StaticGet_MaxFrontMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39D4);
		}
		static ::System::UInt32* StaticGet_ExtraSeasonExpMax()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39D8);
		}
		static ::System::UInt32* StaticGet_FormationEditEquipDragAngle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39DC);
		}
		static ::System::UInt32* StaticGet_CoinItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39E0);
		}
		static ::System::UInt32* StaticGet_RelicItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39E4);
		}
		static ::System::UInt32* StaticGet_MaxRoleStar()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39E8);
		}
		static ::System::UInt32* StaticGet_MaxBackMemberCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39EC);
		}
		static ::System::UInt32* StaticGet_MaxRoleEquipCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39F0);
		}
		static ::System::UInt32* StaticGet_DraftRoleStar()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39F4);
		}
		static ::System::UInt32* StaticGet_ShowSpecialFrontBackTypeTraitID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39F8);
		}
		static ::System::UInt32* StaticGet_MaxOverCrowdCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x39FC);
		}
		static ::System::UInt32* StaticGet_FormationEditRoleDragAngle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3A00);
		}
		static ::System::UInt32* StaticGet_FormationDescLengthLimit()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3A04);
		}
		static ::System::UInt32* StaticGet_GridFightContentID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GridFightConstants_TypeDefinitionIndex)->GetStaticField(0x3A08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__CCTOR_OFFSET))();
		}

		static ::System::UInt32 _GetConstValue(::System::String* key, ::System::UInt32 defaultValue)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUE_OFFSET))(key, defaultValue);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _GetConstValueList(::System::String* key)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUELIST_OFFSET))(key);
		}

		static ::System::Boolean _GetConstValueBool(::System::String* key, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSTANTS__GETCONSTVALUEBOOL_OFFSET))(key, defaultValue);
		}
	};
}
