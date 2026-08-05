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
#include "unitysdk/MoleMole/Level/LevelConfig_RankingItemConfig.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/MoleMole/VoidFrontSubGameType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Level { class BangbooFindObjConfig; }
namespace MoleMole::Level { class LevelConfig_FocusUIIconSetting; }
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradePair; }
namespace MoleMole::Level { class LevelConfig_SceneMoveGroup; }
namespace MoleMole::Level { class LevelConfig_Split; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DC56D0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DC56E0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7_WRITE_OFFSET UNITYSDK_OFFSET(0x19DC6390)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DC6B10)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC6AD0)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex = 48678;

	class LevelConfig_Split_Class_3_58EB5C4231C502D7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Level::LevelConfig_Split*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C310);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_SceneMoveGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C318);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Level::LevelConfig_GlobalAIUpgradePair*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C320);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C328);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::VoidFrontSubGameType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C330);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::BangbooFindObjConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C338);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooAbilityType, ::MoleMole::Level::BangbooAbilityConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C340);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TerrainMatType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C348);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelMultiChatConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C350);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C358);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_FocusUIIconSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C360);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::OverrideScenePerformDelayConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C368);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Level::LevelConfig_DayTimeRange>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C370);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::MoleMole::Level::BangbooPlayTypeConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C378);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_RankingItemConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C380);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C388);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Level::BangbooPlayTypeTemplate, ::MoleMole::Level::BangbooAbilityTemplateConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_Class_3_58EB5C4231C502D7_TypeDefinitionIndex)->GetStaticField(0x4C390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Level::LevelConfig_Split*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::LevelConfig_Split*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Level::LevelConfig_Split*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig_Split*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_CLASS_3_58EB5C4231C502D7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
