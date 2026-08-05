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

#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12A2D1C0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12A2D1D0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B_WRITE_OFFSET UNITYSDK_OFFSET(0x12A2D2A0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A2D390)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D350)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ConfigCameraOverrideTrack_Class_3_65D7347F14D8AF2B_TypeDefinitionIndex = 57854;

	class ConfigCameraOverrideTrack_Class_3_65D7347F14D8AF2B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::ConfigCameraOverrideTrack*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraOverrideTrack_Class_3_65D7347F14D8AF2B_TypeDefinitionIndex)->GetStaticField(0x4A350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::ConfigCameraOverrideTrack*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Cameras::ConfigCameraOverrideTrack*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_CLASS_3_65D7347F14D8AF2B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
