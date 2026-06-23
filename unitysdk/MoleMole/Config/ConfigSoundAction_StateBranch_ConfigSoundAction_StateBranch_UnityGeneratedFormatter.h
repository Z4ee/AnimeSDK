#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_StateBranch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192A88D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192A88E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x192A8C40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192A8E90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x192A8E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StateBranch_ConfigSoundAction_StateBranch_UnityGeneratedFormatter_TypeDefinitionIndex = 41016;

	class ConfigSoundAction_StateBranch_ConfigSoundAction_StateBranch_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_StateBranch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StateBranch_ConfigSoundAction_StateBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40DA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StateBranch_ConfigSoundAction_StateBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40DA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StateBranch_ConfigSoundAction_StateBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40DB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_StateBranch*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StateBranch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_StateBranch*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StateBranch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CONFIGSOUNDACTION_STATEBRANCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
