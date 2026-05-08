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

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D05A40)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D05A50)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D076D0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D086B0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D08670)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 46569;

	class CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47440);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47448);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47450);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>*>** StaticGet_CachedSerializer22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47458);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47460);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47468);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>** StaticGet_CachedSerializer26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47478);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>** StaticGet_CachedSerializer27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47480);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>*>** StaticGet_CachedSerializer24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttachmentItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47498);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigEnvironmentFeatureModifier*>** StaticGet_CachedSerializer29()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigEnvironmentFeatureModifier*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>** StaticGet_CachedSerializer23()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*>** StaticGet_CachedSerializer28()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarUIElementColorConfigs*>** StaticGet_CachedSerializer20()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarUIElementColorConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>*>** StaticGet_CachedSerializer19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::MoleMole::Config::ConfigAudioFetchAnimatorParam*, ::MoleMole::Config::AudioRTPCConvert*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>*>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::HitRotationOverrideMapItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x474F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>*>** StaticGet_CachedSerializer25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47500);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47508);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47510);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47518);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_CachedSerializer21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47520);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_CharacterScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47528);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CHARACTERSCRIPTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
