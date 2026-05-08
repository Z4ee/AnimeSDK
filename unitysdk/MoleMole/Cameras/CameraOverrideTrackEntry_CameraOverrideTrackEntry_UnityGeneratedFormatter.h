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

#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xECE8D80)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xECE8D90)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xECE9610)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xECE9B20)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xECE9AE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex = 48253;

	class CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraOverrideTrackEntry*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45670);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45678);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45688);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45698);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackSetting*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackSetting*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x456A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraMiscSetting*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraMiscSetting*>**)Il2CppClass::FromTypeDefinitionIndex(CameraOverrideTrackEntry_CameraOverrideTrackEntry_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x456A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraOverrideTrackEntry*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraOverrideTrackEntry*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Cameras::CameraOverrideTrackEntry*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraOverrideTrackEntry*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_CAMERAOVERRIDETRACKENTRY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
