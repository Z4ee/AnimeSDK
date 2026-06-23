#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraStretch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1589CE50)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1589CE60)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1589E3E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1589EFE0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1589EFA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex = 69808;

	class ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraStretch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33D70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33D78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33D88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33D90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33D98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33DA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_ConfigCameraStretch_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33DA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStretch*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStretch*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CONFIGCAMERASTRETCH_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
