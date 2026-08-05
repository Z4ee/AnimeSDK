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

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1170C5D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1170C5E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C_WRITE_OFFSET UNITYSDK_OFFSET(0x1170C990)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1170CC00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C__CTOR_OFFSET UNITYSDK_OFFSET(0x1170CBC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_Class_3_A1F70CCFD87FE06C_TypeDefinitionIndex = 85081;

	class ConfigSoundAction_GlobalValue_Class_3_A1F70CCFD87FE06C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_GlobalValue*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_Class_3_A1F70CCFD87FE06C_TypeDefinitionIndex)->GetStaticField(0x4F990);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_Class_3_A1F70CCFD87FE06C_TypeDefinitionIndex)->GetStaticField(0x4F998);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_Class_3_A1F70CCFD87FE06C_TypeDefinitionIndex)->GetStaticField(0x4F9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_GlobalValue*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_GlobalValue*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_CLASS_3_A1F70CCFD87FE06C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
