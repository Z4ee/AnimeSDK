#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x148426F0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14842700)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3_WRITE_OFFSET UNITYSDK_OFFSET(0x14842890)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x148429F0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3__CTOR_OFFSET UNITYSDK_OFFSET(0x148429B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending_Class_3_D17532E5F82C61B3_TypeDefinitionIndex = 67516;

	class CameraTrackBlending_Class_3_D17532E5F82C61B3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraTrackBlending*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending_Class_3_D17532E5F82C61B3_TypeDefinitionIndex)->GetStaticField(0x421A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackBlending_Class_3_D17532E5F82C61B3_TypeDefinitionIndex)->GetStaticField(0x421A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraTrackBlending*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Cameras::CameraTrackBlending*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_CLASS_3_D17532E5F82C61B3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
