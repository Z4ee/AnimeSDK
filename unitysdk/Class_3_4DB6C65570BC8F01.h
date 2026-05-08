#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityPartialBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define CLASS_3_4DB6C65570BC8F01_METHOD_3_04A4EAEAC4D14A45_OFFSET UNITYSDK_OFFSET(0x11EEE090)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_2BECB1DF26BBC259_OFFSET UNITYSDK_OFFSET(0x11EF0C00)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_3EFBF3D0E4B03503_OFFSET UNITYSDK_OFFSET(0x11EEFB60)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_46B866EC5B056D84_OFFSET UNITYSDK_OFFSET(0x11EEECB0)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_6E8555F903D90178_1_OFFSET UNITYSDK_OFFSET(0x11EF0C80)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_6E8555F903D90178_OFFSET UNITYSDK_OFFSET(0x11EF0C50)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_73AC08BC6EFA378A_OFFSET UNITYSDK_OFFSET(0x11EECAC0)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_81FD3C4CBA2657F4_OFFSET UNITYSDK_OFFSET(0x11EEBCA0)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_C35EA334620ABD4E_1_OFFSET UNITYSDK_OFFSET(0x11EF0C70)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_C35EA334620ABD4E_OFFSET UNITYSDK_OFFSET(0x11EF0C60)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x11EF0C10)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_CD7C481A3F1268A6_OFFSET UNITYSDK_OFFSET(0x11EED480)
#define CLASS_3_4DB6C65570BC8F01_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11EF03A0)
#define CLASS_3_4DB6C65570BC8F01__CTOR_OFFSET UNITYSDK_OFFSET(0x11EEBB40)

inline static constexpr unsigned int Class_3_4DB6C65570BC8F01_TypeDefinitionIndex = 71057;

class Class_3_4DB6C65570BC8F01 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::PartialBlur*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xB0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::System::Single Field_3_3; // 0xD0
	::System::Single Field_3_7; // 0xD4
	::System::Boolean Field_3_9; // 0xD8
	::System::Int32 Field_3_5; // 0xDC
	::System::Int32 Field_3_1; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityPartialBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_81FD3C4CBA2657F4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_81FD3C4CBA2657F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_73AC08BC6EFA378A(::UnityEngine::Rendering::Universal::PartialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_73AC08BC6EFA378A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CD7C481A3F1268A6(::UnityEngine::Rendering::Universal::PartialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_CD7C481A3F1268A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_04A4EAEAC4D14A45(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_04A4EAEAC4D14A45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_46B866EC5B056D84(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_46B866EC5B056D84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3EFBF3D0E4B03503(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_3EFBF3D0E4B03503_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2BECB1DF26BBC259(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_2BECB1DF26BBC259_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_6E8555F903D90178(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_6E8555F903D90178_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C35EA334620ABD4E(::UnityEngine::Rendering::Universal::PartialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_C35EA334620ABD4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C35EA334620ABD4E_1(::UnityEngine::Rendering::Universal::PartialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_C35EA334620ABD4E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6E8555F903D90178_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_6E8555F903D90178_1_OFFSET))(this, a1, a2);
	}
};
