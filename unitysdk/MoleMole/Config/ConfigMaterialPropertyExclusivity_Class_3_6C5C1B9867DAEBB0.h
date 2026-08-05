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

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B4060)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B4070)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B4200)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B4360)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B4320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyExclusivity_Class_3_6C5C1B9867DAEBB0_TypeDefinitionIndex = 46927;

	class ConfigMaterialPropertyExclusivity_Class_3_6C5C1B9867DAEBB0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity_MaterialPropertyExclusivityGroup*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyExclusivity_Class_3_6C5C1B9867DAEBB0_TypeDefinitionIndex)->GetStaticField(0x3C8E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMaterialPropertyExclusivity_Class_3_6C5C1B9867DAEBB0_TypeDefinitionIndex)->GetStaticField(0x3C8E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertyExclusivity*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertyExclusivity*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYEXCLUSIVITY_CLASS_3_6C5C1B9867DAEBB0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
