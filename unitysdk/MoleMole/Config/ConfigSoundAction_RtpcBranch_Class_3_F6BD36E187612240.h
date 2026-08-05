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

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B7790)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B77A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B7B50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B7DC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B7D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_Class_3_F6BD36E187612240_TypeDefinitionIndex = 59701;

	class ConfigSoundAction_RtpcBranch_Class_3_F6BD36E187612240 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_Class_3_F6BD36E187612240_TypeDefinitionIndex)->GetStaticField(0x3C930);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_Class_3_F6BD36E187612240_TypeDefinitionIndex)->GetStaticField(0x3C938);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_Class_3_F6BD36E187612240_TypeDefinitionIndex)->GetStaticField(0x3C940);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RtpcBranch_Class_3_F6BD36E187612240_TypeDefinitionIndex)->GetStaticField(0x3C948);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_RtpcBranch*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RtpcBranch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_RtpcBranch*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RtpcBranch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_CLASS_3_F6BD36E187612240_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
