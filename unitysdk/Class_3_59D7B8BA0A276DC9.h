#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_0F38DF92E5225FD0_1_OFFSET UNITYSDK_OFFSET(0x1130E4F0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_0F38DF92E5225FD0_OFFSET UNITYSDK_OFFSET(0x1130E480)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_18E6E15A204EBBD3_OFFSET UNITYSDK_OFFSET(0x1130C6D0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_2C846063BC9BE6C4_OFFSET UNITYSDK_OFFSET(0x1130D490)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_3556E0FBAA8E3179_OFFSET UNITYSDK_OFFSET(0x1130CA30)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_6F220FAD9593AE98_1_OFFSET UNITYSDK_OFFSET(0x1130E490)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_6F220FAD9593AE98_OFFSET UNITYSDK_OFFSET(0x1130E470)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_7706A796C0C3BA04_OFFSET UNITYSDK_OFFSET(0x1130C010)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_8BF7232547DA717E_OFFSET UNITYSDK_OFFSET(0x1130CDC0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x1130E4B0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_F192C8770FB8FF19_OFFSET UNITYSDK_OFFSET(0x1130E4A0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_FF6B0E487DA629B7_OFFSET UNITYSDK_OFFSET(0x1130DAE0)
#define CLASS_3_59D7B8BA0A276DC9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1130DE40)
#define CLASS_3_59D7B8BA0A276DC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1130BF30)

inline static constexpr unsigned int Class_3_59D7B8BA0A276DC9_TypeDefinitionIndex = 40760;

class Class_3_59D7B8BA0A276DC9 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::ColorLookup*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_0; // 0xA8
	::UnityEngine::Texture* Field_3_1; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xB8
	::System::Single Field_3_3; // 0xC0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityColorLookupEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_7706A796C0C3BA04(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_7706A796C0C3BA04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_18E6E15A204EBBD3(::UnityEngine::Rendering::Universal::ColorLookup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_18E6E15A204EBBD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3556E0FBAA8E3179(::UnityEngine::Rendering::Universal::ColorLookup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_3556E0FBAA8E3179_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8BF7232547DA717E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_8BF7232547DA717E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2C846063BC9BE6C4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_2C846063BC9BE6C4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FF6B0E487DA629B7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_FF6B0E487DA629B7_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_6F220FAD9593AE98(::UnityEngine::Rendering::Universal::ColorLookup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_6F220FAD9593AE98_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0F38DF92E5225FD0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_0F38DF92E5225FD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6F220FAD9593AE98_1(::UnityEngine::Rendering::Universal::ColorLookup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_6F220FAD9593AE98_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F192C8770FB8FF19(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_F192C8770FB8FF19_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_0F38DF92E5225FD0_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_0F38DF92E5225FD0_1_OFFSET))(this, a1, a2);
	}
};
