#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/Enum_3_2BD1943B012482C0.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraPipeline_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace PipelineCamera::Module { class WorldBasicCameraDataModifier; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E06A2ADFFA06AB19_INITMODULE1_OFFSET UNITYSDK_OFFSET(0x14133220)
#define CLASS_1_E06A2ADFFA06AB19_INITMODULE2_OFFSET UNITYSDK_OFFSET(0x141333B0)
#define CLASS_1_E06A2ADFFA06AB19_INITMODULE3_OFFSET UNITYSDK_OFFSET(0x14133DE0)
#define CLASS_1_E06A2ADFFA06AB19_INITPIPELINE_OFFSET UNITYSDK_OFFSET(0x14133F70)
#define CLASS_1_E06A2ADFFA06AB19_METHOD_1_2F2E6C49AE161835_OFFSET UNITYSDK_OFFSET(0x14134200)
#define CLASS_1_E06A2ADFFA06AB19_METHOD_1_533404BA8D99FB73_OFFSET UNITYSDK_OFFSET(0x141340F0)
#define CLASS_1_E06A2ADFFA06AB19__CCTOR_OFFSET UNITYSDK_OFFSET(0x14134040)
#define CLASS_1_E06A2ADFFA06AB19__CTOR_OFFSET UNITYSDK_OFFSET(0x14134030)

inline static constexpr unsigned int Class_1_E06A2ADFFA06AB19_TypeDefinitionIndex = 62019;

class Class_1_E06A2ADFFA06AB19 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_1_2()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E06A2ADFFA06AB19_TypeDefinitionIndex)->GetStaticField(0xC5F0);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_1()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E06A2ADFFA06AB19_TypeDefinitionIndex)->GetStaticField(0xC5F8);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_0()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E06A2ADFFA06AB19_TypeDefinitionIndex)->GetStaticField(0xC600);
	}
	::System::Action_2<::Enum_3_2BD1943B012482C0, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*>* Field_1_3; // 0x10
	::System::Action_1<::PipelineCamera::Module::InPlaceBlender*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19__CCTOR_OFFSET))();
	}

	::System::Void InitModule1(::PipelineCamera::Module::InPlaceBlender*& a1, ::System::Int32 a2, ::PipelineCamera::ICameraCommonContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_INITMODULE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void InitModule2(::PipelineCamera::Module::WorldBasicCameraDataModifier*& a1, ::System::Int32 a2, ::PipelineCamera::ICameraCommonContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::WorldBasicCameraDataModifier*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_INITMODULE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void InitModule3(::PipelineCamera::Module::InPlaceBlender*& a1, ::System::Int32 a2, ::PipelineCamera::ICameraCommonContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_INITMODULE3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void InitPipeline(::PipelineCamera::CameraPipeline_3<::PipelineCamera::Module::InPlaceBlender*, ::PipelineCamera::Module::WorldBasicCameraDataModifier*, ::PipelineCamera::Module::InPlaceBlender*>& a1, ::System::Int32 a2, ::PipelineCamera::ICameraCommonContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraPipeline_3<::PipelineCamera::Module::InPlaceBlender*, ::PipelineCamera::Module::WorldBasicCameraDataModifier*, ::PipelineCamera::Module::InPlaceBlender*>&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_INITPIPELINE_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_533404BA8D99FB73(::Enum_3_2BD1943B012482C0 a1)
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::Enum_3_2BD1943B012482C0))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_METHOD_1_533404BA8D99FB73_OFFSET))(this, a1);
	}

	static ::Enum_3_24F60EA0D4DCCDF0 Method_1_2F2E6C49AE161835(::Enum_3_2BD1943B012482C0 a1)
	{
		return ((::Enum_3_24F60EA0D4DCCDF0(*)(::Enum_3_2BD1943B012482C0))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_METHOD_1_2F2E6C49AE161835_OFFSET))(a1);
	}
};
