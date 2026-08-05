#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11475E10)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11475E20)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB_WRITE_OFFSET UNITYSDK_OFFSET(0x11476130)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11476350)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x11476310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_InteractRotate_Class_3_EF01E9F53A6EBFEB_TypeDefinitionIndex = 48037;

	class ConfigMisc_InteractRotate_Class_3_EF01E9F53A6EBFEB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMisc_InteractRotate*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_InteractRotate_Class_3_EF01E9F53A6EBFEB_TypeDefinitionIndex)->GetStaticField(0x46C20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_InteractRotate_Class_3_EF01E9F53A6EBFEB_TypeDefinitionIndex)->GetStaticField(0x46C28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMisc_InteractRotate*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMisc_InteractRotate*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigMisc_InteractRotate*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc_InteractRotate*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CLASS_3_EF01E9F53A6EBFEB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
