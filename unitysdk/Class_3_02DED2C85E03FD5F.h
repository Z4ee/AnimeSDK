#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define CLASS_3_02DED2C85E03FD5F_METHOD_3_59EEF05779625F84_OFFSET UNITYSDK_OFFSET(0x1772DDC0)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_685319654EFB7DE8_OFFSET UNITYSDK_OFFSET(0x17732740)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_7D1110B7FCB079B2_OFFSET UNITYSDK_OFFSET(0x17730810)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_9A9586DD341AE14A_OFFSET UNITYSDK_OFFSET(0x17731680)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_9B050032C1207559_OFFSET UNITYSDK_OFFSET(0x1772EEF0)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_D9EE753E6FC6631F_OFFSET UNITYSDK_OFFSET(0x1772FA10)
#define CLASS_3_02DED2C85E03FD5F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17732F70)
#define CLASS_3_02DED2C85E03FD5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1772DC10)

inline static constexpr unsigned int Class_3_02DED2C85E03FD5F_TypeDefinitionIndex = 86247;

class Class_3_02DED2C85E03FD5F : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::SsrQuality>* Field_3_8; // 0xD8
	::System::Single Field_3_7; // 0xE0
	::System::Single Field_3_5; // 0xE4
	::System::Single Field_3_13; // 0xE8
	::System::Single Field_3_3; // 0xEC
	::UnityEngine::NAPRenderPipeline0::SsrQuality Field_3_9; // 0xF0
	::System::Boolean Field_3_1; // 0xF4
	::System::Boolean Field_3_11; // 0xF5

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_59EEF05779625F84(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_59EEF05779625F84_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9B050032C1207559(::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_9B050032C1207559_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D9EE753E6FC6631F(::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_D9EE753E6FC6631F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7D1110B7FCB079B2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_7D1110B7FCB079B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9A9586DD341AE14A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_9A9586DD341AE14A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_685319654EFB7DE8(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_685319654EFB7DE8_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_TOSTRING_OFFSET))(this);
	}
};
