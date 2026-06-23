#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetScopeValue; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18AD80A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18AD80B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18AD8400)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD8650)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD8610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetScopeValue_ConfigSoundAction_SetScopeValue_UnityGeneratedFormatter_TypeDefinitionIndex = 41745;

	class ConfigSoundAction_SetScopeValue_ConfigSoundAction_SetScopeValue_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_SetScopeValue*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetScopeValue_ConfigSoundAction_SetScopeValue_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetScopeValue_ConfigSoundAction_SetScopeValue_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39BF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetScopeValue*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetScopeValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetScopeValue*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetScopeValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CONFIGSOUNDACTION_SETSCOPEVALUE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
