#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraZoom; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1436BC00)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1436BC10)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE_WRITE_OFFSET UNITYSDK_OFFSET(0x1436C610)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1436CC00)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1436CBC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex = 53405;

	class ConfigCameraZoom_Class_3_102AA99A4865F3DE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraZoom*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36430);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36438);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36440);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36448);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36450);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36458);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_Class_3_102AA99A4865F3DE_TypeDefinitionIndex)->GetStaticField(0x36460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraZoom*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraZoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraZoom*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CLASS_3_102AA99A4865F3DE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
