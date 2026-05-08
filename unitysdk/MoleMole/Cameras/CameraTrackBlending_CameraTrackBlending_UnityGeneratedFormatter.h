#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFE97EB0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFE97EC0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xFE980A0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE98240)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xFE98200)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending_CameraTrackBlending_UnityGeneratedFormatter_TypeDefinitionIndex = 60047;

	class CameraTrackBlending_CameraTrackBlending_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraTrackBlending*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending_CameraTrackBlending_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31C70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending_CameraTrackBlending_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31C78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraTrackBlending*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Cameras::CameraTrackBlending*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CAMERATRACKBLENDING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
