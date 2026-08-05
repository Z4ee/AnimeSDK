#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define CLASS_3_02DED2C85E03FD5F_METHOD_3_685319654EFB7DE8_OFFSET UNITYSDK_OFFSET(0x17658370)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_7D1110B7FCB079B2_OFFSET UNITYSDK_OFFSET(0x176564D0)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_9A2A9A88187DB1FD_OFFSET UNITYSDK_OFFSET(0x17657330)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_9B050032C1207559_OFFSET UNITYSDK_OFFSET(0x17654C10)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_A49291D8D5697DD9_OFFSET UNITYSDK_OFFSET(0x17653B10)
#define CLASS_3_02DED2C85E03FD5F_METHOD_3_D9EE753E6FC6631F_OFFSET UNITYSDK_OFFSET(0x17655700)
#define CLASS_3_02DED2C85E03FD5F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17658B70)
#define CLASS_3_02DED2C85E03FD5F__CTOR_OFFSET UNITYSDK_OFFSET(0x17653960)

inline static constexpr unsigned int Class_3_02DED2C85E03FD5F_TypeDefinitionIndex = 45014;

class Class_3_02DED2C85E03FD5F : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_15; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::SsrQuality>* Field_3_11; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_9; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_1; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_3; // 0xD8
	::System::Single Field_3_14; // 0xE0
	::System::Boolean Field_3_8; // 0xE4
	::System::Boolean Field_3_2; // 0xE5
	::System::Single Field_3_6; // 0xE8
	::UnityEngine::NAPRenderPipeline0::SsrQuality Field_3_10; // 0xEC
	::System::Single Field_3_4; // 0xF0
	::System::Single Field_3_0; // 0xF4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A49291D8D5697DD9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_A49291D8D5697DD9_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_9A2A9A88187DB1FD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpaceReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02DED2C85E03FD5F_METHOD_3_9A2A9A88187DB1FD_OFFSET))(this, a1, a2, a3);
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
