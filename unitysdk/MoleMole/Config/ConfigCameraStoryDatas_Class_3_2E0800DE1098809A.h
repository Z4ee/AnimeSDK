#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class DefaultFrameTwoShapeConfig; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class CameraStoryDataEntry; }
namespace MoleMole::Config { class ConfigCameraStory; }
namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1485F160)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1485F170)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A_WRITE_OFFSET UNITYSDK_OFFSET(0x1485F480)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1485F690)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A__CTOR_OFFSET UNITYSDK_OFFSET(0x1485F650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas_Class_3_2E0800DE1098809A_TypeDefinitionIndex = 68150;

	class ConfigCameraStoryDatas_Class_3_2E0800DE1098809A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraStoryDatas*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_Class_3_2E0800DE1098809A_TypeDefinitionIndex)->GetStaticField(0x422D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_Class_3_2E0800DE1098809A_TypeDefinitionIndex)->GetStaticField(0x422D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_Class_3_2E0800DE1098809A_TypeDefinitionIndex)->GetStaticField(0x422E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_Class_3_2E0800DE1098809A_TypeDefinitionIndex)->GetStaticField(0x422E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStoryDatas*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStoryDatas*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CLASS_3_2E0800DE1098809A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
