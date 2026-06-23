#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define CLASS_3_35C50B085209F149_METHOD_3_1A3322AE6D740D53_OFFSET UNITYSDK_OFFSET(0x16263DE0)
#define CLASS_3_35C50B085209F149_METHOD_3_2D725953FC14D02A_OFFSET UNITYSDK_OFFSET(0x16263660)
#define CLASS_3_35C50B085209F149_METHOD_3_3AFA3EFC0F8DCBC1_OFFSET UNITYSDK_OFFSET(0x1341C9F0)
#define CLASS_3_35C50B085209F149_METHOD_3_4AD6D2E95D04FE44_OFFSET UNITYSDK_OFFSET(0x1341C310)
#define CLASS_3_35C50B085209F149_METHOD_3_A7E199A76F57C021_OFFSET UNITYSDK_OFFSET(0x16264170)
#define CLASS_3_35C50B085209F149_METHOD_3_C74FCFF6988A4AAD_OFFSET UNITYSDK_OFFSET(0x1341D0B0)
#define CLASS_3_35C50B085209F149_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1341D430)
#define CLASS_3_35C50B085209F149__CTOR_OFFSET UNITYSDK_OFFSET(0x16263580)

inline static constexpr unsigned int Class_3_35C50B085209F149_TypeDefinitionIndex = 53565;

class Class_3_35C50B085209F149 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::WhiteBalance*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xB0
	::System::Single Field_3_1; // 0xB8
	::System::Single Field_3_3; // 0xBC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2D725953FC14D02A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_2D725953FC14D02A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1A3322AE6D740D53(::UnityEngine::Rendering::Universal::WhiteBalance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_1A3322AE6D740D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A7E199A76F57C021(::UnityEngine::Rendering::Universal::WhiteBalance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_A7E199A76F57C021_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4AD6D2E95D04FE44(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_4AD6D2E95D04FE44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3AFA3EFC0F8DCBC1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_3AFA3EFC0F8DCBC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C74FCFF6988A4AAD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_C74FCFF6988A4AAD_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_TOSTRING_OFFSET))(this);
	}
};
