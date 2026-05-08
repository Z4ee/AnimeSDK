#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_EffectMaterialControlConfig.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineColorParam.h"
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

#define MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D24C10)
#define MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D24C20)
#define MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D26840)
#define MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D27810)
#define MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D277D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex = 63732;

	class ConfigMisc_ConfigMisc_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_CachedSerializer21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMisc_InteractRotate*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigUISettings*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigUISettings*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig>*>** StaticGet_CachedSerializer26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMisc_EffectMaterialControlConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>*>** StaticGet_CachedSerializer23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x476F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47708);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAvatarGround*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47710);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>*>** StaticGet_CachedSerializer25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47718);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47728);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47730);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowLevelEnd*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowLevelEnd*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47738);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_PlayerInitSetting*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_PlayerInitSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47740);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47748);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>*>** StaticGet_CachedSerializer24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47750);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_HPBarLineColorParam>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_HPBarLineColorParam>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47758);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>** StaticGet_CachedSerializer18()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DitherConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47760);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_SearchValidBornPos>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMisc_SearchValidBornPos>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47768);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>*>** StaticGet_CachedSerializer20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47770);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47778);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47780);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTurnback*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigTurnback*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47788);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>*>** StaticGet_CachedSerializer19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_ConfigMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x47790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMisc*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigMisc*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CONFIGMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
