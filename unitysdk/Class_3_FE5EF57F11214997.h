#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define CLASS_3_FE5EF57F11214997_METHOD_3_02866C8ED9B0638C_OFFSET UNITYSDK_OFFSET(0x138F12F0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_55E6709ACC277EC5_OFFSET UNITYSDK_OFFSET(0x138EFB60)
#define CLASS_3_FE5EF57F11214997_METHOD_3_66E57C7C6D4D34C7_OFFSET UNITYSDK_OFFSET(0x138EF6F0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_8785D34447365EC7_OFFSET UNITYSDK_OFFSET(0x138EEC10)
#define CLASS_3_FE5EF57F11214997_METHOD_3_D695F17F002F06EF_OFFSET UNITYSDK_OFFSET(0x138F0110)
#define CLASS_3_FE5EF57F11214997_METHOD_3_FAB6E62826A10BBD_OFFSET UNITYSDK_OFFSET(0x138F0A90)
#define CLASS_3_FE5EF57F11214997_TOSTRING_OFFSET UNITYSDK_OFFSET(0x138F1770)
#define CLASS_3_FE5EF57F11214997__CTOR_OFFSET UNITYSDK_OFFSET(0x138EEAF0)

inline static constexpr unsigned int Class_3_FE5EF57F11214997_TypeDefinitionIndex = 68664;

class Class_3_FE5EF57F11214997 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::SplitToning*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_1; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_7; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xB8
	::UnityEngine::Color Field_3_0; // 0xC0
	::UnityEngine::Color Field_3_6; // 0xD0
	::System::Single Field_3_4; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntitySplitToningEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_8785D34447365EC7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_8785D34447365EC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66E57C7C6D4D34C7(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_66E57C7C6D4D34C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_55E6709ACC277EC5(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_55E6709ACC277EC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D695F17F002F06EF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_D695F17F002F06EF_OFFSET))(this, a1, a2);
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
