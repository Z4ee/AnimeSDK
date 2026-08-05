#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define CLASS_3_744D0CB83DAEF14D_METHOD_3_3ABBC04CD8947CA2_OFFSET UNITYSDK_OFFSET(0x15FBBED0)
#define CLASS_3_744D0CB83DAEF14D_METHOD_3_4968ADC3D4685955_OFFSET UNITYSDK_OFFSET(0x15FBC600)
#define CLASS_3_744D0CB83DAEF14D_METHOD_3_5B3365163538BC76_OFFSET UNITYSDK_OFFSET(0x15FBB7A0)
#define CLASS_3_744D0CB83DAEF14D_METHOD_3_7CA575C517627A0D_OFFSET UNITYSDK_OFFSET(0x15FBCAB0)
#define CLASS_3_744D0CB83DAEF14D_METHOD_3_ADC34F3C0CB04AB8_OFFSET UNITYSDK_OFFSET(0x15FBC0C0)
#define CLASS_3_744D0CB83DAEF14D_METHOD_3_D7AA75BF56499241_OFFSET UNITYSDK_OFFSET(0x15FBBCE0)
#define CLASS_3_744D0CB83DAEF14D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15FBCD80)
#define CLASS_3_744D0CB83DAEF14D__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBB6F0)

inline static constexpr unsigned int Class_3_744D0CB83DAEF14D_TypeDefinitionIndex = 54048;

class Class_3_744D0CB83DAEF14D : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_1; // 0xA8
	::System::Single Field_3_0; // 0xB0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_5B3365163538BC76(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_METHOD_3_5B3365163538BC76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D7AA75BF56499241(::UnityEngine::Rendering::Universal::CharacterVolumeProxy* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_METHOD_3_D7AA75BF56499241_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3ABBC04CD8947CA2(::UnityEngine::Rendering::Universal::CharacterVolumeProxy* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_METHOD_3_3ABBC04CD8947CA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ADC34F3C0CB04AB8(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_METHOD_3_ADC34F3C0CB04AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4968ADC3D4685955(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_METHOD_3_4968ADC3D4685955_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7CA575C517627A0D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::CharacterVolumeProxy*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_METHOD_3_7CA575C517627A0D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_744D0CB83DAEF14D_TOSTRING_OFFSET))(this);
	}
};
