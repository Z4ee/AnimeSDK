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

#define MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13846120)
#define MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13846130)
#define MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4_WRITE_OFFSET UNITYSDK_OFFSET(0x13847000)
#define MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x138478C0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4__CTOR_OFFSET UNITYSDK_OFFSET(0x13847880)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex = 86298;

	class LevelConfig_Class_3_6AAD3C5C151414A4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Level::LevelConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>** StaticGet_Field_3_22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>** StaticGet_Field_3_16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F958);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F968);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F978);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F980);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F988);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F990);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F998);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::TeamGroupDataItem*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::TeamGroupDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>** StaticGet_Field_3_23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelZeroMonsterWaveLimit>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelZeroMonsterWaveLimit>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelConfig_LevelPrefabConfig>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Level::LevelConfig_LevelPrefabConfig>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Class_3_6AAD3C5C151414A4_TypeDefinitionIndex)->GetStaticField(0x3F9E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Level::LevelConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::LevelConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Level::LevelConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_CLASS_3_6AAD3C5C151414A4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
