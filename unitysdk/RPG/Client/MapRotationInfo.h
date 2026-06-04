#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/Struct_2_313DB38E01B148C7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace RPG::GameCore { class MapRotationConfig; }
namespace RPG::GameCore { class MapRotationGroupConfig; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace RPG::GameCore { class RotatableRegion; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_MAPROTATIONINFO_COMPUTEROTATIONBYYAWONPOSE_OFFSET UNITYSDK_OFFSET(0xBEEC280)
#define RPG_CLIENT_MAPROTATIONINFO_COMPUTETARGETROTATION_OFFSET UNITYSDK_OFFSET(0xBEEBED0)
#define RPG_CLIENT_MAPROTATIONINFO_GETCURRENTPOSEINITROTATION_OFFSET UNITYSDK_OFFSET(0xBEEC480)
#define RPG_CLIENT_MAPROTATIONINFO_GETOPPOSITEPOSE_OFFSET UNITYSDK_OFFSET(0xBEEC600)
#define RPG_CLIENT_MAPROTATIONINFO_GETPOSEFROMGROUPID_OFFSET UNITYSDK_OFFSET(0xBEEC7F0)
#define RPG_CLIENT_MAPROTATIONINFO_GETPOSEINITROTATION_OFFSET UNITYSDK_OFFSET(0xBEEC500)
#define RPG_CLIENT_MAPROTATIONINFO_GETPOSEUPVECTOR_OFFSET UNITYSDK_OFFSET(0xBEEC050)
#define RPG_CLIENT_MAPROTATIONINFO_GETREGIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEEC770)
#define RPG_CLIENT_MAPROTATIONINFO_GETROTATABLEREGIONBYSTAGEREGION_OFFSET UNITYSDK_OFFSET(0xBEEC8E0)
#define RPG_CLIENT_MAPROTATIONINFO_GETSTAGEREGIONBYROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xBEEC970)
#define RPG_CLIENT_MAPROTATIONINFO_GET_AIRLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA5B0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CHARGERCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA590)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBEEA4C0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTMAPOFFSET_OFFSET UNITYSDK_OFFSET(0xBEEA450)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTPOSEINDEX_OFFSET UNITYSDK_OFFSET(0xBEEA410)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTREGIONINDEX_OFFSET UNITYSDK_OFFSET(0xBEEA4D0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTROTATION_OFFSET UNITYSDK_OFFSET(0xBEEA430)
#define RPG_CLIENT_MAPROTATIONINFO_GET_GROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA5D0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_GROUPIDTOMAPPOSE_OFFSET UNITYSDK_OFFSET(0xBEEA510)
#define RPG_CLIENT_MAPROTATIONINFO_GET_ISALLVOLUMEALWAYSDEPLOY_OFFSET UNITYSDK_OFFSET(0xBEEA4A0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_MAPPOSETOGROUP_OFFSET UNITYSDK_OFFSET(0xBEEA4F0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_POSEPERMANENTGROUPS_OFFSET UNITYSDK_OFFSET(0xBEEA550)
#define RPG_CLIENT_MAPROTATIONINFO_GET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEEA480)
#define RPG_CLIENT_MAPROTATIONINFO_GET_REGIONTOGROUP_OFFSET UNITYSDK_OFFSET(0xBEEA530)
#define RPG_CLIENT_MAPROTATIONINFO_GET_ROTATABLEREGIONTOSTAGEREGION_OFFSET UNITYSDK_OFFSET(0xBEEA610)
#define RPG_CLIENT_MAPROTATIONINFO_GET_STAGEREGIONTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xBEEA5F0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_VOLUMECONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA570)
#define RPG_CLIENT_MAPROTATIONINFO_HANDLEWORLDSHIFT_OFFSET UNITYSDK_OFFSET(0xBEEC6A0)
#define RPG_CLIENT_MAPROTATIONINFO_ISPOSEPERMANENTGROUP_OFFSET UNITYSDK_OFFSET(0xBEEC880)
#define RPG_CLIENT_MAPROTATIONINFO_SETCURRENTACTIVEREGION_OFFSET UNITYSDK_OFFSET(0xBEEBDE0)
#define RPG_CLIENT_MAPROTATIONINFO_SETCURRENTPOSE_OFFSET UNITYSDK_OFFSET(0xBEEA780)
#define RPG_CLIENT_MAPROTATIONINFO_SET_AIRLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA5C0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CHARGERCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA5A0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTMAPOFFSET_OFFSET UNITYSDK_OFFSET(0xBEEA470)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTPOSEINDEX_OFFSET UNITYSDK_OFFSET(0xBEEA420)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTREGIONINDEX_OFFSET UNITYSDK_OFFSET(0xBEEA4E0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTROTATION_OFFSET UNITYSDK_OFFSET(0xBEEA440)
#define RPG_CLIENT_MAPROTATIONINFO_SET_GROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA5E0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_GROUPIDTOMAPPOSE_OFFSET UNITYSDK_OFFSET(0xBEEA520)
#define RPG_CLIENT_MAPROTATIONINFO_SET_ISALLVOLUMEALWAYSDEPLOY_OFFSET UNITYSDK_OFFSET(0xBEEA4B0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_MAPPOSETOGROUP_OFFSET UNITYSDK_OFFSET(0xBEEA500)
#define RPG_CLIENT_MAPROTATIONINFO_SET_POSEPERMANENTGROUPS_OFFSET UNITYSDK_OFFSET(0xBEEA560)
#define RPG_CLIENT_MAPROTATIONINFO_SET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEEA490)
#define RPG_CLIENT_MAPROTATIONINFO_SET_REGIONTOGROUP_OFFSET UNITYSDK_OFFSET(0xBEEA540)
#define RPG_CLIENT_MAPROTATIONINFO_SET_ROTATABLEREGIONTOSTAGEREGION_OFFSET UNITYSDK_OFFSET(0xBEEA620)
#define RPG_CLIENT_MAPROTATIONINFO_SET_STAGEREGIONTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xBEEA600)
#define RPG_CLIENT_MAPROTATIONINFO_SET_VOLUMECONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEA580)
#define RPG_CLIENT_MAPROTATIONINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEECA00)
#define RPG_CLIENT_MAPROTATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBEEA630)
#define RPG_CLIENT_MAPROTATIONINFO__INITAIRLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEB2D0)
#define RPG_CLIENT_MAPROTATIONINFO__INITCHARGERCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEB120)
#define RPG_CLIENT_MAPROTATIONINFO__INITGROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEB990)
#define RPG_CLIENT_MAPROTATIONINFO__INITMAPPOSETOGROUP_OFFSET UNITYSDK_OFFSET(0xBEEA810)
#define RPG_CLIENT_MAPROTATIONINFO__INITPOSEPERMANENTGROUPS_OFFSET UNITYSDK_OFFSET(0xBEEB4E0)
#define RPG_CLIENT_MAPROTATIONINFO__INITREGIONTOGROUP_OFFSET UNITYSDK_OFFSET(0xBEEB680)
#define RPG_CLIENT_MAPROTATIONINFO__INITSTAGEREGIONMAPPING_OFFSET UNITYSDK_OFFSET(0xBEEBC00)
#define RPG_CLIENT_MAPROTATIONINFO__INITVOLUMECONFIGS_OFFSET UNITYSDK_OFFSET(0xBEEAF00)

namespace RPG::Client
{
	inline static constexpr unsigned int MapRotationInfo_TypeDefinitionIndex = 58125;

	class MapRotationInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Struct_2_313DB38E01B148C7>** StaticGet_s_Poses()
		{
			return (::Il2CppArray<::Struct_2_313DB38E01B148C7>**)Il2CppClass::FromTypeDefinitionIndex(MapRotationInfo_TypeDefinitionIndex)->GetStaticField(0x53D00);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _RotatableRegionToStageRegion_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _MapPoseToGroup_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PosePermanentGroups_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _StageRegionToRotatableRegion_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>* _GroupConfigs_k__BackingField; // 0x30
		::RPG::GameCore::RotatableRegion* _RegionConfig_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* _VolumeConfigs_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>* _AirlockConfigs_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupIDToMapPose_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _ChargerConfigs_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _RegionToGroup_k__BackingField; // 0x60
		::RPG::GameCore::MapRotationConfig* _Config_k__BackingField; // 0x68
		::System::UInt32 _CurrentPoseIndex_k__BackingField; // 0x70
		::UnityEngine::Vector3 _CurrentMapOffset_k__BackingField; // 0x74
		::UnityEngine::Quaternion _CurrentRotation_k__BackingField; // 0x80
		::System::Boolean _IsAllVolumeAlwaysDeploy_k__BackingField; // 0x90
		::System::Int32 _CurrentRegionIndex_k__BackingField; // 0x94

		::System::Void _ctor(::RPG::GameCore::MapRotationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__CCTOR_OFFSET))();
		}

		::System::UInt32 get_CurrentPoseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTPOSEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentPoseIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTPOSEINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_CurrentRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTROTATION_OFFSET))(this);
		}

		::System::Void set_CurrentRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrentMapOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTMAPOFFSET_OFFSET))(this);
		}

		::System::Void set_CurrentMapOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTMAPOFFSET_OFFSET))(this, a1);
		}

		::RPG::GameCore::RotatableRegion* get_RegionConfig()
		{
			return ((::RPG::GameCore::RotatableRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_REGIONCONFIG_OFFSET))(this);
		}

		::System::Void set_RegionConfig(::RPG::GameCore::RotatableRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_REGIONCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllVolumeAlwaysDeploy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_ISALLVOLUMEALWAYSDEPLOY_OFFSET))(this);
		}

		::System::Void set_IsAllVolumeAlwaysDeploy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_ISALLVOLUMEALWAYSDEPLOY_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationConfig* get_Config()
		{
			return ((::RPG::GameCore::MapRotationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CONFIG_OFFSET))(this);
		}

		::System::Int32 get_CurrentRegionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTREGIONINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentRegionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTREGIONINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_MapPoseToGroup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_MAPPOSETOGROUP_OFFSET))(this);
		}

		::System::Void set_MapPoseToGroup(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_MAPPOSETOGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_GroupIDToMapPose()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_GROUPIDTOMAPPOSE_OFFSET))(this);
		}

		::System::Void set_GroupIDToMapPose(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_GROUPIDTOMAPPOSE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_RegionToGroup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_REGIONTOGROUP_OFFSET))(this);
		}

		::System::Void set_RegionToGroup(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_REGIONTOGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PosePermanentGroups()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_POSEPERMANENTGROUPS_OFFSET))(this);
		}

		::System::Void set_PosePermanentGroups(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_POSEPERMANENTGROUPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* get_VolumeConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_VOLUMECONFIGS_OFFSET))(this);
		}

		::System::Void set_VolumeConfigs(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_VOLUMECONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* get_ChargerConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CHARGERCONFIGS_OFFSET))(this);
		}

		::System::Void set_ChargerConfigs(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CHARGERCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>* get_AirlockConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_AIRLOCKCONFIGS_OFFSET))(this);
		}

		::System::Void set_AirlockConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_AIRLOCKCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>* get_GroupConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_GROUPCONFIGS_OFFSET))(this);
		}

		::System::Void set_GroupConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_GROUPCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* get_StageRegionToRotatableRegion()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_STAGEREGIONTOROTATABLEREGION_OFFSET))(this);
		}

		::System::Void set_StageRegionToRotatableRegion(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_STAGEREGIONTOROTATABLEREGION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* get_RotatableRegionToStageRegion()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_ROTATABLEREGIONTOSTAGEREGION_OFFSET))(this);
		}

		::System::Void set_RotatableRegionToStageRegion(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_ROTATABLEREGIONTOSTAGEREGION_OFFSET))(this, a1);
		}

		::System::Void SetCurrentPose(::System::UInt32 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SETCURRENTPOSE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion ComputeTargetRotation(::System::UInt32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_COMPUTETARGETROTATION_OFFSET))(this, a1);
		}

		static ::UnityEngine::Quaternion ComputeRotationByYawOnPose(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_COMPUTEROTATIONBYYAWONPOSE_OFFSET))(a1, a2);
		}

		::UnityEngine::Quaternion GetCurrentPoseInitRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETCURRENTPOSEINITROTATION_OFFSET))(this);
		}

		static ::UnityEngine::Quaternion GetPoseInitRotation(::System::UInt32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETPOSEINITROTATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetPoseUpVector(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETPOSEUPVECTOR_OFFSET))(a1);
		}

		static ::System::UInt32 GetOppositePose(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETOPPOSITEPOSE_OFFSET))(a1);
		}

		::System::Void SetCurrentActiveRegion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SETCURRENTACTIVEREGION_OFFSET))(this, a1);
		}

		::System::Void HandleWorldShift(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_HANDLEWORLDSHIFT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::RotatableRegion* GetRegionConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RotatableRegion*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETREGIONCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetPoseFromGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETPOSEFROMGROUPID_OFFSET))(this, a1);
		}

		::System::Boolean IsPosePermanentGroup(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_ISPOSEPERMANENTGROUP_OFFSET))(this, a1);
		}

		::System::Int32 GetRotatableRegionByStageRegion(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETROTATABLEREGIONBYSTAGEREGION_OFFSET))(this, a1);
		}

		::System::UInt32 GetStageRegionByRotatableRegion(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETSTAGEREGIONBYROTATABLEREGION_OFFSET))(this, a1);
		}

		::System::Void _InitMapPoseToGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITMAPPOSETOGROUP_OFFSET))(this);
		}

		::System::Void _InitRegionToGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITREGIONTOGROUP_OFFSET))(this);
		}

		::System::Void _InitPosePermanentGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITPOSEPERMANENTGROUPS_OFFSET))(this);
		}

		::System::Void _InitVolumeConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITVOLUMECONFIGS_OFFSET))(this);
		}

		::System::Void _InitChargerConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITCHARGERCONFIGS_OFFSET))(this);
		}

		::System::Void _InitAirlockConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITAIRLOCKCONFIGS_OFFSET))(this);
		}

		::System::Void _InitGroupConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITGROUPCONFIGS_OFFSET))(this);
		}

		::System::Void _InitStageRegionMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITSTAGEREGIONMAPPING_OFFSET))(this);
		}
	};
}
