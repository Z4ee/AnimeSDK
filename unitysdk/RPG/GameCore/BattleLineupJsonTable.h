#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarIndex.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace RPG::GameCore { class AvatarLineupPresetConfig; }
namespace RPG::GameCore { class BattleLineupConfig; }
namespace RPG::GameCore { class CEBattlePresetConfig; }
namespace RPG::GameCore { class LineupMazeBuffConfig; }
namespace RPG::GameCore { class SkillTreePointPresetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB5D17F0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPMAZEBUFFCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB5D18A0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLCEBATTLEPRESETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB5D1950)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLSKILLTREEPRESETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB5D1A00)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETAVATARLINEUPPRESETBYLEVEL_OFFSET UNITYSDK_OFFSET(0xB5D15C0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D1300)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETMAZEBUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D1460)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETSKILLTREEPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D1AB0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D0080)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADAVATARPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D0880)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADCELINEUPPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D0BF0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADLINEUPCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D03C0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADMAZEBUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D0650)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADSKILLTREEPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D0E20)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xB5D1030)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D1BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupJsonTable_TypeDefinitionIndex = 52066;

	class BattleLineupJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillTreePointPresetConfig*>** StaticGet__SkillTreePointConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillTreePointPresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x440F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleLineupConfig*>** StaticGet__BattleLineupConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleLineupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x440F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CEBattlePresetConfig*>** StaticGet__CEBattlePresetConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CEBattlePresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x44100);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LineupMazeBuffConfig*>** StaticGet__BattleLineupMazeBuffConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LineupMazeBuffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x44108);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::RPG::GameCore::AvatarLineupPresetConfig*>** StaticGet__AvatarLineupPresetConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::RPG::GameCore::AvatarLineupPresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x44110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE__CCTOR_OFFSET))();
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void LoadLineupConfig(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADLINEUPCONFIG_OFFSET))(sPath);
		}

		static ::System::Void LoadMazeBuffConfig(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADMAZEBUFFCONFIG_OFFSET))(sPath);
		}

		static ::System::Void LoadAvatarPresetConfig(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADAVATARPRESETCONFIG_OFFSET))(sPath);
		}

		static ::System::Void LoadCELineupPresetConfig(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADCELINEUPPRESETCONFIG_OFFSET))(sPath);
		}

		static ::RPG::GameCore::BattleLineupConfig* GetConfig(::System::String* BattleLineupName)
		{
			return ((::RPG::GameCore::BattleLineupConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETCONFIG_OFFSET))(BattleLineupName);
		}

		static ::RPG::GameCore::LineupMazeBuffConfig* GetMazeBuffConfig(::System::String* MazeBuffName)
		{
			return ((::RPG::GameCore::LineupMazeBuffConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETMAZEBUFFCONFIG_OFFSET))(MazeBuffName);
		}

		static ::RPG::GameCore::AvatarLineupKeyLevelConfig* GetAvatarLineupPresetByLevel(::System::UInt32 AvatarId, ::System::UInt32 EnhanceID, ::System::UInt32 Level, ::System::Boolean isOnLine)
		{
			return ((::RPG::GameCore::AvatarLineupKeyLevelConfig*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETAVATARLINEUPPRESETBYLEVEL_OFFSET))(AvatarId, EnhanceID, Level, isOnLine);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::BattleLineupConfig*>* GetAllBattleLineupConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleLineupConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPCONFIGLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::LineupMazeBuffConfig*>* GetAllBattleLineupMazeBuffConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::LineupMazeBuffConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPMAZEBUFFCONFIGLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::CEBattlePresetConfig*>* GetAllCeBattlePresetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CEBattlePresetConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLCEBATTLEPRESETCONFIGLIST_OFFSET))();
		}

		static ::System::Void LoadSkillTreePresetConfig(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADSKILLTREEPRESETCONFIG_OFFSET))(sPath);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::SkillTreePointPresetConfig*>* GetAllSkillTreePresetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::SkillTreePointPresetConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLSKILLTREEPRESETCONFIGLIST_OFFSET))();
		}

		static ::RPG::GameCore::SkillTreePointPresetConfig* GetSkillTreePresetConfig(::System::String* Name)
		{
			return ((::RPG::GameCore::SkillTreePointPresetConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETSKILLTREEPRESETCONFIG_OFFSET))(Name);
		}
	};
}
