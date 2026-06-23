#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace MoleMole::Config { class ConfigDynamicAccessorySkinningData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12710240)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12710250)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12710430)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x127105D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12710590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessories_ConfigDynamicAccessories_UnityGeneratedFormatter_TypeDefinitionIndex = 84250;

	class ConfigDynamicAccessories_ConfigDynamicAccessories_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigDynamicAccessories*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAccessories_ConfigDynamicAccessories_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigDynamicAccessorySkinningData*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigDynamicAccessorySkinningData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicAccessories_ConfigDynamicAccessories_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDynamicAccessories*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAccessories*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigDynamicAccessories*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAccessories*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORIES_CONFIGDYNAMICACCESSORIES_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
