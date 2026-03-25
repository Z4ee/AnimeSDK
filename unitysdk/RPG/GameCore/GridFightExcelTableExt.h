#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_8EA2534C822D9706;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class GridFightLevelConfigRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }
namespace RPG::GameCore { class GridFightTraitLayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_BUILDEFFECTIVELEVELABILITYPARAM_OFFSET UNITYSDK_OFFSET(0x1725CC20)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_COMPARETRAITSEARCHKEY_OFFSET UNITYSDK_OFFSET(0x1725D870)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_CREATECOMMONCONSTDATA_OFFSET UNITYSDK_OFFSET(0x1725B010)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FORCEGETTRAITSEARCHKEY_OFFSET UNITYSDK_OFFSET(0x1725D960)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FULLAFFIXMAZEBUFFS_OFFSET UNITYSDK_OFFSET(0x1725DDF0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETACTIVETRAITINFOSTR_OFFSET UNITYSDK_OFFSET(0x1725DA20)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAUGMENTKEY_OFFSET UNITYSDK_OFFSET(0x1725D810)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAVATARTRAITINFO_OFFSET UNITYSDK_OFFSET(0x1725DBE0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETEQUIPMERGEID_OFFSET UNITYSDK_OFFSET(0x1725C900)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1725D3C0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYER_OFFSET UNITYSDK_OFFSET(0x1725CD80)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETINTEGRATEDTRAITLAYERS_OFFSET UNITYSDK_OFFSET(0x1725D010)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETLAYERTRAITMAZEBUFFENHANCELIST_OFFSET UNITYSDK_OFFSET(0x1725D4E0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSLAYER_OFFSET UNITYSDK_OFFSET(0x1725D600)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSSUBPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1725D530)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITEFFECTIDBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1725D400)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITKEY_OFFSET UNITYSDK_OFFSET(0x1725D770)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITLVBYACTIVELAYER_OFFSET UNITYSDK_OFFSET(0x1725CD10)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETVALIDBACKENDAVATARSTARROW_OFFSET UNITYSDK_OFFSET(0x1725D9F0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_HASTRAITBINDING_OFFSET UNITYSDK_OFFSET(0x1725CC90)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1725CCD0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_TRYLEVELUP_OFFSET UNITYSDK_OFFSET(0x1725CCF0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CHECKLAYERACTVATION_OFFSET UNITYSDK_OFFSET(0x1725CF50)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CONSTMAPTOABILITYDATA_OFFSET UNITYSDK_OFFSET(0x1725C530)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTARRAY_OFFSET UNITYSDK_OFFSET(0x1725C320)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTFIXPOINT_OFFSET UNITYSDK_OFFSET(0x1725C490)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTINT_OFFSET UNITYSDK_OFFSET(0x1725C410)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTUINT_OFFSET UNITYSDK_OFFSET(0x1725C390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightExcelTableExt_TypeDefinitionIndex = 22638;

	class GridFightExcelTableExt : public ::System::Object
	{
	public:
		static ::Class_1_8EA2534C822D9706* CreateCommonConstData()
		{
			return ((::Class_1_8EA2534C822D9706*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_CREATECOMMONCONSTDATA_OFFSET))();
		}

		static ::System::UInt32 _GetConstUint(::System::String* key)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTUINT_OFFSET))(key);
		}

		static ::System::Int32 _GetConstInt(::System::String* key)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTINT_OFFSET))(key);
		}

		static ::RPG::GameCore::FixPoint _GetConstFixPoint(::System::String* key)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTFIXPOINT_OFFSET))(key);
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* _GetConstArray(::System::String* key)
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTARRAY_OFFSET))(key);
		}

		static ::System::Void _ConstMapToAbilityData(::System::String* key, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>>* receiver)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CONSTMAPTOABILITYDATA_OFFSET))(key, receiver);
		}

		static ::System::UInt32 GetEquipMergeId(::System::Collections::Generic::List_1<::System::UInt32>* consumeEquipIds)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETEQUIPMERGEID_OFFSET))(consumeEquipIds);
		}

		static ::System::Tuple_3<::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* BuildEffectiveLevelAbilityParam(::System::UInt32 avatarId, ::System::UInt32 star, ::System::Boolean inFrontPreset)
		{
			return ((::System::Tuple_3<::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_BUILDEFFECTIVELEVELABILITYPARAM_OFFSET))(avatarId, star, inFrontPreset);
		}

		static ::System::Boolean HasTraitBinding(::RPG::GameCore::GridFightRoleConfigRow* configRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_HASTRAITBINDING_OFFSET))(configRow);
		}

		static ::System::Boolean IsValid(::RPG::GameCore::GridFightRoleConfigRow* configRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_ISVALID_OFFSET))(configRow);
		}

		static ::System::Boolean TryLevelUp(::RPG::GameCore::GridFightLevelConfigRow* configRow, ::System::UInt32& exp)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightLevelConfigRow*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_TRYLEVELUP_OFFSET))(configRow, exp);
		}

		static ::System::UInt32 GetTraitLvByActiveLayer(::System::UInt32 traitID, ::System::UInt32 activeLayer)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITLVBYACTIVELAYER_OFFSET))(traitID, activeLayer);
		}

		static ::System::UInt32 GetHighestTraitLayer(::System::UInt32 traitID, ::System::UInt32 activeCount, ::System::Boolean inactiveUseFirstLayer)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYER_OFFSET))(traitID, activeCount, inactiveUseFirstLayer);
		}

		static ::RPG::PoolList_1<::System::UInt32>* GetIntegratedTraitLayers(::System::UInt32 traitID, ::System::UInt32 activeCount)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETINTEGRATEDTRAITLAYERS_OFFSET))(traitID, activeCount);
		}

		static ::System::Boolean _CheckLayerActvation(::RPG::GameCore::GridFightActivationType activationType, ::System::UInt32 activeCount, ::System::UInt32 layer)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightActivationType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CHECKLAYERACTVATION_OFFSET))(activationType, activeCount, layer);
		}

		static ::RPG::GameCore::GridFightTraitLayerConfigRow* GetHighestTraitLayerConfig(::System::UInt32 traitID, ::System::UInt32 activeCount)
		{
			return ((::RPG::GameCore::GridFightTraitLayerConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYERCONFIG_OFFSET))(traitID, activeCount);
		}

		static ::System::UInt32 GetTraitEffectIDByEffectType(::System::UInt32 traitID, ::RPG::GameCore::GridFightTraitEffectType traitEffectType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITEFFECTIDBYEFFECTTYPE_OFFSET))(traitID, traitEffectType);
		}

		static ::RPG::PoolList_1<::System::UInt32>* GetLayerTraitMazeBuffEnhanceList(::System::UInt32 traitID, ::System::UInt32 layerCount)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETLAYERTRAITMAZEBUFFENHANCELIST_OFFSET))(traitID, layerCount);
		}

		static ::Il2CppArray<::RPG::GameCore::FixPoint>* GetTraitBonusSubParamList(::System::UInt32 traitBonusID, ::System::UInt32 bonusCounter, ::RPG::GameCore::GridFightTraitBonusType bonusSubType)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSSUBPARAMLIST_OFFSET))(traitBonusID, bonusCounter, bonusSubType);
		}

		static ::System::Int32 GetTraitBonusLayer(::System::UInt32 traitBonusID, ::System::Int32 bonusCounter, ::RPG::GameCore::GridFightTraitBonusType bonusType)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSLAYER_OFFSET))(traitBonusID, bonusCounter, bonusType);
		}

		static ::System::String* GetTraitKey(::System::UInt32 traitID, ::System::Boolean isSubTrait)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITKEY_OFFSET))(traitID, isSubTrait);
		}

		static ::System::String* GetAugmentKey(::System::UInt32 augmentID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAUGMENTKEY_OFFSET))(augmentID);
		}

		static ::System::Boolean CompareTraitSearchKey(::System::String* keyWrapper, ::System::UInt32 traitID, ::System::UInt32 subTraitID)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_COMPARETRAITSEARCHKEY_OFFSET))(keyWrapper, traitID, subTraitID);
		}

		static ::System::String* ForceGetTraitSearchKey(::System::UInt32 traitID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FORCEGETTRAITSEARCHKEY_OFFSET))(traitID);
		}

		static ::RPG::GameCore::GridFightRoleStarConfigRow* GetValidBackendAvatarStarRow(::System::UInt32 index, ::System::UInt32 avatarStar)
		{
			return ((::RPG::GameCore::GridFightRoleStarConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETVALIDBACKENDAVATARSTARROW_OFFSET))(index, avatarStar);
		}

		static ::System::Void GetActiveTraitInfoStr(::System::UInt32 traitID, ::System::UInt32 activeCount, ::System::Text::StringBuilder* stringBuilder)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETACTIVETRAITINFOSTR_OFFSET))(traitID, activeCount, stringBuilder);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAvatarTraitInfo(::RPG::GameCore::GridFightRoleConfigRow* configRow)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAVATARTRAITINFO_OFFSET))(configRow);
		}

		static ::System::Void FullAffixMazeBuffs(::System::UInt32 affixID, ::System::Collections::Generic::List_1<::System::UInt32>* mazeBuffList)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FULLAFFIXMAZEBUFFS_OFFSET))(affixID, mazeBuffList);
		}
	};
}
