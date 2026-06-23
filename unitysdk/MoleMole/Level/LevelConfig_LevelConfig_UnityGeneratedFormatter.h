#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/InLevelChatConfig.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityTemplateConfig.h"
#include "unitysdk/MoleMole/Level/BangbooAbilityType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeConfig.h"
#include "unitysdk/MoleMole/Level/BangbooPlayTypeTemplate.h"
#include "unitysdk/MoleMole/Level/LevelConfig_DayTimeRange.h"
#include "unitysdk/MoleMole/Level/LevelConfig_LevelPrefabConfig.h"
#include "unitysdk/MoleMole/Level/LevelConfig_RankingItemConfig.h"
#include "unitysdk/MoleMole/Level/LevelZeroMonsterWaveLimit.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/VoidFrontSubGameType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole::Level { class BangbooFindObjConfig; }
namespace MoleMole::Level { class LevelConfig; }
namespace MoleMole::Level { class LevelConfig_FocusUIIconSetting; }
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradePair; }
namespace MoleMole::Level { class LevelConfig_SceneMoveGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12BC75A0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12BC75B0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12BC8510)
#define MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BC8E00)
#define MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC8DC0)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 47018;

	class LevelConfig_LevelConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Level::LevelConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>** StaticGet_CachedSerializer19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelConfig_LevelPrefabConfig>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelConfig_LevelPrefabConfig>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EDF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE18);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelZeroMonsterWaveLimit>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelZeroMonsterWaveLimit>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>** StaticGet_CachedSerializer18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::TeamGroupDataItem*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::TeamGroupDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_LevelConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EE48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Level::LevelConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::LevelConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Level::LevelConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_LEVELCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
