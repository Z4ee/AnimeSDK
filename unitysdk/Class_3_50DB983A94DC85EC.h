#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define CLASS_3_50DB983A94DC85EC_METHOD_3_1A087E3E0BAE7F86_OFFSET UNITYSDK_OFFSET(0x19558880)
#define CLASS_3_50DB983A94DC85EC_METHOD_3_282CB8D1FD848A9A_OFFSET UNITYSDK_OFFSET(0x1955A4B0)
#define CLASS_3_50DB983A94DC85EC_METHOD_3_769CCBBFB8825248_OFFSET UNITYSDK_OFFSET(0x19559710)
#define CLASS_3_50DB983A94DC85EC_METHOD_3_8934F5AE2110C0F3_OFFSET UNITYSDK_OFFSET(0x19559390)
#define CLASS_3_50DB983A94DC85EC_METHOD_3_8E382A53A66D8435_OFFSET UNITYSDK_OFFSET(0x19559DF0)
#define CLASS_3_50DB983A94DC85EC_METHOD_3_BEE484A201CE9E19_OFFSET UNITYSDK_OFFSET(0x19559000)
#define CLASS_3_50DB983A94DC85EC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD3FE730)
#define CLASS_3_50DB983A94DC85EC__CTOR_OFFSET UNITYSDK_OFFSET(0x195587A0)

inline static constexpr unsigned int Class_3_50DB983A94DC85EC_TypeDefinitionIndex = 57608;

class Class_3_50DB983A94DC85EC : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::PaniniProjection*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xB0
	::System::Single Field_3_3; // 0xB8
	::System::Single Field_3_1; // 0xBC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_1A087E3E0BAE7F86(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PaniniProjection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_METHOD_3_1A087E3E0BAE7F86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BEE484A201CE9E19(::UnityEngine::Rendering::Universal::PaniniProjection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_METHOD_3_BEE484A201CE9E19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8934F5AE2110C0F3(::UnityEngine::Rendering::Universal::PaniniProjection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_METHOD_3_8934F5AE2110C0F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_769CCBBFB8825248(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PaniniProjection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_METHOD_3_769CCBBFB8825248_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8E382A53A66D8435(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PaniniProjection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_METHOD_3_8E382A53A66D8435_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_282CB8D1FD848A9A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PaniniProjection* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PaniniProjection*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_METHOD_3_282CB8D1FD848A9A_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50DB983A94DC85EC_TOSTRING_OFFSET))(this);
	}
};
