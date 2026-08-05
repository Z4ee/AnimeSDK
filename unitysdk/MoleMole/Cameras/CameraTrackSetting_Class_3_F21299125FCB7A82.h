#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14357290)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82_READMEMBER_OFFSET UNITYSDK_OFFSET(0x143572A0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82_WRITE_OFFSET UNITYSDK_OFFSET(0x143575B0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82__CCTOR_OFFSET UNITYSDK_OFFSET(0x143577D0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82__CTOR_OFFSET UNITYSDK_OFFSET(0x14357790)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackSetting_Class_3_F21299125FCB7A82_TypeDefinitionIndex = 67135;

	class CameraTrackSetting_Class_3_F21299125FCB7A82 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Cameras::CameraTrackSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_Class_3_F21299125FCB7A82_TypeDefinitionIndex)->GetStaticField(0x362F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CameraOrbit>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CameraOrbit>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_Class_3_F21299125FCB7A82_TypeDefinitionIndex)->GetStaticField(0x362F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_Class_3_F21299125FCB7A82_TypeDefinitionIndex)->GetStaticField(0x36300);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::CameraOrbit>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::CameraOrbit>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_Class_3_F21299125FCB7A82_TypeDefinitionIndex)->GetStaticField(0x36308);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraTrackSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Cameras::CameraTrackSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_CLASS_3_F21299125FCB7A82_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
