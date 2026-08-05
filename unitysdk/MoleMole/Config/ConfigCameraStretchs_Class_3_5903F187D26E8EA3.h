#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraStretchs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x116FDF90)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x116FDFA0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3_WRITE_OFFSET UNITYSDK_OFFSET(0x116FE070)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x116FE160)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3__CTOR_OFFSET UNITYSDK_OFFSET(0x116FE120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretchs_Class_3_5903F187D26E8EA3_TypeDefinitionIndex = 41492;

	class ConfigCameraStretchs_Class_3_5903F187D26E8EA3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraStretchs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStretch*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStretchs_Class_3_5903F187D26E8EA3_TypeDefinitionIndex)->GetStaticField(0x4F8A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStretchs*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStretchs*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_CLASS_3_5903F187D26E8EA3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
