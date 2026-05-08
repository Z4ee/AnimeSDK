#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/MonoNotRelateGameLogic/DeviceCarType.h"
#include "unitysdk/NPCCrowd/Accessories/ENPCAccessoryItemType.h"
#include "unitysdk/NPCCrowd/Accessories/ENPCAccessoryMeshType.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class NpcAccessoryVoConfig; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_CLEARUSEDSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0xD23F6B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_ENABLEEXTRAACCESSORIESBYOVERRIDEPARAM_OFFSET UNITYSDK_OFFSET(0xD2434E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATEACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0xD244480)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATEGALGAMENPCACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0xD243C70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATENPCACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0xD243900)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATEOVERRIDEACCESSORYPAIRS_OFFSET UNITYSDK_OFFSET(0xD2431C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYANIMATIONNUMBERBYANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xD242B90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYFOLLOWANIMATIONID_OFFSET UNITYSDK_OFFSET(0xD2429D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYFREEANIMATIONID_OFFSET UNITYSDK_OFFSET(0xD242B30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYID_OFFSET UNITYSDK_OFFSET(0xD242650)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYINFOBYAVATARNAME_OFFSET UNITYSDK_OFFSET(0xD242CD0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYITEMOVERRIDEID_OFFSET UNITYSDK_OFFSET(0xD2427B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYMDBPOSEID_OFFSET UNITYSDK_OFFSET(0xD2428C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GET_FORCESHOWEDACCESSORYITEMTYPES_OFFSET UNITYSDK_OFFSET(0xD2441E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETACCESSORYGPUSLOTLOD_OFFSET UNITYSDK_OFFSET(0xD240AA0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETACCESSORYMDBLOD_OFFSET UNITYSDK_OFFSET(0xD2411B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETACCITEMOVERRIDEMATPARAMSCOMMON_OFFSET UNITYSDK_OFFSET(0xD2412C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETANIMATORLOD_OFFSET UNITYSDK_OFFSET(0xD241240)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETGPUSLOTANIMATIONMATPARAMS_OFFSET UNITYSDK_OFFSET(0xD241720)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETLODASSET_OFFSET UNITYSDK_OFFSET(0xD23F8B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETMESHLOD_OFFSET UNITYSDK_OFFSET(0xD23F820)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITACCESSORYID_OFFSET UNITYSDK_OFFSET(0xD2426C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITACCESSORYITEMOVERRIDEID_OFFSET UNITYSDK_OFFSET(0xD242810)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITACCESSORYMDBPOSEID_OFFSET UNITYSDK_OFFSET(0xD242920)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITFOLLOWACCESSORYID_OFFSET UNITYSDK_OFFSET(0xD242A40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD244C40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xD244C30)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils_TypeDefinitionIndex = 46216;

	class NPCAccessoryUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_TmpMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils_TypeDefinitionIndex)->GetStaticField(0x3D1A0);
		}
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_EmptyMaterials()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils_TypeDefinitionIndex)->GetStaticField(0x3D1A8);
		}
		static ::Il2CppArray<::NPCCrowd::Accessories::ENPCAccessoryItemType>** StaticGet__forceShowedAccessoryItemTypes()
		{
			return (::Il2CppArray<::NPCCrowd::Accessories::ENPCAccessoryItemType>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils_TypeDefinitionIndex)->GetStaticField(0x3D1B0);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_EmptyMpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils_TypeDefinitionIndex)->GetStaticField(0x3D1B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MonoNotRelateGameLogic::DeviceCarType>** StaticGet_StandardDeviceNumberPlateIDSizes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MonoNotRelateGameLogic::DeviceCarType>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils_TypeDefinitionIndex)->GetStaticField(0x3D1C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void ClearUsedSharedMaterials(::UnityEngine::Renderer* r)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_CLEARUSEDSHAREDMATERIALS_OFFSET))(r);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid SetMeshLOD(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Boolean shouldFade)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETMESHLOD_OFFSET))(acc, oldLod, lod, shouldFade);
		}

		static ::System::Void SetLODAsset(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETLODASSET_OFFSET))(acc, lod);
		}

		static ::System::Void SetAccessoryGPUSlotLOD(::NPCCrowd::Accessories::NPCAccessory*& acc, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*&, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETACCESSORYGPUSLOTLOD_OFFSET))(acc, lod);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid SetAccessoryMdbLOD(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::ELODLevel oldLod)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETACCESSORYMDBLOD_OFFSET))(acc, lod, oldLod);
		}

		static ::System::Void SetAnimatorLOD(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshConfig, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETANIMATORLOD_OFFSET))(acc, meshConfig, lod);
		}

		static ::System::Void SetAccItemOverrideMatParamsCommon(::UnityEngine::Renderer* renderer, ::Il2CppArray<::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*>* overridePropertyColorsArray)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::Il2CppArray<::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETACCITEMOVERRIDEMATPARAMSCOMMON_OFFSET))(renderer, overridePropertyColorsArray);
		}

		static ::System::Int32 SetGPUSlotAnimationMatParams(::UnityEngine::Renderer* renderer, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator, ::System::Int32 SlotNameHash, ::System::Boolean bOverrideDefaultSlotOffset, ::UnityEngine::Vector3 offsetPos, ::UnityEngine::Quaternion offsetRot, ::UnityEngine::Vector3 gpuAdditionalFollowOffsetPos, ::UnityEngine::Quaternion gpuAdditionalFollowOffsetRotation)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*, ::NPCCrowd::Animation::NPCUnionAnimator*, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SETGPUSLOTANIMATIONMATPARAMS_OFFSET))(renderer, unionAnimator, SlotNameHash, bOverrideDefaultSlotOffset, offsetPos, offsetRot, gpuAdditionalFollowOffsetPos, gpuAdditionalFollowOffsetRotation);
		}

		static ::System::Int32 GetAccessoryID(::NPCCrowd::Accessories::ENPCAccessoryItemType itemType, ::NPCCrowd::Accessories::ENPCAccessoryMeshType meshType, ::System::UInt16 meshNumberID)
		{
			return ((::System::Int32(*)(::NPCCrowd::Accessories::ENPCAccessoryItemType, ::NPCCrowd::Accessories::ENPCAccessoryMeshType, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYID_OFFSET))(itemType, meshType, meshNumberID);
		}

		static ::System::Void SplitAccessoryID(::System::Int32 id, ::NPCCrowd::Accessories::ENPCAccessoryItemType& itemType, ::NPCCrowd::Accessories::ENPCAccessoryMeshType& meshType, ::System::UInt16& meshNumberID)
		{
			return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Accessories::ENPCAccessoryItemType&, ::NPCCrowd::Accessories::ENPCAccessoryMeshType&, ::System::UInt16&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITACCESSORYID_OFFSET))(id, itemType, meshType, meshNumberID);
		}

		static ::System::Int32 GetAccessoryItemOverrideID(::NPCCrowd::Accessories::ENPCAccessoryItemType itemType, ::System::UInt16 meshNumberID)
		{
			return ((::System::Int32(*)(::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYITEMOVERRIDEID_OFFSET))(itemType, meshNumberID);
		}

		static ::System::Void SplitAccessoryItemOverrideID(::System::Int32 id, ::NPCCrowd::Accessories::ENPCAccessoryItemType& itemType, ::System::UInt16& number)
		{
			return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Accessories::ENPCAccessoryItemType&, ::System::UInt16&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITACCESSORYITEMOVERRIDEID_OFFSET))(id, itemType, number);
		}

		static ::System::Int32 GetAccessoryMDBPoseID(::NPCCrowd::Accessories::ENPCAccessoryItemType itemType, ::System::UInt16 meshNumberID)
		{
			return ((::System::Int32(*)(::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYMDBPOSEID_OFFSET))(itemType, meshNumberID);
		}

		static ::System::Void SplitAccessoryMDBPoseID(::System::Int32 id, ::NPCCrowd::Accessories::ENPCAccessoryItemType& itemType, ::System::UInt16& number)
		{
			return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Accessories::ENPCAccessoryItemType&, ::System::UInt16&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITACCESSORYMDBPOSEID_OFFSET))(id, itemType, number);
		}

		static ::System::Int32 GetAccessoryFollowAnimationID(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::NPCCrowd::Accessories::ENPCAccessoryItemType itemType, ::System::UInt16 meshNumberID)
		{
			return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYFOLLOWANIMATIONID_OFFSET))(gender, size, itemType, meshNumberID);
		}

		static ::System::Void SplitFollowAccessoryId(::System::Int32 followAnimationId, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size, ::NPCCrowd::Accessories::ENPCAccessoryItemType& itemType)
		{
			return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&, ::NPCCrowd::Accessories::ENPCAccessoryItemType&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_SPLITFOLLOWACCESSORYID_OFFSET))(followAnimationId, gender, size, itemType);
		}

		static ::System::Int32 GetAccessoryFreeAnimationID(::NPCCrowd::Accessories::ENPCAccessoryItemType itemType, ::System::UInt16 meshNumberID)
		{
			return ((::System::Int32(*)(::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYFREEANIMATIONID_OFFSET))(itemType, meshNumberID);
		}

		static ::System::Void GetAccessoryAnimationNumberByAnimationName(::System::String* name, ::System::UInt16& AnimationNumber)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYANIMATIONNUMBERBYANIMATIONNAME_OFFSET))(name, AnimationNumber);
		}

		static ::System::Void GetAccessoryInfoByAvatarName(::System::String* name, ::NPCCrowd::Accessories::ENPCAccessoryItemType& itemType, ::NPCCrowd::Accessories::ENPCAccessoryMeshType& meshType, ::System::UInt16& meshNumberID)
		{
			return ((::System::Void(*)(::System::String*, ::NPCCrowd::Accessories::ENPCAccessoryItemType&, ::NPCCrowd::Accessories::ENPCAccessoryMeshType&, ::System::UInt16&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GETACCESSORYINFOBYAVATARNAME_OFFSET))(name, itemType, meshType, meshNumberID);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* GenerateOverrideAccessoryPairs(::System::String* strSlotName)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATEOVERRIDEACCESSORYPAIRS_OFFSET))(strSlotName);
		}

		static ::System::Void EnableExtraAccessoriesByOverrideParam(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* accSlotOverridePairs, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryPartWithIDs, ::System::Collections::Generic::List_1<::System::Int32>* sceneObjectIDs, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_ENABLEEXTRAACCESSORIESBYOVERRIDEPARAM_OFFSET))(accSlotOverridePairs, accessoryPartWithIDs, sceneObjectIDs, accessoryInfos);
		}

		static ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* GenerateNPCAccessoryInfo(::System::String* strSlotName, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryPartWithIDs, ::System::Collections::Generic::List_1<::System::Int32>* sceneObjectIDs)
		{
			return ((::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*(*)(::System::String*, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATENPCACCESSORYINFO_OFFSET))(strSlotName, accessoryPartWithIDs, sceneObjectIDs);
		}

		static ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* GenerateGalgameNPCAccessoryInfo(::System::String* strSlotName, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryPartWithIDs, ::System::Collections::Generic::List_1<::System::Int32>* sceneObjectIDs, ::System::Boolean keepDefaultSetting)
		{
			return ((::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*(*)(::System::String*, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATEGALGAMENPCACCESSORYINFO_OFFSET))(strSlotName, accessoryPartWithIDs, sceneObjectIDs, keepDefaultSetting);
		}

		static ::Il2CppArray<::NPCCrowd::Accessories::ENPCAccessoryItemType>* get_ForceShowedAccessoryItemTypes()
		{
			return ((::Il2CppArray<::NPCCrowd::Accessories::ENPCAccessoryItemType>*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GET_FORCESHOWEDACCESSORYITEMTYPES_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* GenerateAccessoryInfo(::System::Int32 npcID, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* accessoryVoConfigList, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryPartWithIDs)
		{
			return ((::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>*, ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS_GENERATEACCESSORYINFO_OFFSET))(npcID, accessoryVoConfigList, accessoryPartWithIDs);
		}
	};
}
