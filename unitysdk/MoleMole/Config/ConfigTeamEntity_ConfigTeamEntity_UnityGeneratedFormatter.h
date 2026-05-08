#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FeverBeingHitType.h"
#include "unitysdk/MoleMole/Config/FeverModifyType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFeverLevel; }
namespace MoleMole::Config { class ConfigFeverMode; }
namespace MoleMole::Config { class ConfigTeamComboSetting; }
namespace MoleMole::Config { class ConfigTeamEntity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x186BF4C0)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x186BF4D0)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x186BFAE0)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186BFEA0)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x186BFE60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex = 57999;

	class ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigTeamEntity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFeverMode*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFeverMode*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_ConfigTeamEntity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x377D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigTeamEntity*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigTeamEntity*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CONFIGTEAMENTITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
