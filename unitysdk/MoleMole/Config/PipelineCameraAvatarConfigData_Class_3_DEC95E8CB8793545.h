#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A945610)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A945620)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545_WRITE_OFFSET UNITYSDK_OFFSET(0x1A945880)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A945A40)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545__CTOR_OFFSET UNITYSDK_OFFSET(0x1A945A00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PipelineCameraAvatarConfigData_Class_3_DEC95E8CB8793545_TypeDefinitionIndex = 51334;

	class PipelineCameraAvatarConfigData_Class_3_DEC95E8CB8793545 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::PipelineCameraAvatarConfigData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraAvatarConfigData_Class_3_DEC95E8CB8793545_TypeDefinitionIndex)->GetStaticField(0x365B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraAvatarConfigData_Class_3_DEC95E8CB8793545_TypeDefinitionIndex)->GetStaticField(0x365B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraAvatarConfigData_Class_3_DEC95E8CB8793545_TypeDefinitionIndex)->GetStaticField(0x365C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::PipelineCameraAvatarConfigData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::PipelineCameraAvatarConfigData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_CLASS_3_DEC95E8CB8793545_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
