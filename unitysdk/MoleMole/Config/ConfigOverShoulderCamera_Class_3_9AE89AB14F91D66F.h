#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B5D60)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B5D70)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B5F00)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B6060)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B6020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverShoulderCamera_Class_3_9AE89AB14F91D66F_TypeDefinitionIndex = 49493;

	class ConfigOverShoulderCamera_Class_3_9AE89AB14F91D66F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigOverShoulderCamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigOverShoulderCamera_Class_3_9AE89AB14F91D66F_TypeDefinitionIndex)->GetStaticField(0x3C8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigOverShoulderCamera_Class_3_9AE89AB14F91D66F_TypeDefinitionIndex)->GetStaticField(0x3C8F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigOverShoulderCamera*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigOverShoulderCamera*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CLASS_3_9AE89AB14F91D66F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
