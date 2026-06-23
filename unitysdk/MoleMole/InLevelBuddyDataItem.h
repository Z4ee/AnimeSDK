#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/InLevelBuddyDataItem_InLevelBuddyTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A55DC9AE6705F8CA;
class Class_2_6DA22669E4D1C4BF;
class Class_3_D9B49139DBB5CEDE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INLEVELBUDDYDATAITEM_GETBUDDYNAME_OFFSET UNITYSDK_OFFSET(0x14185B40)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GETCURBATTLEBUDDYDATA_OFFSET UNITYSDK_OFFSET(0x14185970)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GETSKILLLEVELBYTYPE_OFFSET UNITYSDK_OFFSET(0x14185880)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GET_BUDDYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0x14184420)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GET_DATAITEMID_OFFSET UNITYSDK_OFFSET(0x14185B90)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GET_SKILLTYPE2LEVEL_OFFSET UNITYSDK_OFFSET(0x14184440)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_INIT_OFFSET UNITYSDK_OFFSET(0x141845F0)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_SET_BUDDYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0x14184430)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_SET_SKILLTYPE2LEVEL_OFFSET UNITYSDK_OFFSET(0x14184450)
#define MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14184530)
#define MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14184460)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelBuddyDataItem_TypeDefinitionIndex = 55252;

	class InLevelBuddyDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* addedAbilityIDList; // 0x10
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* partAssetPathList; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* overridePropertyMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A55DC9AE6705F8CA*>* EquipedArcanaDic; // 0x28
		::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* _SkillType2Level_k__BackingField; // 0x30
		::System::Int32 TemplateID; // 0x38
		::MoleMole::Config::BuddyTeamType BuddyTeam; // 0x3C
		::System::Int32 Rank; // 0x40
		::System::Int32 robotID; // 0x44
		::System::Single bornFaceDir; // 0x48
		::System::Boolean createBuddyAsAvatar; // 0x4C
		::System::Boolean isSwitchCtrlByBattleStatus; // 0x4D
		::System::Int32 EquipedPosition; // 0x50
		::System::Int32 Star; // 0x54
		::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType _buddyTeamType_k__BackingField; // 0x58
		::UnityEngine::Vector3 bornPosition; // 0x5C
		::System::Int32 Level; // 0x68

		::System::Void _ctor(::System::Int32 templateID, ::System::Collections::Generic::List_1<::Class_1_A55DC9AE6705F8CA*>* arcanas, ::System::Int32 inRobotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_A55DC9AE6705F8CA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_OFFSET))(this, templateID, arcanas, inRobotID);
		}

		::System::Void _ctor_1(::System::Int32 templateID, ::MoleMole::Config::BuddyTeamType buddyTeam, ::System::Collections::Generic::List_1<::Class_1_A55DC9AE6705F8CA*>* arcanas, ::System::Int32 inRobotID, ::Class_3_D9B49139DBB5CEDE* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::Class_1_A55DC9AE6705F8CA*>*, ::System::Int32, ::Class_3_D9B49139DBB5CEDE*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_1_OFFSET))(this, templateID, buddyTeam, arcanas, inRobotID, serverData);
		}

		::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType get_buddyTeamType()
		{
			return ((::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GET_BUDDYTEAMTYPE_OFFSET))(this);
		}

		::System::Void set_buddyTeamType(::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_SET_BUDDYTEAMTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* get_SkillType2Level()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GET_SKILLTYPE2LEVEL_OFFSET))(this);
		}

		::System::Void set_SkillType2Level(::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_9FBDB47166F97B2B, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_SET_SKILLTYPE2LEVEL_OFFSET))(this, value);
		}

		::System::Void Init(::System::Int32 templateID, ::MoleMole::Config::BuddyTeamType buddyTeam, ::System::Collections::Generic::List_1<::Class_1_A55DC9AE6705F8CA*>* arcanas, ::System::Int32 inRobotID, ::Class_3_D9B49139DBB5CEDE* buddyServerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::Class_1_A55DC9AE6705F8CA*>*, ::System::Int32, ::Class_3_D9B49139DBB5CEDE*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_INIT_OFFSET))(this, templateID, buddyTeam, arcanas, inRobotID, buddyServerData);
		}

		::Class_2_6DA22669E4D1C4BF* GetCurBattleBuddyData()
		{
			return ((::Class_2_6DA22669E4D1C4BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GETCURBATTLEBUDDYDATA_OFFSET))(this);
		}

		::System::Int32 GetSkillLevelByType(::Enum_3_9FBDB47166F97B2B type)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GETSKILLLEVELBYTYPE_OFFSET))(this, type);
		}

		static ::System::String* GetBuddyName(::Foundation::AssetPath assetPath)
		{
			return ((::System::String*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GETBUDDYNAME_OFFSET))(assetPath);
		}

		::System::Int32 get_DataItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GET_DATAITEMID_OFFSET))(this);
		}
	};
}
