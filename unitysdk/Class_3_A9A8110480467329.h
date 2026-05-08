#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define CLASS_3_A9A8110480467329_METHOD_3_25AC83D305663778_OFFSET UNITYSDK_OFFSET(0xF9D8350)
#define CLASS_3_A9A8110480467329_METHOD_3_45BC804D86A01FC3_OFFSET UNITYSDK_OFFSET(0xF9D5B40)
#define CLASS_3_A9A8110480467329_METHOD_3_514C631731EFCDC1_OFFSET UNITYSDK_OFFSET(0xF9D7610)
#define CLASS_3_A9A8110480467329_METHOD_3_81898B388B2ABBAC_OFFSET UNITYSDK_OFFSET(0xF9DB1B0)
#define CLASS_3_A9A8110480467329_METHOD_3_A059119D107E5B8F_OFFSET UNITYSDK_OFFSET(0xF9D91A0)
#define CLASS_3_A9A8110480467329_METHOD_3_A34CDAD24FF567AB_1_OFFSET UNITYSDK_OFFSET(0xF9DB220)
#define CLASS_3_A9A8110480467329_METHOD_3_A34CDAD24FF567AB_OFFSET UNITYSDK_OFFSET(0xF9DB1C0)
#define CLASS_3_A9A8110480467329_METHOD_3_A8517DDC83130AC3_OFFSET UNITYSDK_OFFSET(0xF9DA0C0)
#define CLASS_3_A9A8110480467329_METHOD_3_B75969FBE2538DB5_1_OFFSET UNITYSDK_OFFSET(0xF9DB210)
#define CLASS_3_A9A8110480467329_METHOD_3_B75969FBE2538DB5_OFFSET UNITYSDK_OFFSET(0xF9DB1A0)
#define CLASS_3_A9A8110480467329_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xF9DB1D0)
#define CLASS_3_A9A8110480467329_METHOD_3_D024C23A3DDBB573_OFFSET UNITYSDK_OFFSET(0xF9D6C50)
#define CLASS_3_A9A8110480467329_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF9DA870)
#define CLASS_3_A9A8110480467329__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D59C0)

inline static constexpr unsigned int Class_3_A9A8110480467329_TypeDefinitionIndex = 73614;

class Class_3_A9A8110480467329 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::AutoExposure*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_6; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD0
	::System::Single Field_3_5; // 0xD8
	::System::Boolean Field_3_7; // 0xDC
	::System::Single Field_3_9; // 0xE0
	::System::Single Field_3_11; // 0xE4
	::UnityEngine::Vector2 Field_3_1; // 0xE8
	::UnityEngine::Vector2 Field_3_3; // 0xF0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityAutoExposureEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_45BC804D86A01FC3(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_45BC804D86A01FC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D024C23A3DDBB573(::UnityEngine::Rendering::Universal::AutoExposure* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_D024C23A3DDBB573_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_514C631731EFCDC1(::UnityEngine::Rendering::Universal::AutoExposure* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_514C631731EFCDC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_25AC83D305663778(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_25AC83D305663778_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A059119D107E5B8F(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_A059119D107E5B8F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A8517DDC83130AC3(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_A8517DDC83130AC3_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_B75969FBE2538DB5(::UnityEngine::Rendering::Universal::AutoExposure* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_B75969FBE2538DB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_81898B388B2ABBAC(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_81898B388B2ABBAC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A34CDAD24FF567AB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_A34CDAD24FF567AB_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_B75969FBE2538DB5_1(::UnityEngine::Rendering::Universal::AutoExposure* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_B75969FBE2538DB5_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A34CDAD24FF567AB_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_A34CDAD24FF567AB_1_OFFSET))(this, a1, a2);
	}
};
