#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_3_11ED433BD84D41CB_METHOD_3_26C448A2DB8D647D_1_OFFSET UNITYSDK_OFFSET(0x12265C40)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_26C448A2DB8D647D_OFFSET UNITYSDK_OFFSET(0x12265C30)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_2DA39DA2D33421B6_OFFSET UNITYSDK_OFFSET(0x12265280)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_4F63E3D866C5D538_OFFSET UNITYSDK_OFFSET(0x1443A400)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_5444750A6160D013_OFFSET UNITYSDK_OFFSET(0x14438B70)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_9226E9D37DB49A3A_OFFSET UNITYSDK_OFFSET(0x1443ECD0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_B3E15C9CE7ABB609_OFFSET UNITYSDK_OFFSET(0x12262E50)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_C32CF6DCEDFD1751_OFFSET UNITYSDK_OFFSET(0x1443C710)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x12265BC0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_D6D8F6A14B0AA23F_1_OFFSET UNITYSDK_OFFSET(0x12265C10)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_D6D8F6A14B0AA23F_2_OFFSET UNITYSDK_OFFSET(0x12265C20)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_D6D8F6A14B0AA23F_OFFSET UNITYSDK_OFFSET(0x12265C00)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_D967EFA57A382632_OFFSET UNITYSDK_OFFSET(0x14436090)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_E0AC040DE2AA8272_OFFSET UNITYSDK_OFFSET(0x12265C50)
#define CLASS_3_11ED433BD84D41CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x122642E0)
#define CLASS_3_11ED433BD84D41CB__CTOR_OFFSET UNITYSDK_OFFSET(0x14435DA0)

inline static constexpr unsigned int Class_3_11ED433BD84D41CB_TypeDefinitionIndex = 42847;

class Class_3_11ED433BD84D41CB : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_26; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0xF0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_18; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofDebugMode>* Field_3_2; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0x110
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0x118
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_3_1; // 0x120
	::System::Single Field_3_13; // 0x124
	::System::Single Field_3_5; // 0x128
	::UnityEngine::Rendering::Universal::DofDebugMode Field_3_3; // 0x12C
	::System::Single Field_3_9; // 0x130
	::System::Single Field_3_17; // 0x134
	::System::Single Field_3_21; // 0x138
	::System::Int32 Field_3_19; // 0x13C
	::System::Single Field_3_23; // 0x140
	::System::Single Field_3_7; // 0x144
	::System::Single Field_3_15; // 0x148
	::System::Boolean Field_3_11; // 0x14C
	::System::Boolean Field_3_25; // 0x14D
	::System::Boolean Field_3_27; // 0x14E
	::System::Boolean Field_3_29; // 0x14F

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_D967EFA57A382632(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_D967EFA57A382632_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5444750A6160D013(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_5444750A6160D013_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4F63E3D866C5D538(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_4F63E3D866C5D538_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C32CF6DCEDFD1751(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_C32CF6DCEDFD1751_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9226E9D37DB49A3A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_9226E9D37DB49A3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B3E15C9CE7ABB609(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_B3E15C9CE7ABB609_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2DA39DA2D33421B6(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_2DA39DA2D33421B6_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_D6D8F6A14B0AA23F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F_1(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_D6D8F6A14B0AA23F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F_2(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_D6D8F6A14B0AA23F_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_26C448A2DB8D647D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_26C448A2DB8D647D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_26C448A2DB8D647D_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_26C448A2DB8D647D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E0AC040DE2AA8272(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_E0AC040DE2AA8272_OFFSET))(this, a1, a2, a3);
	}
};
