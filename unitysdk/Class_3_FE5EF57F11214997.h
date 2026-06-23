#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define CLASS_3_FE5EF57F11214997_METHOD_3_02866C8ED9B0638C_OFFSET UNITYSDK_OFFSET(0x14A91470)
#define CLASS_3_FE5EF57F11214997_METHOD_3_174FB5EB60E169CF_OFFSET UNITYSDK_OFFSET(0x14A901C0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_55E6709ACC277EC5_OFFSET UNITYSDK_OFFSET(0x14A8FC00)
#define CLASS_3_FE5EF57F11214997_METHOD_3_786EB3DA88E747E1_OFFSET UNITYSDK_OFFSET(0x14A8EC20)
#define CLASS_3_FE5EF57F11214997_METHOD_3_A98A1A6EF7388C85_OFFSET UNITYSDK_OFFSET(0x14A8F720)
#define CLASS_3_FE5EF57F11214997_METHOD_3_FAB6E62826A10BBD_OFFSET UNITYSDK_OFFSET(0x14A90B70)
#define CLASS_3_FE5EF57F11214997_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14A91910)
#define CLASS_3_FE5EF57F11214997__CTOR_OFFSET UNITYSDK_OFFSET(0x14A8EB00)

inline static constexpr unsigned int Class_3_FE5EF57F11214997_TypeDefinitionIndex = 66838;

class Class_3_FE5EF57F11214997 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::SplitToning*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_2; // 0xB8
	::System::Single Field_3_5; // 0xC0
	::UnityEngine::Color Field_3_3; // 0xC4
	::UnityEngine::Color Field_3_1; // 0xD4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntitySplitToningEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_786EB3DA88E747E1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_786EB3DA88E747E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A98A1A6EF7388C85(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_A98A1A6EF7388C85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_55E6709ACC277EC5(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_55E6709ACC277EC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_174FB5EB60E169CF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_174FB5EB60E169CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FAB6E62826A10BBD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_FAB6E62826A10BBD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_02866C8ED9B0638C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_02866C8ED9B0638C_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_TOSTRING_OFFSET))(this);
	}
};
