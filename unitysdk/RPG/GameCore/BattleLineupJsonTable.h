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

#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1B633460)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPMAZEBUFFCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1B6335B0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLCEBATTLEPRESETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1B633700)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLSKILLTREEPRESETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1B633850)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETAVATARLINEUPPRESETBYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B633230)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B632EB0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETMAZEBUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x1B633070)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETSKILLTREEPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B6339A0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1B631CA0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADAVATARPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B6324B0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADCELINEUPPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B632820)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADLINEUPCONFIG_OFFSET UNITYSDK_OFFSET(0x1B631F90)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADMAZEBUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x1B632280)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADSKILLTREEPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B632A50)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1B632C50)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B633B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupJsonTable_TypeDefinitionIndex = 56672;

	class BattleLineupJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::RPG::GameCore::AvatarLineupPresetConfig*>** StaticGet__AvatarLineupPresetConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::RPG::GameCore::AvatarLineupPresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x66890);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CEBattlePresetConfig*>** StaticGet__CEBattlePresetConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CEBattlePresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x66898);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LineupMazeBuffConfig*>** StaticGet__BattleLineupMazeBuffConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LineupMazeBuffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x668A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillTreePointPresetConfig*>** StaticGet__SkillTreePointConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillTreePointPresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x668A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleLineupConfig*>** StaticGet__BattleLineupConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleLineupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x668B0);
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

		static ::System::Void LoadLineupConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADLINEUPCONFIG_OFFSET))(a1);
		}

		static ::System::Void LoadMazeBuffConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADMAZEBUFFCONFIG_OFFSET))(a1);
		}

		static ::System::Void LoadAvatarPresetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADAVATARPRESETCONFIG_OFFSET))(a1);
		}

		static ::System::Void LoadCELineupPresetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADCELINEUPPRESETCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleLineupConfig* GetConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::BattleLineupConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LineupMazeBuffConfig* GetMazeBuffConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::LineupMazeBuffConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETMAZEBUFFCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarLineupKeyLevelConfig* GetAvatarLineupPresetByLevel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::AvatarLineupKeyLevelConfig*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETAVATARLINEUPPRESETBYLEVEL_OFFSET))(a1, a2, a3, a4);
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

		static ::System::Void LoadSkillTreePresetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADSKILLTREEPRESETCONFIG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::SkillTreePointPresetConfig*>* GetAllSkillTreePresetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::SkillTreePointPresetConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLSKILLTREEPRESETCONFIGLIST_OFFSET))();
		}

		static ::RPG::GameCore::SkillTreePointPresetConfig* GetSkillTreePresetConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::SkillTreePointPresetConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETSKILLTREEPRESETCONFIG_OFFSET))(a1);
		}
	};
}
