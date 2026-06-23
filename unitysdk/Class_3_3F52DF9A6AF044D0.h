#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityTonemappingEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define CLASS_3_3F52DF9A6AF044D0_METHOD_3_29C57C2057FA1BDC_OFFSET UNITYSDK_OFFSET(0x17B01DD0)
#define CLASS_3_3F52DF9A6AF044D0_METHOD_3_37B059C03DC28E91_OFFSET UNITYSDK_OFFSET(0x17B012F0)
#define CLASS_3_3F52DF9A6AF044D0_METHOD_3_745531BC3C5DAE35_OFFSET UNITYSDK_OFFSET(0x17B00840)
#define CLASS_3_3F52DF9A6AF044D0_METHOD_3_876E32593E3A8223_OFFSET UNITYSDK_OFFSET(0x17B02BE0)
#define CLASS_3_3F52DF9A6AF044D0_METHOD_3_A51E178600357BB1_OFFSET UNITYSDK_OFFSET(0x17AFF750)
#define CLASS_3_3F52DF9A6AF044D0_METHOD_3_BF53518EF1B648A0_OFFSET UNITYSDK_OFFSET(0x17B03B30)
#define CLASS_3_3F52DF9A6AF044D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B04160)
#define CLASS_3_3F52DF9A6AF044D0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFF5A0)

inline static constexpr unsigned int Class_3_3F52DF9A6AF044D0_TypeDefinitionIndex = 41633;

class Class_3_3F52DF9A6AF044D0 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::Tonemapping*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::TonemappingMode>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xD8
	::System::Single Field_3_7; // 0xE0
	::UnityEngine::NAPRenderPipeline0::TonemappingMode Field_3_1; // 0xE4
	::System::Single Field_3_11; // 0xE8
	::System::Single Field_3_5; // 0xEC
	::System::Single Field_3_13; // 0xF0
	::System::Single Field_3_9; // 0xF4
	::System::Single Field_3_3; // 0xF8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityTonemappingEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A51E178600357BB1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Tonemapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Tonemapping*))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_METHOD_3_A51E178600357BB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_745531BC3C5DAE35(::UnityEngine::Rendering::Universal::Tonemapping* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Tonemapping*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_METHOD_3_745531BC3C5DAE35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37B059C03DC28E91(::UnityEngine::Rendering::Universal::Tonemapping* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Tonemapping*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_METHOD_3_37B059C03DC28E91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_29C57C2057FA1BDC(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Tonemapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Tonemapping*))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_METHOD_3_29C57C2057FA1BDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_876E32593E3A8223(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Tonemapping* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Tonemapping*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_METHOD_3_876E32593E3A8223_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BF53518EF1B648A0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Tonemapping* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Tonemapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_METHOD_3_BF53518EF1B648A0_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52DF9A6AF044D0_TOSTRING_OFFSET))(this);
	}
};
