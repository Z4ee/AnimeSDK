#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define CLASS_3_7D9B032465AD4A4F_METHOD_3_16D5EB497A556EFC_OFFSET UNITYSDK_OFFSET(0x1295ED80)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_2BFFBF98C91CC35A_OFFSET UNITYSDK_OFFSET(0x12959B80)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_477285AA0EB5D09E_OFFSET UNITYSDK_OFFSET(0x1295DCB0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_57DEEF0473E5D15B_OFFSET UNITYSDK_OFFSET(0x1295AD10)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_CD05B8ECB87653A3_OFFSET UNITYSDK_OFFSET(0x1295CCA0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_EB6544F57081E06F_OFFSET UNITYSDK_OFFSET(0x1295BA40)
#define CLASS_3_7D9B032465AD4A4F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1295F790)
#define CLASS_3_7D9B032465AD4A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x129599C0)

inline static constexpr unsigned int Class_3_7D9B032465AD4A4F_TypeDefinitionIndex = 49436;

class Class_3_7D9B032465AD4A4F : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Config::ConfigEntityDistortionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::DistortionQueueType>* Field_3_12; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xD0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xD8
	::System::Int32 Field_3_1; // 0xE0
	::UnityEngine::Vector3 Field_3_5; // 0xE4
	::System::Boolean Field_3_11; // 0xF0
	::System::Boolean Field_3_9; // 0xF1
	::System::Single Field_3_3; // 0xF4
	::System::Single Field_3_7; // 0xF8
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_3_13; // 0xFC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDistortionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2BFFBF98C91CC35A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_2BFFBF98C91CC35A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57DEEF0473E5D15B(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_57DEEF0473E5D15B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EB6544F57081E06F(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_EB6544F57081E06F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CD05B8ECB87653A3(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_CD05B8ECB87653A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_477285AA0EB5D09E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_477285AA0EB5D09E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_16D5EB497A556EFC(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_16D5EB497A556EFC_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_TOSTRING_OFFSET))(this);
	}
};
