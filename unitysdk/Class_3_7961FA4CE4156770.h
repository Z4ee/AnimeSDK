#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_3_7961FA4CE4156770_METHOD_3_4C7A856C9B88B485_OFFSET UNITYSDK_OFFSET(0x14475810)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8E7EDCD6E8236912_OFFSET UNITYSDK_OFFSET(0x14476F60)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8ED130D545A5A801_OFFSET UNITYSDK_OFFSET(0x14478850)
#define CLASS_3_7961FA4CE4156770_METHOD_3_A9C72A9087BA3973_OFFSET UNITYSDK_OFFSET(0x1447AC20)
#define CLASS_3_7961FA4CE4156770_METHOD_3_B15B93C967B3BBC2_OFFSET UNITYSDK_OFFSET(0x14479CE0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_E2B24B35687781B7_OFFSET UNITYSDK_OFFSET(0x14477990)
#define CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1447B6D0)
#define CLASS_3_7961FA4CE4156770__CTOR_OFFSET UNITYSDK_OFFSET(0x14475690)

inline static constexpr unsigned int Class_3_7961FA4CE4156770_TypeDefinitionIndex = 80737;

class Class_3_7961FA4CE4156770 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Config::ConfigLensDistortion*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xD0
	::System::Single Field_3_1; // 0xD8
	::System::Single Field_3_7; // 0xDC
	::System::Single Field_3_11; // 0xE0
	::System::Single Field_3_5; // 0xE4
	::System::Single Field_3_9; // 0xE8
	::UnityEngine::Vector2 Field_3_15; // 0xEC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigLensDistortion* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigLensDistortion*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4C7A856C9B88B485(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_4C7A856C9B88B485_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8E7EDCD6E8236912(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8E7EDCD6E8236912_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E2B24B35687781B7(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_E2B24B35687781B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8ED130D545A5A801(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8ED130D545A5A801_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B15B93C967B3BBC2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_B15B93C967B3BBC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A9C72A9087BA3973(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_A9C72A9087BA3973_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET))(this);
	}
};
