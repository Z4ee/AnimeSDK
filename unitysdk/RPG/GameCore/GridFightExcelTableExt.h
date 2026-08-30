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

#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_BUILDEFFECTIVELEVELABILITYPARAM_OFFSET UNITYSDK_OFFSET(0x1EE68BF0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_COMPARETRAITSEARCHKEY_OFFSET UNITYSDK_OFFSET(0x1EE697B0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_CREATECOMMONCONSTDATA_OFFSET UNITYSDK_OFFSET(0x1EE67190)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FORCEGETTRAITSEARCHKEY_OFFSET UNITYSDK_OFFSET(0x1EE698A0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FULLAFFIXMAZEBUFFS_OFFSET UNITYSDK_OFFSET(0x1EE69DA0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETACTIVETRAITINFOSTR_OFFSET UNITYSDK_OFFSET(0x1EE69960)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAUGMENTKEY_OFFSET UNITYSDK_OFFSET(0x1EE69750)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAVATARTRAITINFO_OFFSET UNITYSDK_OFFSET(0x1EE69B40)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETEQUIPMERGEID_OFFSET UNITYSDK_OFFSET(0x1EE688C0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1EE692A0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYER_OFFSET UNITYSDK_OFFSET(0x1EE68D70)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETINTEGRATEDTRAITLAYERS_OFFSET UNITYSDK_OFFSET(0x1EE69040)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETLAYERTRAITMAZEBUFFENHANCELIST_OFFSET UNITYSDK_OFFSET(0x1EE693C0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSLAYER_OFFSET UNITYSDK_OFFSET(0x1EE69510)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSSUBPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1EE69420)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITEFFECTIDBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1EE692E0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITKEY_OFFSET UNITYSDK_OFFSET(0x1EE696B0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITLVBYACTIVELAYER_OFFSET UNITYSDK_OFFSET(0x1EE68CE0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETVALIDBACKENDAVATARSTARROW_OFFSET UNITYSDK_OFFSET(0x1EE69930)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_HASTRAITBINDING_OFFSET UNITYSDK_OFFSET(0x1EE68C60)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EE68CA0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_TRYLEVELUP_OFFSET UNITYSDK_OFFSET(0x1EE68CC0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CHECKLAYERACTVATION_OFFSET UNITYSDK_OFFSET(0x1EE68F80)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CONSTMAPTOABILITYDATA_OFFSET UNITYSDK_OFFSET(0x1EE684D0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTARRAY_OFFSET UNITYSDK_OFFSET(0x1EE68300)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTFIXPOINT_OFFSET UNITYSDK_OFFSET(0x1EE68470)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTINT_OFFSET UNITYSDK_OFFSET(0x1EE683F0)
#define RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTUINT_OFFSET UNITYSDK_OFFSET(0x1EE68370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightExcelTableExt_TypeDefinitionIndex = 15300;

	class GridFightExcelTableExt : public ::System::Object
	{
	public:
		static ::Class_1_8EA2534C822D9706* CreateCommonConstData()
		{
			return ((::Class_1_8EA2534C822D9706*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_CREATECOMMONCONSTDATA_OFFSET))();
		}

		static ::System::UInt32 _GetConstUint(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTUINT_OFFSET))(a1);
		}

		static ::System::Int32 _GetConstInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTINT_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint _GetConstFixPoint(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTFIXPOINT_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* _GetConstArray(::System::String* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__GETCONSTARRAY_OFFSET))(a1);
		}

		static ::System::Void _ConstMapToAbilityData(::System::String* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CONSTMAPTOABILITYDATA_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetEquipMergeId(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETEQUIPMERGEID_OFFSET))(a1);
		}

		static ::System::Tuple_3<::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* BuildEffectiveLevelAbilityParam(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Tuple_3<::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_BUILDEFFECTIVELEVELABILITYPARAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasTraitBinding(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_HASTRAITBINDING_OFFSET))(a1);
		}

		static ::System::Boolean IsValid(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_ISVALID_OFFSET))(a1);
		}

		static ::System::Boolean TryLevelUp(::RPG::GameCore::GridFightLevelConfigRow* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightLevelConfigRow*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_TRYLEVELUP_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetTraitLvByActiveLayer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITLVBYACTIVELAYER_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetHighestTraitLayer(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYER_OFFSET))(a1, a2, a3);
		}

		static ::RPG::PoolList_1<::System::UInt32>* GetIntegratedTraitLayers(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETINTEGRATEDTRAITLAYERS_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckLayerActvation(::RPG::GameCore::GridFightActivationType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightActivationType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT__CHECKLAYERACTVATION_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GridFightTraitLayerConfigRow* GetHighestTraitLayerConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitLayerConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETHIGHESTTRAITLAYERCONFIG_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetTraitEffectIDByEffectType(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitEffectType a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITEFFECTIDBYEFFECTTYPE_OFFSET))(a1, a2);
		}

		static ::RPG::PoolList_1<::System::UInt32>* GetLayerTraitMazeBuffEnhanceList(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETLAYERTRAITMAZEBUFFENHANCELIST_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::RPG::GameCore::FixPoint>* GetTraitBonusSubParamList(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightTraitBonusType a3)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSSUBPARAMLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetTraitBonusLayer(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::GridFightTraitBonusType a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITBONUSLAYER_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetTraitKey(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETTRAITKEY_OFFSET))(a1, a2);
		}

		static ::System::String* GetAugmentKey(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAUGMENTKEY_OFFSET))(a1);
		}

		static ::System::Boolean CompareTraitSearchKey(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_COMPARETRAITSEARCHKEY_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ForceGetTraitSearchKey(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FORCEGETTRAITSEARCHKEY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightRoleStarConfigRow* GetValidBackendAvatarStarRow(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightRoleStarConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETVALIDBACKENDAVATARSTARROW_OFFSET))(a1, a2);
		}

		static ::System::Void GetActiveTraitInfoStr(::System::UInt32 a1, ::System::UInt32 a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETACTIVETRAITINFOSTR_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAvatarTraitInfo(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_GETAVATARTRAITINFO_OFFSET))(a1);
		}

		static ::System::Void FullAffixMazeBuffs(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXCELTABLEEXT_FULLAFFIXMAZEBUFFS_OFFSET))(a1, a2);
		}
	};
}
