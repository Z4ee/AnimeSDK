#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_14F9905231210413_OFFSET UNITYSDK_OFFSET(0x12AB7C20)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_2390DC841BE423F4_OFFSET UNITYSDK_OFFSET(0x12AB0D20)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_8BE258EDE5EA102C_OFFSET UNITYSDK_OFFSET(0x12AACF80)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_946F3CEF4AB6BB4F_OFFSET UNITYSDK_OFFSET(0x12AAF3E0)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_9FA961557563E23C_OFFSET UNITYSDK_OFFSET(0x12AB3620)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_A0FE94F86A27E15D_OFFSET UNITYSDK_OFFSET(0x12AB5460)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B8E821A7903B8DC8_OFFSET UNITYSDK_OFFSET(0x12ABA250)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B941DC0D6CDFC0CF_1_OFFSET UNITYSDK_OFFSET(0x12ABA240)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B941DC0D6CDFC0CF_OFFSET UNITYSDK_OFFSET(0x12ABA1F0)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_C83B61FE9ADAF907_1_OFFSET UNITYSDK_OFFSET(0x12ABA270)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_C83B61FE9ADAF907_OFFSET UNITYSDK_OFFSET(0x12ABA260)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x12ABA200)
#define CLASS_3_5DFD3C5FA67D93B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12AB9230)
#define CLASS_3_5DFD3C5FA67D93B1__CTOR_OFFSET UNITYSDK_OFFSET(0x12AACC90)

inline static constexpr unsigned int Class_3_5DFD3C5FA67D93B1_TypeDefinitionIndex = 59895;

class Class_3_5DFD3C5FA67D93B1 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Config::ConfigEntityCullingEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_20; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_14; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_22; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xF0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_12; // 0xF8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0x100
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_4; // 0x110
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_18; // 0x118
	::System::Single Field_3_25; // 0x120
	::System::Boolean Field_3_19; // 0x124
	::System::Boolean Field_3_3; // 0x125
	::System::Boolean Field_3_9; // 0x126
	::UnityEngine::Color Field_3_23; // 0x128
	::System::Boolean Field_3_11; // 0x138
	::System::Boolean Field_3_5; // 0x139
	::System::Boolean Field_3_13; // 0x13A
	::System::Boolean Field_3_21; // 0x13B
	::UnityEngine::Color Field_3_15; // 0x13C
	::System::Boolean Field_3_29; // 0x14C
	::System::Boolean Field_3_1; // 0x14D
	::System::Boolean Field_3_17; // 0x14E
	::System::Boolean Field_3_7; // 0x14F
	::System::Single Field_3_27; // 0x150

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityCullingEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_8BE258EDE5EA102C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_8BE258EDE5EA102C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_946F3CEF4AB6BB4F(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_946F3CEF4AB6BB4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2390DC841BE423F4(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_2390DC841BE423F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9FA961557563E23C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_9FA961557563E23C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A0FE94F86A27E15D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_A0FE94F86A27E15D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_14F9905231210413(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_14F9905231210413_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_B941DC0D6CDFC0CF(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B941DC0D6CDFC0CF_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_B941DC0D6CDFC0CF_1(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B941DC0D6CDFC0CF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B8E821A7903B8DC8(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B8E821A7903B8DC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C83B61FE9ADAF907(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_C83B61FE9ADAF907_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C83B61FE9ADAF907_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_C83B61FE9ADAF907_1_OFFSET))(this, a1, a2);
	}
};
