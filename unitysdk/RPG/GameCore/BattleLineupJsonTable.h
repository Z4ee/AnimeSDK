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

#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xCD36DC0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLBATTLELINEUPMAZEBUFFCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xCD36F10)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLCEBATTLEPRESETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xCD37060)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETALLSKILLTREEPRESETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xCD371B0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETAVATARLINEUPPRESETBYLEVEL_OFFSET UNITYSDK_OFFSET(0xCD36B90)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xCD36810)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETMAZEBUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xCD369D0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_GETSKILLTREEPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xCD37300)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xCD35600)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADAVATARPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xCD35E10)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADCELINEUPPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xCD36180)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADLINEUPCONFIG_OFFSET UNITYSDK_OFFSET(0xCD358F0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADMAZEBUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xCD35BE0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_LOADSKILLTREEPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xCD363B0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xCD365B0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD374A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupJsonTable_TypeDefinitionIndex = 52740;

	class BattleLineupJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillTreePointPresetConfig*>** StaticGet__SkillTreePointConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillTreePointPresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x662A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::RPG::GameCore::AvatarLineupPresetConfig*>** StaticGet__AvatarLineupPresetConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::RPG::GameCore::AvatarLineupPresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x662A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleLineupConfig*>** StaticGet__BattleLineupConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BattleLineupConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x662B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CEBattlePresetConfig*>** StaticGet__CEBattlePresetConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CEBattlePresetConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x662B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LineupMazeBuffConfig*>** StaticGet__BattleLineupMazeBuffConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LineupMazeBuffConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable_TypeDefinitionIndex)->GetStaticField(0x662C0);
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
