#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define CLASS_3_EB305601A14DFFC6_METHOD_3_0BF086507C441D0B_OFFSET UNITYSDK_OFFSET(0x17191280)
#define CLASS_3_EB305601A14DFFC6_METHOD_3_113E186A88DF2B7C_OFFSET UNITYSDK_OFFSET(0x1718E870)
#define CLASS_3_EB305601A14DFFC6_METHOD_3_6112E2A47C93AF1C_OFFSET UNITYSDK_OFFSET(0x1718F070)
#define CLASS_3_EB305601A14DFFC6_METHOD_3_A4DF1C9CB8BCF930_OFFSET UNITYSDK_OFFSET(0x1718DA90)
#define CLASS_3_EB305601A14DFFC6_METHOD_3_EAFA5D889F7BA331_OFFSET UNITYSDK_OFFSET(0x1718F9E0)
#define CLASS_3_EB305601A14DFFC6_METHOD_3_F21E932E9A086DB0_OFFSET UNITYSDK_OFFSET(0x17190590)
#define CLASS_3_EB305601A14DFFC6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x171918C0)
#define CLASS_3_EB305601A14DFFC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1718D930)

inline static constexpr unsigned int Class_3_EB305601A14DFFC6_TypeDefinitionIndex = 58693;

class Class_3_EB305601A14DFFC6 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_9; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_1; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xC8
	::System::Single Field_3_10; // 0xD0
	::System::Single Field_3_6; // 0xD4
	::System::Boolean Field_3_0; // 0xD8
	::System::Single Field_3_8; // 0xDC
	::System::Single Field_3_4; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A4DF1C9CB8BCF930(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_METHOD_3_A4DF1C9CB8BCF930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_113E186A88DF2B7C(::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_METHOD_3_113E186A88DF2B7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6112E2A47C93AF1C(::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_METHOD_3_6112E2A47C93AF1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EAFA5D889F7BA331(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_METHOD_3_EAFA5D889F7BA331_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F21E932E9A086DB0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_METHOD_3_F21E932E9A086DB0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0BF086507C441D0B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_METHOD_3_0BF086507C441D0B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB305601A14DFFC6_TOSTRING_OFFSET))(this);
	}
};
