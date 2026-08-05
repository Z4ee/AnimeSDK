#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EFEF20)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EFEF30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033_WRITE_OFFSET UNITYSDK_OFFSET(0x12EFF0C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EFF220)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFF1E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCameraZoom_Class_3_22706AFE94644033_TypeDefinitionIndex = 60163;

	class ConfigEntityCameraZoom_Class_3_22706AFE94644033 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityCameraZoom*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityCameraZoom_Class_3_22706AFE94644033_TypeDefinitionIndex)->GetStaticField(0x4E670);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityCameraZoom_Class_3_22706AFE94644033_TypeDefinitionIndex)->GetStaticField(0x4E678);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityCameraZoom*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraZoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityCameraZoom*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraZoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_CLASS_3_22706AFE94644033_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
