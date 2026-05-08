#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

class FNpcAvatarGenericParams_PartInfo;
class NPCPrefabPartInfo;
class PartMaterials;
namespace NPCCrowd::Accessories { class NPCSlotAccessoryInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNPCAVATARGENERICPARAMS_CONVERTCONFIGPARTLISTTORUNTIMEPARTLIST_OFFSET UNITYSDK_OFFSET(0x10AF1FD0)
#define FNPCAVATARGENERICPARAMS_GENERATEACCITEMOVERRIDECOLORINFO_OFFSET UNITYSDK_OFFSET(0x10AF2F60)
#define FNPCAVATARGENERICPARAMS_GENERATECOLORINFO_OFFSET UNITYSDK_OFFSET(0x10AF2CF0)
#define FNPCAVATARGENERICPARAMS_GETACCESSORYINFOLIST_OFFSET UNITYSDK_OFFSET(0x10AF2710)
#define FNPCAVATARGENERICPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x700890)

inline static constexpr unsigned int FNpcAvatarGenericParams_TypeDefinitionIndex = 77099;

struct alignas(8) FNpcAvatarGenericParams
{
	::System::Int32 id; // 0x10
	::ENPCAvatarGender Gender; // 0x14
	::ENPCAvatarSize Size; // 0x18
	::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* bodyPartInfos; // 0x20
	::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryPartWithIDs; // 0x28
	::Il2CppArray<::System::Int32>* tagIds; // 0x30
	::Foundation::Unreal::FGameplayTagContainer gameplayTags; // 0x38
	::System::Int32 shadowProxyIndex; // 0xA8

	::System::Void _ctor(::System::Int32 id, ::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::System::Collections::Generic::List_1<::NPCPrefabPartInfo*>* partList, ::System::Collections::Generic::List_1<::PartMaterials*>* overrideMats, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCSlotAccessoryInfo*>* accessory, ::System::Collections::Generic::List_1<::System::Int32>* tagIds, ::Foundation::Unreal::FGameplayTagContainer gameplayTags, ::System::Int32 shadowProxyIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ENPCAvatarGender, ::ENPCAvatarSize, ::System::Collections::Generic::List_1<::NPCPrefabPartInfo*>*, ::System::Collections::Generic::List_1<::PartMaterials*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCSlotAccessoryInfo*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::Foundation::Unreal::FGameplayTagContainer, ::System::Int32))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS__CTOR_OFFSET))(this, id, gender, size, partList, overrideMats, accessory, tagIds, gameplayTags, shadowProxyIndex);
	}

	static ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* ConvertConfigPartListToRuntimePartList(::System::Collections::Generic::List_1<::NPCPrefabPartInfo*>* partList, ::System::Collections::Generic::List_1<::PartMaterials*>* overrideMats)
	{
		return ((::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>*(*)(::System::Collections::Generic::List_1<::NPCPrefabPartInfo*>*, ::System::Collections::Generic::List_1<::PartMaterials*>*))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS_CONVERTCONFIGPARTLISTTORUNTIMEPARTLIST_OFFSET))(partList, overrideMats);
	}

	/*
	static ::System::Void GenerateColorInfo(::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*& overrideColors, ::System::Boolean bOverride, ::System::Int32 overrideInfoId)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS_GENERATECOLORINFO_OFFSET))(overrideColors, bOverride, overrideInfoId);
	}
	*/

	/*
	static ::System::Void GenerateAccItemOverrideColorInfo(::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*& overrideColors, ::System::Boolean bOverride, ::System::Int32 overrideInfoId)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::UnityEngine::Color32>>*&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS_GENERATEACCITEMOVERRIDECOLORINFO_OFFSET))(overrideColors, bOverride, overrideInfoId);
	}
	*/

	static ::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>* GetAccessoryInfoList(::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCSlotAccessoryInfo*>* accessory)
	{
		return ((::Il2CppArray<::FNpcAvatarGenericParams_AccessoryInfo>*(*)(::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCSlotAccessoryInfo*>*))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS_GETACCESSORYINFOLIST_OFFSET))(accessory);
	}
};
