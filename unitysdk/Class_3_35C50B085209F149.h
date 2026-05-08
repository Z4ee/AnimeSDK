#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define CLASS_3_35C50B085209F149_METHOD_3_07660D2C5C903CF2_OFFSET UNITYSDK_OFFSET(0x161DBC70)
#define CLASS_3_35C50B085209F149_METHOD_3_2BC2D45636E50E1B_1_OFFSET UNITYSDK_OFFSET(0x161DCE00)
#define CLASS_3_35C50B085209F149_METHOD_3_2BC2D45636E50E1B_OFFSET UNITYSDK_OFFSET(0x161DCD80)
#define CLASS_3_35C50B085209F149_METHOD_3_2D725953FC14D02A_OFFSET UNITYSDK_OFFSET(0x161DA5E0)
#define CLASS_3_35C50B085209F149_METHOD_3_4D348825DAF4793F_1_OFFSET UNITYSDK_OFFSET(0x161DCDE0)
#define CLASS_3_35C50B085209F149_METHOD_3_4D348825DAF4793F_OFFSET UNITYSDK_OFFSET(0x161DCDD0)
#define CLASS_3_35C50B085209F149_METHOD_3_5862A310EF678C7E_OFFSET UNITYSDK_OFFSET(0x161DC370)
#define CLASS_3_35C50B085209F149_METHOD_3_7A6EF81BFD194678_OFFSET UNITYSDK_OFFSET(0x161DB160)
#define CLASS_3_35C50B085209F149_METHOD_3_98A615DE205CAFE4_OFFSET UNITYSDK_OFFSET(0x161DCDF0)
#define CLASS_3_35C50B085209F149_METHOD_3_9EC50E06841AC64A_OFFSET UNITYSDK_OFFSET(0x161DAD90)
#define CLASS_3_35C50B085209F149_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x161DCD90)
#define CLASS_3_35C50B085209F149_METHOD_3_DFF36E4AA9AEA428_OFFSET UNITYSDK_OFFSET(0x161DB530)
#define CLASS_3_35C50B085209F149_TOSTRING_OFFSET UNITYSDK_OFFSET(0x161DC730)
#define CLASS_3_35C50B085209F149__CTOR_OFFSET UNITYSDK_OFFSET(0x161DA500)

inline static constexpr unsigned int Class_3_35C50B085209F149_TypeDefinitionIndex = 80097;

class Class_3_35C50B085209F149 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::WhiteBalance*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xB0
	::System::Single Field_3_3; // 0xB8
	::System::Single Field_3_1; // 0xBC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2D725953FC14D02A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_2D725953FC14D02A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9EC50E06841AC64A(::UnityEngine::Rendering::Universal::WhiteBalance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_9EC50E06841AC64A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7A6EF81BFD194678(::UnityEngine::Rendering::Universal::WhiteBalance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_7A6EF81BFD194678_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DFF36E4AA9AEA428(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_DFF36E4AA9AEA428_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_07660D2C5C903CF2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_07660D2C5C903CF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5862A310EF678C7E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_5862A310EF678C7E_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2BC2D45636E50E1B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_2BC2D45636E50E1B_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_4D348825DAF4793F(::UnityEngine::Rendering::Universal::WhiteBalance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_4D348825DAF4793F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4D348825DAF4793F_1(::UnityEngine::Rendering::Universal::WhiteBalance* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_4D348825DAF4793F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98A615DE205CAFE4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_98A615DE205CAFE4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2BC2D45636E50E1B_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::WhiteBalance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::WhiteBalance*))((::PBYTE)hIl2Cpp + CLASS_3_35C50B085209F149_METHOD_3_2BC2D45636E50E1B_1_OFFSET))(this, a1, a2);
	}
};
