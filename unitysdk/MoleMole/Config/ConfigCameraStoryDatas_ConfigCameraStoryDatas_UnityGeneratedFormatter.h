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

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11025D90)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11025DA0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x11026100)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11026350)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x11026310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas_ConfigCameraStoryDatas_UnityGeneratedFormatter_TypeDefinitionIndex = 68906;

	class ConfigCameraStoryDatas_ConfigCameraStoryDatas_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraStoryDatas*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::DefaultFrameTwoShapeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_ConfigCameraStoryDatas_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E420);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraStory*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_ConfigCameraStoryDatas_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E428);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::FixedCameraConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_ConfigCameraStoryDatas_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E430);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::CameraStoryDataEntry*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas_ConfigCameraStoryDatas_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E438);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStoryDatas*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStoryDatas*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_CONFIGCAMERASTORYDATAS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
