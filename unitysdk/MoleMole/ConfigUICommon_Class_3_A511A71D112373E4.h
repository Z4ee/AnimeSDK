#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/ConfigSpecialDamageText.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/I18nImageCollection.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/ProtoScript/HollowShopCurrencyType.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BubbleProgressColor;
namespace MoleMole { class BattleEvaluteConfigs; }
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class CardOptionConfigs; }
namespace MoleMole { class CardOptionRarityConfigs; }
namespace MoleMole { class ConfigCurveDataInfo; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class ConfigUICommon; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class HollowCardCombineAnimationConfigs; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class InterknotPostHeightDic; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class ItemRarityConfigs; }
namespace MoleMole { class PropBgLevel; }
namespace MoleMole { class RoleRarityIconConfigs; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B81D830)
#define MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B81D840)
#define MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4_WRITE_OFFSET UNITYSDK_OFFSET(0x1B81F520)
#define MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8205A0)
#define MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B820560)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex = 42211;

	class ConfigUICommon_Class_3_A511A71D112373E4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>** StaticGet_Field_3_29()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>** StaticGet_Field_3_23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::ConfigSpecialDamageText>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>** StaticGet_Field_3_24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopCurrencyType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>** StaticGet_Field_3_28()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::InterknotPostHeightDic*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>*>** StaticGet_Field_3_33()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>** StaticGet_Field_3_22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::BubbleProgressColorType, ::BubbleProgressColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A6F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>*>** StaticGet_Field_3_34()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::LanguageType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A708);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*>** StaticGet_Field_3_26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigCurveDataInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A710);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>** StaticGet_Field_3_31()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A718);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A728);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>** StaticGet_Field_3_30()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A730);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A738);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>** StaticGet_Field_3_27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::FeverV3MaterialParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A740);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigGeneralIconBadgeColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A748);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIVirtualCameraConfigs*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A750);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A758);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>** StaticGet_Field_3_21()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>** StaticGet_Field_3_16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A768);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A770);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A778);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A780);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A788);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A790);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A798);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>** StaticGet_Field_3_20()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BuddyChangeDepthConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::PropBgLevel*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_Field_3_35()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>** StaticGet_Field_3_25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::HollowShopType, ::Foundation::AssetPath>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Class_3_A511A71D112373E4_TypeDefinitionIndex)->GetStaticField(0x4A7D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICommon*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CLASS_3_A511A71D112373E4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
