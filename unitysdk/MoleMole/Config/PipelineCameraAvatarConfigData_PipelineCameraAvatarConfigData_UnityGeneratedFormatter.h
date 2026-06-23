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

#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D15330)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D15340)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D155E0)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D157E0)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D157A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PipelineCameraAvatarConfigData_PipelineCameraAvatarConfigData_UnityGeneratedFormatter_TypeDefinitionIndex = 44800;

	class PipelineCameraAvatarConfigData_PipelineCameraAvatarConfigData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::PipelineCameraAvatarConfigData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraAvatarConfigData_PipelineCameraAvatarConfigData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x465B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModuleAvatarDataConfigExt*>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraAvatarConfigData_PipelineCameraAvatarConfigData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x465B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraModelSphereData*>*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraAvatarConfigData_PipelineCameraAvatarConfigData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x465C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::PipelineCameraAvatarConfigData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::PipelineCameraAvatarConfigData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_PIPELINECAMERAAVATARCONFIGDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
