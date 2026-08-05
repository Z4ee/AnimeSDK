#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAccesoryItemOverrideTable;
class NPCPrefabPartOverrideTable;
class NPCPrefabTable;
class RandomNPCPrefabsLibrary;
namespace NPCCrowd { class NPCModuleAvatarAssetsPacked; }
namespace NPCCrowd::Accessories { class NPCAccessoryMapConfig; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE94F350)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE94F390)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_0_OFFSET UNITYSDK_OFFSET(0xE94F3A0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_1_OFFSET UNITYSDK_OFFSET(0xE94F540)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_2_OFFSET UNITYSDK_OFFSET(0xE94F6E0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_3_OFFSET UNITYSDK_OFFSET(0xE94F8E0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_4_OFFSET UNITYSDK_OFFSET(0xE9506C0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_5_OFFSET UNITYSDK_OFFSET(0xE955A50)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex = 54920;

	class NPCCrowdModuleGlobalConfigUtils___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RandomNPCPrefabsLibrary*>** StaticGet___9__10_4()
		{
			return (::System::Action_1<::RandomNPCPrefabsLibrary*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3AD80);
		}
		static ::System::Action_1<::NPCAccesoryItemOverrideTable*>** StaticGet___9__10_1()
		{
			return (::System::Action_1<::NPCAccesoryItemOverrideTable*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3AD88);
		}
		static ::System::Action_1<::NPCCrowd::NPCModuleAvatarAssetsPacked*>** StaticGet___9__10_5()
		{
			return (::System::Action_1<::NPCCrowd::NPCModuleAvatarAssetsPacked*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3AD90);
		}
		static ::NPCCrowd::NPCCrowdModuleGlobalConfigUtils___c** StaticGet___9()
		{
			return (::NPCCrowd::NPCCrowdModuleGlobalConfigUtils___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3AD98);
		}
		static ::System::Action_1<::NPCCrowd::Accessories::NPCAccessoryMapConfig*>** StaticGet___9__10_2()
		{
			return (::System::Action_1<::NPCCrowd::Accessories::NPCAccessoryMapConfig*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3ADA0);
		}
		static ::System::Action_1<::NPCPrefabPartOverrideTable*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::NPCPrefabPartOverrideTable*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3ADA8);
		}
		static ::System::Action_1<::NPCPrefabTable*>** StaticGet___9__10_3()
		{
			return (::System::Action_1<::NPCPrefabTable*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3ADB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _LoadGlobalConfig_b__10_0(::NPCPrefabPartOverrideTable* partOverrideTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCPrefabPartOverrideTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_0_OFFSET))(this, partOverrideTable);
		}

		::System::Void _LoadGlobalConfig_b__10_1(::NPCAccesoryItemOverrideTable* accItemOverrideTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCAccesoryItemOverrideTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_1_OFFSET))(this, accItemOverrideTable);
		}

		::System::Void _LoadGlobalConfig_b__10_2(::NPCCrowd::Accessories::NPCAccessoryMapConfig* accSlotTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryMapConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_2_OFFSET))(this, accSlotTable);
		}

		::System::Void _LoadGlobalConfig_b__10_3(::NPCPrefabTable* npcTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCPrefabTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_3_OFFSET))(this, npcTable);
		}

		::System::Void _LoadGlobalConfig_b__10_4(::RandomNPCPrefabsLibrary* library)
		{
			return ((::System::Void(*)(::PVOID, ::RandomNPCPrefabsLibrary*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_4_OFFSET))(this, library);
		}

		::System::Void _LoadGlobalConfig_b__10_5(::NPCCrowd::NPCModuleAvatarAssetsPacked* sceneAss)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCModuleAvatarAssetsPacked*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_5_OFFSET))(this, sceneAss);
		}
	};
}
