#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
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

#define CLASS_3_C6048D69F8981598_METHOD_3_172A3580443DF17C_OFFSET UNITYSDK_OFFSET(0x18CD2520)
#define CLASS_3_C6048D69F8981598_METHOD_3_62E22FFE45464BA1_OFFSET UNITYSDK_OFFSET(0x18CD1C60)
#define CLASS_3_C6048D69F8981598_METHOD_3_8C903363C55773A0_OFFSET UNITYSDK_OFFSET(0x18CD2ED0)
#define CLASS_3_C6048D69F8981598_METHOD_3_AAC1E201EDCC3F25_OFFSET UNITYSDK_OFFSET(0x18CD0B10)
#define CLASS_3_C6048D69F8981598_METHOD_3_D9B577439A835D0F_OFFSET UNITYSDK_OFFSET(0x18CD15B0)
#define CLASS_3_C6048D69F8981598_METHOD_3_FECC01D7618D568D_OFFSET UNITYSDK_OFFSET(0x194EBAB0)
#define CLASS_3_C6048D69F8981598_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194EBFF0)
#define CLASS_3_C6048D69F8981598__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD09E0)

inline static constexpr unsigned int Class_3_C6048D69F8981598_TypeDefinitionIndex = 88006;

class Class_3_C6048D69F8981598 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::OldCRT*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_1; // 0xA8
	::UnityEngine::Texture* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_7; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xC8
	::System::Single Field_3_10; // 0xD0
	::System::Single Field_3_4; // 0xD4
	::UnityEngine::Vector2 Field_3_6; // 0xD8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityOldCRTEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_AAC1E201EDCC3F25(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_AAC1E201EDCC3F25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D9B577439A835D0F(::UnityEngine::Rendering::Universal::OldCRT* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_D9B577439A835D0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_62E22FFE45464BA1(::UnityEngine::Rendering::Universal::OldCRT* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_62E22FFE45464BA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_172A3580443DF17C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_172A3580443DF17C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8C903363C55773A0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::OldCRT* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::OldCRT*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C6048D69F8981598_METHOD_3_8C903363C55773A0_OFFSET))(this, a1, a2, a3);
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
