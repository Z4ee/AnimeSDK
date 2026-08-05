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

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1729AE30)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1729AE40)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B_WRITE_OFFSET UNITYSDK_OFFSET(0x1729C300)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1729CEF0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1729CEB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex = 57463;

	class ConfigCameraStretch_Class_3_A232106F5CAC2B9B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraStretch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ValueVariationType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F600);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F608);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CameraConfigDataStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F610);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F618);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F620);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F628);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F630);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretch_Class_3_A232106F5CAC2B9B_TypeDefinitionIndex)->GetStaticField(0x3F638);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStretch*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStretch*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_CLASS_3_A232106F5CAC2B9B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
