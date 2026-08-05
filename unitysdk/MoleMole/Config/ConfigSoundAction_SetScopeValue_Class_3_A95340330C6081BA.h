#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetScopeValue; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1170D2E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1170D2F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA_WRITE_OFFSET UNITYSDK_OFFSET(0x1170D600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1170D820)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1170D7E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetScopeValue_Class_3_A95340330C6081BA_TypeDefinitionIndex = 45066;

	class ConfigSoundAction_SetScopeValue_Class_3_A95340330C6081BA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_SetScopeValue*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetScopeValue_Class_3_A95340330C6081BA_TypeDefinitionIndex)->GetStaticField(0x4F9B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetScopeValue_Class_3_A95340330C6081BA_TypeDefinitionIndex)->GetStaticField(0x4F9B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetScopeValue*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetScopeValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetScopeValue*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetScopeValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSCOPEVALUE_CLASS_3_A95340330C6081BA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
