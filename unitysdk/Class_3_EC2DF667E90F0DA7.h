#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityNapContactShadowEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define CLASS_3_EC2DF667E90F0DA7_METHOD_3_3C633DC4288C6C39_OFFSET UNITYSDK_OFFSET(0x1660D3A0)
#define CLASS_3_EC2DF667E90F0DA7_METHOD_3_4106019D97572B34_OFFSET UNITYSDK_OFFSET(0x1660DD20)
#define CLASS_3_EC2DF667E90F0DA7_METHOD_3_661D8ACE59D22A75_OFFSET UNITYSDK_OFFSET(0x1660E2F0)
#define CLASS_3_EC2DF667E90F0DA7_METHOD_3_8E1DB479B7231B1D_OFFSET UNITYSDK_OFFSET(0x1660F380)
#define CLASS_3_EC2DF667E90F0DA7_METHOD_3_ED8AE2330B778A9A_OFFSET UNITYSDK_OFFSET(0x1660FD50)
#define CLASS_3_EC2DF667E90F0DA7_METHOD_3_F5B39F5B4F60F992_OFFSET UNITYSDK_OFFSET(0x1660EB10)
#define CLASS_3_EC2DF667E90F0DA7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16610330)
#define CLASS_3_EC2DF667E90F0DA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1660D290)

inline static constexpr unsigned int Class_3_EC2DF667E90F0DA7_TypeDefinitionIndex = 42993;

class Class_3_EC2DF667E90F0DA7 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::NapContactShadow*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xB8
	::System::Int32 Field_3_7; // 0xC0
	::System::Single Field_3_5; // 0xC4
	::System::Boolean Field_3_1; // 0xC8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityNapContactShadowEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_3C633DC4288C6C39(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapContactShadow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapContactShadow*))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_METHOD_3_3C633DC4288C6C39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4106019D97572B34(::UnityEngine::Rendering::Universal::NapContactShadow* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapContactShadow*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_METHOD_3_4106019D97572B34_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_661D8ACE59D22A75(::UnityEngine::Rendering::Universal::NapContactShadow* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapContactShadow*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_METHOD_3_661D8ACE59D22A75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F5B39F5B4F60F992(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapContactShadow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapContactShadow*))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_METHOD_3_F5B39F5B4F60F992_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8E1DB479B7231B1D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapContactShadow* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapContactShadow*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_METHOD_3_8E1DB479B7231B1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_ED8AE2330B778A9A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapContactShadow* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapContactShadow*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_METHOD_3_ED8AE2330B778A9A_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC2DF667E90F0DA7_TOSTRING_OFFSET))(this);
	}
};
