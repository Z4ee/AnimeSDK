#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityOldCRTEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define CLASS_3_C6048D69F8981598_METHOD_3_172A3580443DF17C_OFFSET UNITYSDK_OFFSET(0x12696420)
#define CLASS_3_C6048D69F8981598_METHOD_3_A276361499E36E20_OFFSET UNITYSDK_OFFSET(0x12694970)
#define CLASS_3_C6048D69F8981598_METHOD_3_ABEF32D867BCA3DF_OFFSET UNITYSDK_OFFSET(0x12696DF0)
#define CLASS_3_C6048D69F8981598_METHOD_3_AF2DDFAEF4930268_OFFSET UNITYSDK_OFFSET(0x12695450)
#define CLASS_3_C6048D69F8981598_METHOD_3_C27C912191E15882_OFFSET UNITYSDK_OFFSET(0x12695B30)
#define CLASS_3_C6048D69F8981598_METHOD_3_FECC01D7618D568D_OFFSET UNITYSDK_OFFSET(0x12697850)
#define CLASS_3_C6048D69F8981598_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12697DA0)
#define CLASS_3_C6048D69F8981598__CTOR_OFFSET UNITYSDK_OFFSET(0x12694840)

inline static constexpr unsigned int Class_3_C6048D69F8981598_TypeDefinitionIndex = 83267;

class Class_3_C6048D69F8981598 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::OldCRT*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_0; // 0xA8
	::UnityEngine::Texture* Field_3_1; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::System::Single Field_3_5; // 0xD0
	::UnityEngine::Vector2 Field_3_3; // 0xD4
	::System::Single Field_3_7; // 0xDC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityOldCRTEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A276361499E36E20(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_A276361499E36E20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF2DDFAEF4930268(::UnityEngine::Rendering::Universal::OldCRT* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_AF2DDFAEF4930268_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C27C912191E15882(::UnityEngine::Rendering::Universal::OldCRT* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_C27C912191E15882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_172A3580443DF17C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_172A3580443DF17C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ABEF32D867BCA3DF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_ABEF32D867BCA3DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FECC01D7618D568D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_FECC01D7618D568D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_TOSTRING_OFFSET))(this);
	}
};
