#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_EffectMaterialControlConfig.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineColorParam.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_LevelHUDOverrideParams.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_SearchValidBornPos.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/FuncSwitchType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class DitherConfig; }
namespace MoleMole { class Traffic_Area; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace MoleMole::Config { class ConfigHollowLevelEnd; }
namespace MoleMole::Config { class ConfigMisc; }
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace MoleMole::Config { class ConfigMisc_PlayerInitSetting; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigTurnback; }
namespace MoleMole::Config { class ConfigUISettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1486A7D0)
#define MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1486A7E0)
#define MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB_WRITE_OFFSET UNITYSDK_OFFSET(0x1486C480)
#define MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1486D510)
#define MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1486D4D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex = 48042;

	class ConfigMisc_Class_3_9D1269F163DDD9BB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>** StaticGet_Field_3_16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42350);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42358);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTurnback*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTurnback*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42360);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42368);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_HPBarLineColorParam>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_HPBarLineColorParam>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42370);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_Field_3_26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42378);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_Field_3_27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42380);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42388);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowLevelEnd*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowLevelEnd*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42390);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42398);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_LevelHUDOverrideParams>*>** StaticGet_Field_3_30()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_LevelHUDOverrideParams>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>*>** StaticGet_Field_3_24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>*>** StaticGet_Field_3_31()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>** StaticGet_Field_3_23()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_PlayerInitSetting*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_PlayerInitSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>*>** StaticGet_Field_3_20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>*>** StaticGet_Field_3_29()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x423F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42400);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_Field_3_21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42408);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_SearchValidBornPos>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_SearchValidBornPos>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42410);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42418);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigUISettings*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigUISettings*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42420);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig>*>** StaticGet_Field_3_28()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42428);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_Field_3_22()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_Class_3_9D1269F163DDD9BB_TypeDefinitionIndex)->GetStaticField(0x42430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMisc*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigMisc*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CLASS_3_9D1269F163DDD9BB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
