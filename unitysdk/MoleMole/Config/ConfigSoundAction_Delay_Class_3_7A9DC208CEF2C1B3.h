#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_Delay; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B5582C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5582D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3_WRITE_OFFSET UNITYSDK_OFFSET(0x1B558680)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5588F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5588B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay_Class_3_7A9DC208CEF2C1B3_TypeDefinitionIndex = 75357;

	class ConfigSoundAction_Delay_Class_3_7A9DC208CEF2C1B3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_Delay*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Delay_Class_3_7A9DC208CEF2C1B3_TypeDefinitionIndex)->GetStaticField(0x4D410);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Delay_Class_3_7A9DC208CEF2C1B3_TypeDefinitionIndex)->GetStaticField(0x4D418);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Delay_Class_3_7A9DC208CEF2C1B3_TypeDefinitionIndex)->GetStaticField(0x4D420);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Delay_Class_3_7A9DC208CEF2C1B3_TypeDefinitionIndex)->GetStaticField(0x4D428);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Delay*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Delay*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Delay*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Delay*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_CLASS_3_7A9DC208CEF2C1B3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
