#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
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

#define CLASS_3_7D9B032465AD4A4F_METHOD_3_06F33970713EE95E_OFFSET UNITYSDK_OFFSET(0x17873FF0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_2E195CBDCDC4BFA3_1_OFFSET UNITYSDK_OFFSET(0x178775B0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_2E195CBDCDC4BFA3_OFFSET UNITYSDK_OFFSET(0x178775A0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_3941FEF88AB03FBB_1_OFFSET UNITYSDK_OFFSET(0x17877620)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_3941FEF88AB03FBB_OFFSET UNITYSDK_OFFSET(0x178775C0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_57DEEF0473E5D15B_OFFSET UNITYSDK_OFFSET(0x17871FC0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_B6C1DE2E45B43433_OFFSET UNITYSDK_OFFSET(0x17876190)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_C49E00E34D7CF2A7_OFFSET UNITYSDK_OFFSET(0x17875090)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x178775E0)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_EB6544F57081E06F_OFFSET UNITYSDK_OFFSET(0x17872D40)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_EC920618820036F1_OFFSET UNITYSDK_OFFSET(0x17870E00)
#define CLASS_3_7D9B032465AD4A4F_METHOD_3_FC33D767AFDE0B94_OFFSET UNITYSDK_OFFSET(0x178775D0)
#define CLASS_3_7D9B032465AD4A4F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17876BC0)
#define CLASS_3_7D9B032465AD4A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x17870C40)

inline static constexpr unsigned int Class_3_7D9B032465AD4A4F_TypeDefinitionIndex = 58377;

class Class_3_7D9B032465AD4A4F : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Config::ConfigEntityDistortionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::DistortionQueueType>* Field_3_12; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xD8
	::System::Boolean Field_3_9; // 0xE0
	::System::Boolean Field_3_11; // 0xE1
	::System::Single Field_3_3; // 0xE4
	::UnityEngine::Vector3 Field_3_5; // 0xE8
	::System::Single Field_3_7; // 0xF4
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_3_13; // 0xF8
	::System::Int32 Field_3_1; // 0xFC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDistortionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_EC920618820036F1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_EC920618820036F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57DEEF0473E5D15B(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_57DEEF0473E5D15B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EB6544F57081E06F(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_EB6544F57081E06F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_06F33970713EE95E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_06F33970713EE95E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C49E00E34D7CF2A7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_C49E00E34D7CF2A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B6C1DE2E45B43433(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_B6C1DE2E45B43433_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2E195CBDCDC4BFA3(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_2E195CBDCDC4BFA3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2E195CBDCDC4BFA3_1(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_2E195CBDCDC4BFA3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3941FEF88AB03FBB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_3941FEF88AB03FBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FC33D767AFDE0B94(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_FC33D767AFDE0B94_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_3941FEF88AB03FBB_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_7D9B032465AD4A4F_METHOD_3_3941FEF88AB03FBB_1_OFFSET))(this, a1, a2);
	}
};
