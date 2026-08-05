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

#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4CDF10)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4CDF20)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4CE240)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE460)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLinkZone_Class_3_A06B2528C75F4674_TypeDefinitionIndex = 81049;

	class ConfigLinkZone_Class_3_A06B2528C75F4674 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigLinkZone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RelayAttackType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinkZone_Class_3_A06B2528C75F4674_TypeDefinitionIndex)->GetStaticField(0x4E690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinkZone_Class_3_A06B2528C75F4674_TypeDefinitionIndex)->GetStaticField(0x4E698);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarUIShowInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLinkZone_Class_3_A06B2528C75F4674_TypeDefinitionIndex)->GetStaticField(0x4E6A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigLinkZone*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigLinkZone*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_CLASS_3_A06B2528C75F4674_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
