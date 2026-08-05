#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace MoleMole { class ConfigEnvironmentFeatureModifier; }
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class QTECameraBaseInfo; }
namespace MoleMole { class QTECameraInfo; }
namespace MoleMole { class SkillCharacterScriptConfig_ListPatternPair; }
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace MoleMole::Config { class AudioRTPCConvert; }
namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace MoleMole::Config { class ConfigAudioFetchAnimatorParam; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class HitRotationOverrideMapItem; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11451D80)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11451D90)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4_WRITE_OFFSET UNITYSDK_OFFSET(0x114539D0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x114549F0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4__CTOR_OFFSET UNITYSDK_OFFSET(0x114549B0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex = 48415;

	class CharacterScriptConfig_Class_3_A8DAA21363F534B4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*>** StaticGet_Field_3_16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x468E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>*>** StaticGet_Field_3_25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x468E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x468F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>*>** StaticGet_Field_3_27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x468F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>** StaticGet_Field_3_26()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46908);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*>** StaticGet_Field_3_29()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46910);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_Field_3_20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46918);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46928);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46930);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>** StaticGet_Field_3_31()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46938);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46940);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_Field_3_35()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46950);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarUIElementColorConfigs*>** StaticGet_Field_3_21()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarUIElementColorConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46958);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>*>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46968);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigEnvironmentFeatureModifier*>** StaticGet_Field_3_28()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigEnvironmentFeatureModifier*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46970);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46978);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46980);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46988);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46990);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>*>** StaticGet_Field_3_22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x46998);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>*>** StaticGet_Field_3_24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>** StaticGet_Field_3_30()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_Class_3_A8DAA21363F534B4_TypeDefinitionIndex)->GetStaticField(0x469D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CLASS_3_A8DAA21363F534B4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
