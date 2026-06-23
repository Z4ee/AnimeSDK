#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define CLASS_3_493911E29DF0C20E_METHOD_3_23F37EB036D30E42_OFFSET UNITYSDK_OFFSET(0x1484C910)
#define CLASS_3_493911E29DF0C20E_METHOD_3_4698F3E920D4F74F_OFFSET UNITYSDK_OFFSET(0x1484F060)
#define CLASS_3_493911E29DF0C20E_METHOD_3_7B091E85266428A1_OFFSET UNITYSDK_OFFSET(0x1484E5D0)
#define CLASS_3_493911E29DF0C20E_METHOD_3_88886DCD9A4DFCC2_OFFSET UNITYSDK_OFFSET(0x1484DBF0)
#define CLASS_3_493911E29DF0C20E_METHOD_3_C11EB2FB02CE6E0C_OFFSET UNITYSDK_OFFSET(0x1484BF10)
#define CLASS_3_493911E29DF0C20E_METHOD_3_D3D9D6792545CF5D_OFFSET UNITYSDK_OFFSET(0x1484D230)
#define CLASS_3_493911E29DF0C20E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1484F600)
#define CLASS_3_493911E29DF0C20E__CTOR_OFFSET UNITYSDK_OFFSET(0x1484BDB0)

inline static constexpr unsigned int Class_3_493911E29DF0C20E_TypeDefinitionIndex = 44417;

class Class_3_493911E29DF0C20E : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::DirectionalBlur*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::SampleDistanceMode>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DownSampleLevel>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_8; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::UnityEngine::Vector2 Field_3_9; // 0xD0
	::System::Single Field_3_7; // 0xD8
	::System::Int32 Field_3_5; // 0xDC
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_3_3; // 0xE0
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_3_1; // 0xE4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C11EB2FB02CE6E0C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_C11EB2FB02CE6E0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_23F37EB036D30E42(::UnityEngine::Rendering::Universal::DirectionalBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_23F37EB036D30E42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D3D9D6792545CF5D(::UnityEngine::Rendering::Universal::DirectionalBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_D3D9D6792545CF5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_88886DCD9A4DFCC2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_88886DCD9A4DFCC2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7B091E85266428A1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_7B091E85266428A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4698F3E920D4F74F(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_4698F3E920D4F74F_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_TOSTRING_OFFSET))(this);
	}
};
