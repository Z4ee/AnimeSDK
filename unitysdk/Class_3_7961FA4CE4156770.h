#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_3_7961FA4CE4156770_METHOD_3_1C746014D0D2B848_OFFSET UNITYSDK_OFFSET(0x14BE8FC0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_4C7A856C9B88B485_OFFSET UNITYSDK_OFFSET(0x14BE49B0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_82399EA7D10EF014_OFFSET UNITYSDK_OFFSET(0x14BE6BD0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8947E5D24232D21B_OFFSET UNITYSDK_OFFSET(0x14BE6140)
#define CLASS_3_7961FA4CE4156770_METHOD_3_89B9937E8BBEFFBD_OFFSET UNITYSDK_OFFSET(0x14BEB460)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_1_OFFSET UNITYSDK_OFFSET(0x14BEB430)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_OFFSET UNITYSDK_OFFSET(0x14BEB420)
#define CLASS_3_7961FA4CE4156770_METHOD_3_94598CD0252BF021_OFFSET UNITYSDK_OFFSET(0x14BE9FC0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_C0B359031F105529_OFFSET UNITYSDK_OFFSET(0x14BE7AE0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x14BEB3E0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_1_OFFSET UNITYSDK_OFFSET(0x14BEB450)
#define CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_OFFSET UNITYSDK_OFFSET(0x14BEB440)
#define CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14BEAAB0)
#define CLASS_3_7961FA4CE4156770__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE4830)

inline static constexpr unsigned int Class_3_7961FA4CE4156770_TypeDefinitionIndex = 65832;

class Class_3_7961FA4CE4156770 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Config::ConfigLensDistortion*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xD0
	::UnityEngine::Vector2 Field_3_11; // 0xD8
	::System::Single Field_3_1; // 0xE0
	::System::Single Field_3_5; // 0xE4
	::System::Single Field_3_7; // 0xE8
	::System::Single Field_3_3; // 0xEC
	::System::Single Field_3_9; // 0xF0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigLensDistortion* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigLensDistortion*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4C7A856C9B88B485(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_4C7A856C9B88B485_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8947E5D24232D21B(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8947E5D24232D21B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_82399EA7D10EF014(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_82399EA7D10EF014_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C0B359031F105529(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_C0B359031F105529_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C746014D0D2B848(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_1C746014D0D2B848_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_94598CD0252BF021(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_94598CD0252BF021_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_8A3A3ADEE0170A46(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8A3A3ADEE0170A46_1(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DAB75ABEB7C3D2A4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DAB75ABEB7C3D2A4_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_89B9937E8BBEFFBD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_89B9937E8BBEFFBD_OFFSET))(this, a1, a2, a3);
	}
};
