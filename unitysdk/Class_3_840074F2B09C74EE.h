#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityCausticsEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define CLASS_3_840074F2B09C74EE_METHOD_3_3211954C1B57D188_OFFSET UNITYSDK_OFFSET(0x186F4590)
#define CLASS_3_840074F2B09C74EE_METHOD_3_6471B2648DDADFE5_OFFSET UNITYSDK_OFFSET(0x186F6090)
#define CLASS_3_840074F2B09C74EE_METHOD_3_6B7E36AFDA163184_OFFSET UNITYSDK_OFFSET(0x186F2CA0)
#define CLASS_3_840074F2B09C74EE_METHOD_3_7F4CDE8562DDAAF2_OFFSET UNITYSDK_OFFSET(0x186F0460)
#define CLASS_3_840074F2B09C74EE_METHOD_3_D731081B75DB1163_OFFSET UNITYSDK_OFFSET(0x186EE530)
#define CLASS_3_840074F2B09C74EE_METHOD_3_EA6E6797D9245535_OFFSET UNITYSDK_OFFSET(0x186F1760)
#define CLASS_3_840074F2B09C74EE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186F6CF0)
#define CLASS_3_840074F2B09C74EE__CTOR_OFFSET UNITYSDK_OFFSET(0x186EE2C0)

inline static constexpr unsigned int Class_3_840074F2B09C74EE_TypeDefinitionIndex = 52826;

class Class_3_840074F2B09C74EE : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::Caustics*, ::MoleMole::Config::ConfigEntityCausticsEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_13; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_21; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_9; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_19; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_17; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_15; // 0xE0
	::UnityEngine::Texture* Field_3_20; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_23; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_1; // 0xF8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_3; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0x108
	::System::Boolean Field_3_2; // 0x110
	::System::Single Field_3_8; // 0x114
	::System::Single Field_3_22; // 0x118
	::System::Single Field_3_12; // 0x11C
	::System::Single Field_3_18; // 0x120
	::UnityEngine::Color Field_3_16; // 0x124
	::System::Single Field_3_14; // 0x134
	::System::Single Field_3_0; // 0x138
	::System::Single Field_3_6; // 0x13C
	::System::Single Field_3_4; // 0x140
	::System::Single Field_3_10; // 0x144

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityCausticsEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_D731081B75DB1163(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Caustics* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Caustics*))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_METHOD_3_D731081B75DB1163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7F4CDE8562DDAAF2(::UnityEngine::Rendering::Universal::Caustics* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Caustics*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_METHOD_3_7F4CDE8562DDAAF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EA6E6797D9245535(::UnityEngine::Rendering::Universal::Caustics* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Caustics*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_METHOD_3_EA6E6797D9245535_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6B7E36AFDA163184(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Caustics* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Caustics*))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_METHOD_3_6B7E36AFDA163184_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3211954C1B57D188(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Caustics* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Caustics*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_METHOD_3_3211954C1B57D188_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6471B2648DDADFE5(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Caustics* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Caustics*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_METHOD_3_6471B2648DDADFE5_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_840074F2B09C74EE_TOSTRING_OFFSET))(this);
	}
};
