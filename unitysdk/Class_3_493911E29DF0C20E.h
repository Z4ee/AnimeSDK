#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
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

#define CLASS_3_493911E29DF0C20E_METHOD_3_033BEB73D36681B4_1_OFFSET UNITYSDK_OFFSET(0xFF27F90)
#define CLASS_3_493911E29DF0C20E_METHOD_3_033BEB73D36681B4_OFFSET UNITYSDK_OFFSET(0xFF27F40)
#define CLASS_3_493911E29DF0C20E_METHOD_3_23F37EB036D30E42_OFFSET UNITYSDK_OFFSET(0xFF248D0)
#define CLASS_3_493911E29DF0C20E_METHOD_3_4D967CF9B425AEF8_OFFSET UNITYSDK_OFFSET(0xFF26640)
#define CLASS_3_493911E29DF0C20E_METHOD_3_55F0C7071E3B2D54_OFFSET UNITYSDK_OFFSET(0xFF25220)
#define CLASS_3_493911E29DF0C20E_METHOD_3_88886DCD9A4DFCC2_OFFSET UNITYSDK_OFFSET(0xFF25C10)
#define CLASS_3_493911E29DF0C20E_METHOD_3_9979E5ACB7A1725A_OFFSET UNITYSDK_OFFSET(0xFF27110)
#define CLASS_3_493911E29DF0C20E_METHOD_3_C090263226632C54_OFFSET UNITYSDK_OFFSET(0xFF23EA0)
#define CLASS_3_493911E29DF0C20E_METHOD_3_C837E67EC9035984_1_OFFSET UNITYSDK_OFFSET(0xFF27FA0)
#define CLASS_3_493911E29DF0C20E_METHOD_3_C837E67EC9035984_OFFSET UNITYSDK_OFFSET(0xFF27F30)
#define CLASS_3_493911E29DF0C20E_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xFF27F50)
#define CLASS_3_493911E29DF0C20E_METHOD_3_F1317B48F450836D_OFFSET UNITYSDK_OFFSET(0xFF27FB0)
#define CLASS_3_493911E29DF0C20E_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFF276D0)
#define CLASS_3_493911E29DF0C20E__CTOR_OFFSET UNITYSDK_OFFSET(0xFF23D40)

inline static constexpr unsigned int Class_3_493911E29DF0C20E_TypeDefinitionIndex = 81604;

class Class_3_493911E29DF0C20E : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::DirectionalBlur*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_8; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::SampleDistanceMode>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DownSampleLevel>* Field_3_0; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::System::Single Field_3_7; // 0xD0
	::UnityEngine::Vector2 Field_3_9; // 0xD4
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_3_1; // 0xDC
	::System::Int32 Field_3_5; // 0xE0
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_3_3; // 0xE4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C090263226632C54(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_C090263226632C54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_23F37EB036D30E42(::UnityEngine::Rendering::Universal::DirectionalBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_23F37EB036D30E42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_55F0C7071E3B2D54(::UnityEngine::Rendering::Universal::DirectionalBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_55F0C7071E3B2D54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_88886DCD9A4DFCC2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_88886DCD9A4DFCC2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4D967CF9B425AEF8(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_4D967CF9B425AEF8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_9979E5ACB7A1725A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_9979E5ACB7A1725A_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_C837E67EC9035984(::UnityEngine::Rendering::Universal::DirectionalBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_C837E67EC9035984_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_033BEB73D36681B4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_033BEB73D36681B4_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_033BEB73D36681B4_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_033BEB73D36681B4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C837E67EC9035984_1(::UnityEngine::Rendering::Universal::DirectionalBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_C837E67EC9035984_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F1317B48F450836D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DirectionalBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DirectionalBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_493911E29DF0C20E_METHOD_3_F1317B48F450836D_OFFSET))(this, a1, a2, a3);
	}
};
