#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17536DD0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17536DE0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17536FC0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17537160)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17537120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyExclusivity_ConfigMaterialPropertyExclusivity_UnityGeneratedFormatter_TypeDefinitionIndex = 76477;

	class ConfigMaterialPropertyExclusivity_ConfigMaterialPropertyExclusivity_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyExclusivity_ConfigMaterialPropertyExclusivity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A290);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyExclusivity_ConfigMaterialPropertyExclusivity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A298);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertyExclusivity*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertyExclusivity*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CONFIGMATERIALPROPERTYEXCLUSIVITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
