#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class QTECameraBaseInfo; }
namespace MoleMole { class QTECameraInfo; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole { class SkillCharacterScriptConfig_ListPatternPair; }
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAnimEventGroup; }
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x173A52A0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x173A52B0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB_WRITE_OFFSET UNITYSDK_OFFSET(0x173A6540)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x173A7000)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB__CTOR_OFFSET UNITYSDK_OFFSET(0x173A6FC0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex = 86320;

	class SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkillCharacterScriptConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnimatorBlendData*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44ED0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::QTECameraBaseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44ED8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCounterstroke*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44EF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44F00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44F08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorBlendData*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44F10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_Class_3_12AAFC0D861E82AB_TypeDefinitionIndex)->GetStaticField(0x44F18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_CLASS_3_12AAFC0D861E82AB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
