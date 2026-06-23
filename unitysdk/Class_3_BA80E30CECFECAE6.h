#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityLensDirtEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define CLASS_3_BA80E30CECFECAE6_METHOD_3_3280FD9CFB73D1BC_OFFSET UNITYSDK_OFFSET(0x14317700)
#define CLASS_3_BA80E30CECFECAE6_METHOD_3_46AD6A34A98F799B_OFFSET UNITYSDK_OFFSET(0x14318630)
#define CLASS_3_BA80E30CECFECAE6_METHOD_3_47E2F6F7684D32D0_OFFSET UNITYSDK_OFFSET(0x14313D00)
#define CLASS_3_BA80E30CECFECAE6_METHOD_3_63BD62E0223EED17_OFFSET UNITYSDK_OFFSET(0x14316810)
#define CLASS_3_BA80E30CECFECAE6_METHOD_3_7415542367EFB3B6_1_OFFSET UNITYSDK_OFFSET(0x143158E0)
#define CLASS_3_BA80E30CECFECAE6_METHOD_3_7415542367EFB3B6_OFFSET UNITYSDK_OFFSET(0x14314DF0)
#define CLASS_3_BA80E30CECFECAE6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14318D60)
#define CLASS_3_BA80E30CECFECAE6__CTOR_OFFSET UNITYSDK_OFFSET(0x14313B50)

inline static constexpr unsigned int Class_3_BA80E30CECFECAE6_TypeDefinitionIndex = 49403;

class Class_3_BA80E30CECFECAE6 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::LensDirt*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_10; // 0xA8
	::UnityEngine::Texture* Field_3_1; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_6; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::UnityEngine::Texture* Field_3_9; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_8; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_0; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xE8
	::System::Single Field_3_5; // 0xF0
	::System::Boolean Field_3_3; // 0xF4
	::UnityEngine::Vector4 Field_3_11; // 0xF8
	::System::Single Field_3_13; // 0x108
	::UnityEngine::Vector4 Field_3_7; // 0x10C

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityLensDirtEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_47E2F6F7684D32D0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_METHOD_3_47E2F6F7684D32D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7415542367EFB3B6(::UnityEngine::Rendering::Universal::LensDirt* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_METHOD_3_7415542367EFB3B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7415542367EFB3B6_1(::UnityEngine::Rendering::Universal::LensDirt* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_METHOD_3_7415542367EFB3B6_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_63BD62E0223EED17(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_METHOD_3_63BD62E0223EED17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3280FD9CFB73D1BC(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_METHOD_3_3280FD9CFB73D1BC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_46AD6A34A98F799B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_METHOD_3_46AD6A34A98F799B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA80E30CECFECAE6_TOSTRING_OFFSET))(this);
	}
};
