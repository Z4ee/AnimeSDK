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

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B34BB0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B34BC0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12B35640)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B35C60)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B35C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex = 68257;

	class ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraZoom*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZoom_ConfigCameraZoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraZoom*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraZoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraZoom*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_CONFIGCAMERAZOOM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
