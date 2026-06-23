#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_GlobalValue; }
namespace MoleMole::Config { class ConfigSoundAction_GlobalValue_BranchOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE979220)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE979230)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE979630)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9798D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE979890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_ConfigSoundAction_GlobalValue_UnityGeneratedFormatter_TypeDefinitionIndex = 82132;

	class ConfigSoundAction_GlobalValue_ConfigSoundAction_GlobalValue_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_GlobalValue*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_ConfigSoundAction_GlobalValue_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_ConfigSoundAction_GlobalValue_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_ConfigSoundAction_GlobalValue_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_GlobalValue*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_GlobalValue*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CONFIGSOUNDACTION_GLOBALVALUE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
