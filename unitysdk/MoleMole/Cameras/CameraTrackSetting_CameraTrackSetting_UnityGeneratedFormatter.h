#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x110803B0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x110803C0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x11080720)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11080970)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x11080930)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackSetting_CameraTrackSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 43876;

	class CameraTrackSetting_CameraTrackSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraTrackSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraOrbit>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraOrbit>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_CameraTrackSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x480F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_CameraTrackSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x480F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_CameraTrackSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48100);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::CameraOrbit>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::CameraOrbit>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_CameraTrackSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48108);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraTrackSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Cameras::CameraTrackSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CAMERATRACKSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
