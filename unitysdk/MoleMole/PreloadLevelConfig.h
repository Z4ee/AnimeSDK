#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class PreloadGhostEffectConfig; }
namespace MoleMole { class PreloadMonsterSummonConfig; }
namespace MoleMole { class PreloadShaderVariantConfig; }
namespace MoleMole { class PreloadSingleGroupConfig; }
namespace MoleMole { class PreloadSingleLevelConfig; }
namespace MoleMole { class PreloadViewGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADLEVELCONFIG_BUILDPRELOADLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x18098D50)
#define MOLEMOLE_PRELOADLEVELCONFIG_SHOWLOWMEMORYEFFECTPATHS_OFFSET UNITYSDK_OFFSET(0x1809A7B0)
#define MOLEMOLE_PRELOADLEVELCONFIG_SHOWMAYINVALIDPATHS_OFFSET UNITYSDK_OFFSET(0x1809A770)
#define MOLEMOLE_PRELOADLEVELCONFIG_VIEWCOMMONGROUP_OFFSET UNITYSDK_OFFSET(0x1809A460)
#define MOLEMOLE_PRELOADLEVELCONFIG_VIEWSINGLEGROUP_OFFSET UNITYSDK_OFFSET(0x18098E00)
#define MOLEMOLE_PRELOADLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1809A7F0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadLevelConfig_TypeDefinitionIndex = 78837;

	class PreloadLevelConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::System::String*>* preloadPrefabs; // 0x58
		::Il2CppArray<::System::Boolean>* isEffects; // 0x60
		::Il2CppArray<::System::Boolean>* isCommonPrefabs; // 0x68
		::Il2CppArray<::System::String*>* preloadAssets; // 0x70
		::Il2CppArray<::System::Boolean>* isSprites; // 0x78
		::Il2CppArray<::System::Boolean>* isCommonAssets; // 0x80
		::Il2CppArray<::System::String*>* splitAndroidSvcPaths; // 0x88
		::Il2CppArray<::System::String*>* splitIOSSvcPaths; // 0x90
		::Il2CppArray<::MoleMole::PreloadSingleLevelConfig*>* levelInfos; // 0x98
		::Il2CppArray<::MoleMole::PreloadSingleGroupConfig*>* monsterInfos; // 0xA0
		::Il2CppArray<::MoleMole::PreloadSingleGroupConfig*>* avatarInfos; // 0xA8
		::Il2CppArray<::MoleMole::PreloadSingleGroupConfig*>* buddyInfos; // 0xB0
		::Il2CppArray<::MoleMole::PreloadSingleGroupConfig*>* sceneObjectInfos; // 0xB8
		::Il2CppArray<::MoleMole::PreloadGhostEffectConfig*>* ghostEffectInfos; // 0xC0
		::Il2CppArray<::MoleMole::PreloadShaderVariantConfig*>* svcInfos; // 0xC8
		::Il2CppArray<::MoleMole::PreloadMonsterSummonConfig*>* monsterSummonInfos; // 0xD0
		::System::Collections::Generic::List_1<::System::Int32>* lowMemorySkipPrefabIds; // 0xD8
		::System::Int32 viewGroupId; // 0xE0
		::MoleMole::PreloadViewGroupConfig* viewGroup; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void BuildPreloadLevelConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELCONFIG_BUILDPRELOADLEVELCONFIG_OFFSET))(this);
		}

		::System::Void ViewSingleGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELCONFIG_VIEWSINGLEGROUP_OFFSET))(this);
		}

		::System::Void ViewCommonGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELCONFIG_VIEWCOMMONGROUP_OFFSET))(this);
		}

		::System::Void ShowMayInvalidPaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELCONFIG_SHOWMAYINVALIDPATHS_OFFSET))(this);
		}

		::System::Void ShowLowMemoryEffectPaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELCONFIG_SHOWLOWMEMORYEFFECTPATHS_OFFSET))(this);
		}
	};
}
