#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarUIShowInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE96D700)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE96D710)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE96DA70)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE96DCC0)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE96DC80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLinkZone_ConfigLinkZone_UnityGeneratedFormatter_TypeDefinitionIndex = 57777;

	class ConfigLinkZone_ConfigLinkZone_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigLinkZone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinkZone_ConfigLinkZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinkZone_ConfigLinkZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinkZone_ConfigLinkZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigLinkZone*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigLinkZone*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CONFIGLINKZONE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
