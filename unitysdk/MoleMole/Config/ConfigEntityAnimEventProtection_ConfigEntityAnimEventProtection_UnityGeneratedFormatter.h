#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA4EF30)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1AA4EF40)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AA4F1B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA4F3A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4F340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEventProtection_ConfigEntityAnimEventProtection_UnityGeneratedFormatter_TypeDefinitionIndex = 44473;

	class ConfigEntityAnimEventProtection_ConfigEntityAnimEventProtection_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAnimEventProtection>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventProtection_ConfigEntityAnimEventProtection_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42BE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventProtection_ConfigEntityAnimEventProtection_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42BE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEventProtection_ConfigEntityAnimEventProtection_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42BF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEventProtection& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventProtection&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEventProtection& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventProtection&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_CONFIGENTITYANIMEVENTPROTECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
