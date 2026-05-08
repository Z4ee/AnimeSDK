#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_RtpcBranch; }
namespace MoleMole::Config { class ConfigSoundAction_RtpcBranch_BranchOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1424D6D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1424D6E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1424DAE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1424DD80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1424DD40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_ConfigSoundAction_RtpcBranch_UnityGeneratedFormatter_TypeDefinitionIndex = 48090;

	class ConfigSoundAction_RtpcBranch_ConfigSoundAction_RtpcBranch_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_ConfigSoundAction_RtpcBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45800);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_ConfigSoundAction_RtpcBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45808);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_ConfigSoundAction_RtpcBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45810);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_ConfigSoundAction_RtpcBranch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45818);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_RtpcBranch*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RtpcBranch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_RtpcBranch*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RtpcBranch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CONFIGSOUNDACTION_RTPCBRANCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
