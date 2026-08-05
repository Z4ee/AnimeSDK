#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define CLASS_3_68D6A416A8669EF4_METHOD_3_16B4653162ECD0C6_OFFSET UNITYSDK_OFFSET(0x17625730)
#define CLASS_3_68D6A416A8669EF4_METHOD_3_1976B37183AA19E1_OFFSET UNITYSDK_OFFSET(0x17627FF0)
#define CLASS_3_68D6A416A8669EF4_METHOD_3_1C4AB72164D0779B_OFFSET UNITYSDK_OFFSET(0x17626430)
#define CLASS_3_68D6A416A8669EF4_METHOD_3_276ED03C77AFABD9_OFFSET UNITYSDK_OFFSET(0x17623DE0)
#define CLASS_3_68D6A416A8669EF4_METHOD_3_350EFE588D89B9D6_OFFSET UNITYSDK_OFFSET(0x176270D0)
#define CLASS_3_68D6A416A8669EF4_METHOD_3_B970DCA327733AF2_OFFSET UNITYSDK_OFFSET(0x17624CB0)
#define CLASS_3_68D6A416A8669EF4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x176287B0)
#define CLASS_3_68D6A416A8669EF4__CTOR_OFFSET UNITYSDK_OFFSET(0x17623C60)

inline static constexpr unsigned int Class_3_68D6A416A8669EF4_TypeDefinitionIndex = 73422;

class Class_3_68D6A416A8669EF4 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::UnsharpMask*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_3; // 0xA8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_5; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_1; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_9; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0xD0
	::System::Boolean Field_3_8; // 0xD8
	::System::Boolean Field_3_2; // 0xD9
	::System::Single Field_3_10; // 0xDC
	::System::Single Field_3_6; // 0xE0
	::System::Single Field_3_0; // 0xE4
	::System::Int32 Field_3_4; // 0xE8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_276ED03C77AFABD9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::UnsharpMask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::UnsharpMask*))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_METHOD_3_276ED03C77AFABD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B970DCA327733AF2(::UnityEngine::Rendering::Universal::UnsharpMask* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UnsharpMask*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_METHOD_3_B970DCA327733AF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_16B4653162ECD0C6(::UnityEngine::Rendering::Universal::UnsharpMask* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UnsharpMask*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_METHOD_3_16B4653162ECD0C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C4AB72164D0779B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::UnsharpMask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::UnsharpMask*))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_METHOD_3_1C4AB72164D0779B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_350EFE588D89B9D6(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::UnsharpMask* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::UnsharpMask*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_METHOD_3_350EFE588D89B9D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1976B37183AA19E1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::UnsharpMask* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::UnsharpMask*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_METHOD_3_1976B37183AA19E1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68D6A416A8669EF4_TOSTRING_OFFSET))(this);
	}
};
