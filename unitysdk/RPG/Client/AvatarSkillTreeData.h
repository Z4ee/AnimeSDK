#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_47;
class Class_1_D17272E82AE804C2_13;
namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARSKILLTREEDATA_BUILDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0x9DBA720)
#define RPG_CLIENT_AVATARSKILLTREEDATA_BUILDSPECIALAVATARSKILLTREE_OFFSET UNITYSDK_OFFSET(0x9DBA530)
#define RPG_CLIENT_AVATARSKILLTREEDATA_COPYSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0x9DBB4C0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GENERATESKILLTREEPOINTDATA_OFFSET UNITYSDK_OFFSET(0x9DBA320)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GETRECOMMENDPOINTS_OFFSET UNITYSDK_OFFSET(0x9DBDFA0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x9DBA2C0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLPOINTLEVEL_OFFSET UNITYSDK_OFFSET(0x9DBDCD0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLTREEPOINTLEVELBYANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x9DBDBA0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLTREEPOINTLEVEL_OFFSET UNITYSDK_OFFSET(0x9DA7780)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9DBE460)
#define RPG_CLIENT_AVATARSKILLTREEDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x9DBE480)
#define RPG_CLIENT_AVATARSKILLTREEDATA_ISSKILLTREEMAX_OFFSET UNITYSDK_OFFSET(0x9DBDD60)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SETINITIALSKILLS_OFFSET UNITYSDK_OFFSET(0x9DBB780)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SETINITIALSKILLTREEDATA_OFFSET UNITYSDK_OFFSET(0x9DBD450)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SETULTIMATESKILLS_OFFSET UNITYSDK_OFFSET(0x9DBCAB0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SETULTIMATESKILLTREEDATA_OFFSET UNITYSDK_OFFSET(0x9DBD800)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9DBE470)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x9DBE490)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x9DBBE40)
#define RPG_CLIENT_AVATARSKILLTREEDATA_SYNCSKILLTREE_OFFSET UNITYSDK_OFFSET(0x9DB95E0)
#define RPG_CLIENT_AVATARSKILLTREEDATA_UPDATESKILLTREELEVELS_OFFSET UNITYSDK_OFFSET(0x9DBC680)
#define RPG_CLIENT_AVATARSKILLTREEDATA__BUILDANCHORTYPE2POINTID_OFFSET UNITYSDK_OFFSET(0x9DBC450)
#define RPG_CLIENT_AVATARSKILLTREEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DBE4A0)
#define RPG_CLIENT_AVATARSKILLTREEDATA__GETMAXLEVELLIST_OFFSET UNITYSDK_OFFSET(0x9DBD220)
#define RPG_CLIENT_AVATARSKILLTREEDATA__GETSKILLTREEPOINTSUITLEVEL_OFFSET UNITYSDK_OFFSET(0x9DBE330)
#define RPG_CLIENT_AVATARSKILLTREEDATA__OVERRIDESKILLHIDEINUI_OFFSET UNITYSDK_OFFSET(0x9DB9EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkillTreeData_TypeDefinitionIndex = 57654;

	class AvatarSkillTreeData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__MaxLevelList()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeData_TypeDefinitionIndex)->GetStaticField(0x355B0);
		}
		// static const ::System::String* _MAX_LEVEL_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SkillLevels; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>* _PointIDOfAnchorType; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SkillTreeLevels; // 0x20
		::RPG::GameCore::AvatarBaseType _BelongAvatarBaseType; // 0x28
		::System::UInt32 _EnhancedID_k__BackingField; // 0x2C
		::System::UInt32 _AvatarID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncSkillTree(::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_13*>* skillTreeList, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_13*>*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SYNCSKILLTREE_OFFSET))(this, skillTreeList, avatarData);
		}

		::System::Single GetSkillCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLCOMBATPOWER_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_7AB88D713F5121B3_47*>* GenerateSkillTreePointData()
		{
			return ((::Il2CppArray<::Class_1_7AB88D713F5121B3_47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GENERATESKILLTREEPOINTDATA_OFFSET))(this);
		}

		::System::Void BuildSpecialAvatarSkillTree(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_BUILDSPECIALAVATARSKILLTREE_OFFSET))(this, avatarData);
		}

		static ::System::Void BuildSkillLevels(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& skillLevels, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* skillTreeLevels, ::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_BUILDSKILLLEVELS_OFFSET))(skillLevels, skillTreeLevels, avatarData);
		}

		::System::Void CopySkillLevels(::RPG::Client::AvatarSkillTreeData* skillTreeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarSkillTreeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_COPYSKILLLEVELS_OFFSET))(this, skillTreeData);
		}

		::System::Void SetInitialSkills(::RPG::GameCore::IAvatarCommonRowWrap* avatarRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SETINITIALSKILLS_OFFSET))(this, avatarRow);
		}

		::System::Void SwitchAvatar(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SWITCHAVATAR_OFFSET))(this, avatarData);
		}

		::System::Void UpdateSkillTreeLevels(::RPG::Client::AvatarSkillTreeData* skillTreeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarSkillTreeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_UPDATESKILLTREELEVELS_OFFSET))(this, skillTreeData);
		}

		::System::Void SetUltimateSkills(::RPG::GameCore::IAvatarCommonRowWrap* avatarRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SETULTIMATESKILLS_OFFSET))(this, avatarRow);
		}

		::System::Void SetInitialSkillTreeData(::RPG::GameCore::IAvatarCommonRowWrap* avatarRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SETINITIALSKILLTREEDATA_OFFSET))(this, avatarRow);
		}

		::System::Void SetUltimateSkillTreeData(::RPG::GameCore::IAvatarCommonRowWrap* avatarRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SETULTIMATESKILLTREEDATA_OFFSET))(this, avatarRow);
		}

		::System::UInt32 GetSkillTreePointLevel(::System::UInt32 pointID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLTREEPOINTLEVEL_OFFSET))(this, pointID);
		}

		::System::UInt32 GetSkillTreePointLevelByAnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType anchorType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLTREEPOINTLEVELBYANCHORTYPE_OFFSET))(this, anchorType);
		}

		::System::UInt32 GetSkillPointLevel(::System::UInt32 skillID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GETSKILLPOINTLEVEL_OFFSET))(this, skillID);
		}

		::System::Boolean IsSkillTreeMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_ISSKILLTREEMAX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillTreeRow*>* GetRecommendPoints(::System::UInt32 avatarID, ::System::UInt32 enhancedID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillTreeRow*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GETRECOMMENDPOINTS_OFFSET))(this, avatarID, enhancedID);
		}

		::System::UInt32 _GetSkillTreePointSuitLevel(::System::UInt32 pointID, ::System::UInt32 avatarLevel, ::System::UInt32 avatarPromotion)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA__GETSKILLTREEPOINTSUITLEVEL_OFFSET))(this, pointID, avatarLevel, avatarPromotion);
		}

		::Il2CppArray<::System::UInt32>* _GetMaxLevelList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA__GETMAXLEVELLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>* _BuildAnchorType2PointID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA__BUILDANCHORTYPE2POINTID_OFFSET))(this);
		}

		::System::Void _OverrideSkillHideInUI(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA__OVERRIDESKILLHIDEINUI_OFFSET))(this, avatarData);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA_SET_ENHANCEDID_OFFSET))(this, value);
		}
	};
}
