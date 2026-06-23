#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityVignette; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define CLASS_3_F71D1A223C2F87B9_METHOD_3_0E901BDC9CF46EB0_OFFSET UNITYSDK_OFFSET(0x13E47270)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_4F887D1A9C0AF00A_OFFSET UNITYSDK_OFFSET(0x13E492B0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_6EB6139D429D8DB0_OFFSET UNITYSDK_OFFSET(0x13E4A0B0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_876CF6C845FC1194_OFFSET UNITYSDK_OFFSET(0x13E455D0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_D2FD083F57178B2F_OFFSET UNITYSDK_OFFSET(0x13E469D0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_FDD03A9B46343646_OFFSET UNITYSDK_OFFSET(0x13E4B300)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_FFCC0F6E802A34D6_OFFSET UNITYSDK_OFFSET(0x13E480D0)
#define CLASS_3_F71D1A223C2F87B9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13E4AAC0)
#define CLASS_3_F71D1A223C2F87B9__CTOR_OFFSET UNITYSDK_OFFSET(0x13E45470)

inline static constexpr unsigned int Class_3_F71D1A223C2F87B9_TypeDefinitionIndex = 47828;

class Class_3_F71D1A223C2F87B9 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::Vignette*, ::MoleMole::Config::ConfigEntityVignette*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC8
	::System::Boolean Field_3_9; // 0xD0
	::System::Single Field_3_5; // 0xD4
	::System::Single Field_3_7; // 0xD8
	::UnityEngine::Color Field_3_1; // 0xDC
	::UnityEngine::Vector2 Field_3_3; // 0xEC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityVignette* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityVignette*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_876CF6C845FC1194(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_876CF6C845FC1194_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D2FD083F57178B2F(::UnityEngine::Rendering::Universal::Vignette* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_D2FD083F57178B2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0E901BDC9CF46EB0(::UnityEngine::Rendering::Universal::Vignette* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_0E901BDC9CF46EB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FFCC0F6E802A34D6(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_FFCC0F6E802A34D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4F887D1A9C0AF00A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_4F887D1A9C0AF00A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6EB6139D429D8DB0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_6EB6139D429D8DB0_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_FDD03A9B46343646(::UnityEngine::Rendering::Universal::Vignette* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_FDD03A9B46343646_OFFSET))(this, a1);
	}
};
