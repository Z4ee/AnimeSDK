#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define CLASS_3_8FD42C89B4F9E142_METHOD_3_17A228202021D55C_OFFSET UNITYSDK_OFFSET(0x1264AC70)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_3961E7976F112A6D_OFFSET UNITYSDK_OFFSET(0x1264D010)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_4D0D7A984D1988D2_OFFSET UNITYSDK_OFFSET(0x12646CA0)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_54147279425610FC_OFFSET UNITYSDK_OFFSET(0x12642D40)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_BC78D5F8568AAC93_OFFSET UNITYSDK_OFFSET(0x126451E0)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_E81D58170FC0F200_OFFSET UNITYSDK_OFFSET(0x12648F30)
#define CLASS_3_8FD42C89B4F9E142_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1264E140)
#define CLASS_3_8FD42C89B4F9E142__CTOR_OFFSET UNITYSDK_OFFSET(0x12642A30)

inline static constexpr unsigned int Class_3_8FD42C89B4F9E142_TypeDefinitionIndex = 64874;

class Class_3_8FD42C89B4F9E142 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_30; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_6; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_22; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_20; // 0xD0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_24; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_28; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_18; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0x100
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_8; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_26; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0x118
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::SampleCountLevel>* Field_3_4; // 0x120
	::System::Single Field_3_7; // 0x128
	::System::Boolean Field_3_25; // 0x12C
	::System::Boolean Field_3_5; // 0x12D
	::System::Boolean Field_3_21; // 0x12E
	::System::Boolean Field_3_27; // 0x12F
	::System::Single Field_3_19; // 0x130
	::System::Int32 Field_3_29; // 0x134
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel Field_3_11; // 0x138
	::UnityEngine::Color Field_3_15; // 0x13C
	::System::Int32 Field_3_31; // 0x14C
	::System::Single Field_3_9; // 0x150
	::System::Single Field_3_23; // 0x154
	::System::Single Field_3_13; // 0x158
	::System::Single Field_3_1; // 0x15C
	::System::Single Field_3_35; // 0x160
	::System::Single Field_3_17; // 0x164

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_54147279425610FC(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_54147279425610FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BC78D5F8568AAC93(::UnityEngine::Rendering::Universal::AmplifyOcclusion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_BC78D5F8568AAC93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4D0D7A984D1988D2(::UnityEngine::Rendering::Universal::AmplifyOcclusion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_4D0D7A984D1988D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E81D58170FC0F200(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_E81D58170FC0F200_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_17A228202021D55C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_17A228202021D55C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3961E7976F112A6D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_3961E7976F112A6D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_TOSTRING_OFFSET))(this);
	}
};
