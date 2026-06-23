#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x106AD4A0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x106AD4B0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x106AD5E0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x106AD720)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x106AD6E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ConfigCameraOverrideTrack_ConfigCameraOverrideTrack_UnityGeneratedFormatter_TypeDefinitionIndex = 65927;

	class ConfigCameraOverrideTrack_ConfigCameraOverrideTrack_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::ConfigCameraOverrideTrack*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraOverrideTrack_ConfigCameraOverrideTrack_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::ConfigCameraOverrideTrack*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Cameras::ConfigCameraOverrideTrack*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CONFIGCAMERAOVERRIDETRACK_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
