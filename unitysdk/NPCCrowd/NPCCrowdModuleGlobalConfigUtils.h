#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D7247395EA17E;
class Class_2_208CC9941471731A_761;
class NPCCrowdMaterialOverrideParamsInfo;
namespace NPCCrowd { class NPCModuleAvatarAssetsPackedInfo; }
namespace NPCCrowd::Accessories { class NpcAccessoryItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETACCESSORYSLOTITEM_OFFSET UNITYSDK_OFFSET(0x1066F8E0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETACCITEMOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x1066F7A0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETNPCAVATARGENERICPARAMS_OFFSET UNITYSDK_OFFSET(0x1066F290)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETNPCRANDOMLIBRARY_OFFSET UNITYSDK_OFFSET(0x1066F3E0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETPARTOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x1066F660)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETSCENEPACKEDASSETS_OFFSET UNITYSDK_OFFSET(0x1066F510)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADCONFLICTDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1066DBF0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADCONFLICTDATA_1_OFFSET UNITYSDK_OFFSET(0x1066E440)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADCONFLICTDATA_OFFSET UNITYSDK_OFFSET(0x1066DB00)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x1066CA50)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYID_1_OFFSET UNITYSDK_OFFSET(0x1066EF60)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYID_OFFSET UNITYSDK_OFFSET(0x1066E920)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYKEY_1_OFFSET UNITYSDK_OFFSET(0x1066EBE0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYKEY_2_OFFSET UNITYSDK_OFFSET(0x1066EDA0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYKEY_OFFSET UNITYSDK_OFFSET(0x1066E780)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_RELEASECONFLICTDATA_OFFSET UNITYSDK_OFFSET(0x1066E560)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1066FA40)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1066FA30)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex = 54919;

	class NPCCrowdModuleGlobalConfigUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>** StaticGet_allSceneAssetsPackedDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>** StaticGet_allAvatarParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_761*>** StaticGet_mainCityConflictMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_761*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADD0);
		}
		static ::Class_1_F57D7247395EA17E** StaticGet_conflictItemTemplateMap()
		{
			return (::Class_1_F57D7247395EA17E**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>** StaticGet_npcRandomLibrary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_mainCityConflictKeyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>** StaticGet_accessorySlotItems()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>** StaticGet_accItemOverrideInfos()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3ADF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>** StaticGet_partOverrideInfos()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0x3AE00);
		}
		static ::System::Int32* StaticGet_currentConflictSectionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils_TypeDefinitionIndex)->GetStaticField(0xDE10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void LoadGlobalConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADGLOBALCONFIG_OFFSET))();
		}

		static ::System::Void LoadConflictData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADCONFLICTDATA_OFFSET))();
		}

		static ::System::Void LoadConflictData_1(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADCONFLICTDATA_1_OFFSET))(sectionID);
		}

		static ::System::Void LoadConflictDataInternal(::System::Int32 sectionID, ::System::Boolean loadBySection)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_LOADCONFLICTDATAINTERNAL_OFFSET))(sectionID, loadBySection);
		}

		static ::System::Void ReleaseConflictData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_RELEASECONFLICTDATA_OFFSET))();
		}

		static ::System::Boolean QueryConflictByKey(::System::String* key, ::System::Collections::Generic::List_1<::System::Int32>* queryIDs)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYKEY_OFFSET))(key, queryIDs);
		}

		static ::System::Boolean QueryConflictByKey_1(::System::String* key, ::System::Collections::Generic::List_1<::System::Int32>* queryIDs, ::System::Int32& conflicted)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYKEY_1_OFFSET))(key, queryIDs, conflicted);
		}

		static ::System::Boolean QueryConflictByID(::System::Int32 id, ::System::Collections::Generic::List_1<::System::Int32>* queryIDs, ::System::Int32& conflicted)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYID_OFFSET))(id, queryIDs, conflicted);
		}

		static ::System::Boolean QueryConflictByKey_2(::System::String* key, ::System::Collections::Generic::List_1<::System::Int32>* queryIDs, ::System::Collections::Generic::List_1<::System::Int32>*& conflicts)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYKEY_2_OFFSET))(key, queryIDs, conflicts);
		}

		static ::System::Boolean QueryConflictByID_1(::System::Int32 id, ::System::Collections::Generic::List_1<::System::Int32>* queryIDs, ::System::Collections::Generic::List_1<::System::Int32>*& conflicts)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_QUERYCONFLICTBYID_1_OFFSET))(id, queryIDs, conflicts);
		}

		static ::System::Boolean GetNPCAvatarGenericParams(::System::Int32 id, ::FNpcAvatarGenericParams& par)
		{
			return ((::System::Boolean(*)(::System::Int32, ::FNpcAvatarGenericParams&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETNPCAVATARGENERICPARAMS_OFFSET))(id, par);
		}

		static ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>* GetNPCRandomLibrary(::System::Int32 libID)
		{
			return ((::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETNPCRANDOMLIBRARY_OFFSET))(libID);
		}

		static ::System::Boolean GetScenePackedAssets(::System::String* tag, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*& par)
		{
			return ((::System::Boolean(*)(::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETSCENEPACKEDASSETS_OFFSET))(tag, par);
		}

		static ::System::Boolean GetPartOverrideInfo(::System::Int32 overrideInfoId, ::NPCCrowdMaterialOverrideParamsInfo*& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETPARTOVERRIDEINFO_OFFSET))(overrideInfoId, info);
		}

		static ::System::Boolean GetAccItemOverrideInfo(::System::Int32 overrideInfoId, ::NPCCrowdMaterialOverrideParamsInfo*& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETACCITEMOVERRIDEINFO_OFFSET))(overrideInfoId, info);
		}

		static ::System::Boolean GetAccessorySlotItem(::System::String* accessoryKey, ::NPCCrowd::Accessories::NpcAccessoryItem*& item)
		{
			return ((::System::Boolean(*)(::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS_GETACCESSORYSLOTITEM_OFFSET))(accessoryKey, item);
		}
	};
}
