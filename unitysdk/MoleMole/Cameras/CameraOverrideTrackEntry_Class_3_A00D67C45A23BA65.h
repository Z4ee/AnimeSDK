#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x148418C0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65_READMEMBER_OFFSET UNITYSDK_OFFSET(0x148418D0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65_WRITE_OFFSET UNITYSDK_OFFSET(0x148420F0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65__CCTOR_OFFSET UNITYSDK_OFFSET(0x148425D0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65__CTOR_OFFSET UNITYSDK_OFFSET(0x14842590)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex = 75435;

	class CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraOverrideTrackEntry*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42160);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackSetting*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackSetting*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42168);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42170);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42178);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42180);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42188);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraMiscSetting*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraMiscSetting*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42190);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_Class_3_A00D67C45A23BA65_TypeDefinitionIndex)->GetStaticField(0x42198);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraOverrideTrackEntry*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraOverrideTrackEntry*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Cameras::CameraOverrideTrackEntry*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraOverrideTrackEntry*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CLASS_3_A00D67C45A23BA65_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
