#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define CLASS_3_646D28E037E43366_METHOD_3_13198B828BE77881_OFFSET UNITYSDK_OFFSET(0x119F99E0)
#define CLASS_3_646D28E037E43366_METHOD_3_14789714C6AF6B27_1_OFFSET UNITYSDK_OFFSET(0x119FC9D0)
#define CLASS_3_646D28E037E43366_METHOD_3_14789714C6AF6B27_OFFSET UNITYSDK_OFFSET(0x119FC950)
#define CLASS_3_646D28E037E43366_METHOD_3_1D6F347901B0134B_1_OFFSET UNITYSDK_OFFSET(0x119FC980)
#define CLASS_3_646D28E037E43366_METHOD_3_1D6F347901B0134B_OFFSET UNITYSDK_OFFSET(0x119FC970)
#define CLASS_3_646D28E037E43366_METHOD_3_452A24B28B66049C_OFFSET UNITYSDK_OFFSET(0x119FC960)
#define CLASS_3_646D28E037E43366_METHOD_3_4BC3EE5D50C52418_OFFSET UNITYSDK_OFFSET(0x119FA2F0)
#define CLASS_3_646D28E037E43366_METHOD_3_52AB269DF2B425F9_OFFSET UNITYSDK_OFFSET(0x119F8440)
#define CLASS_3_646D28E037E43366_METHOD_3_5F9AFC230AF79FE9_OFFSET UNITYSDK_OFFSET(0x119F9150)
#define CLASS_3_646D28E037E43366_METHOD_3_9397C1B34B43D0FF_OFFSET UNITYSDK_OFFSET(0x119FAF10)
#define CLASS_3_646D28E037E43366_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x119FC990)
#define CLASS_3_646D28E037E43366_METHOD_3_F1E33DBBB7FC1E02_OFFSET UNITYSDK_OFFSET(0x119FBAF0)
#define CLASS_3_646D28E037E43366_TOSTRING_OFFSET UNITYSDK_OFFSET(0x119FC030)
#define CLASS_3_646D28E037E43366__CTOR_OFFSET UNITYSDK_OFFSET(0x119F82C0)

inline static constexpr unsigned int Class_3_646D28E037E43366_TypeDefinitionIndex = 79374;

class Class_3_646D28E037E43366 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::MotionBlur*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurDirection>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurQuality>* Field_3_8; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurMode>* Field_3_2; // 0xD0
	::System::Single Field_3_11; // 0xD8
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality Field_3_9; // 0xDC
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection Field_3_5; // 0xE0
	::System::Single Field_3_1; // 0xE4
	::System::Single Field_3_7; // 0xE8
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode Field_3_3; // 0xEC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityMotionBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_52AB269DF2B425F9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_52AB269DF2B425F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5F9AFC230AF79FE9(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_5F9AFC230AF79FE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_13198B828BE77881(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_13198B828BE77881_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4BC3EE5D50C52418(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_4BC3EE5D50C52418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9397C1B34B43D0FF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_9397C1B34B43D0FF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F1E33DBBB7FC1E02(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_F1E33DBBB7FC1E02_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_14789714C6AF6B27(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_14789714C6AF6B27_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_452A24B28B66049C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_452A24B28B66049C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1D6F347901B0134B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_1D6F347901B0134B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1D6F347901B0134B_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_1D6F347901B0134B_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_14789714C6AF6B27_1(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_14789714C6AF6B27_1_OFFSET))(this, a1, a2);
	}
};
