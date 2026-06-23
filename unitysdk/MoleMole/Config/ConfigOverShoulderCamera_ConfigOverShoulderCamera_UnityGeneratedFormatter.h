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

#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144E2C40)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144E2C50)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x144E2E30)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x144E2FD0)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x144E2F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverShoulderCamera_ConfigOverShoulderCamera_UnityGeneratedFormatter_TypeDefinitionIndex = 46166;

	class ConfigOverShoulderCamera_ConfigOverShoulderCamera_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigOverShoulderCamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigOverShoulderCamera_ConfigOverShoulderCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C250);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigOverShoulderCamera_ConfigOverShoulderCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C258);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigOverShoulderCamera*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigOverShoulderCamera*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_CONFIGOVERSHOULDERCAMERA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
