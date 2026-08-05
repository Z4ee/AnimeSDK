#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraShakes; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EFC7A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EFC7B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA_WRITE_OFFSET UNITYSDK_OFFSET(0x12EFC880)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EFC970)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFC930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraShakes_Class_3_6E4B7F13F77C0CAA_TypeDefinitionIndex = 73803;

	class ConfigCameraShakes_Class_3_6E4B7F13F77C0CAA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraShakes*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraShake*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShakes_Class_3_6E4B7F13F77C0CAA_TypeDefinitionIndex)->GetStaticField(0x4E650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraShakes*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraShakes*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraShakes*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShakes*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKES_CLASS_3_6E4B7F13F77C0CAA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
