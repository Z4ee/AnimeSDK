#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define CLASS_3_A9A8110480467329_METHOD_3_0764B034DBA6672A_OFFSET UNITYSDK_OFFSET(0x11E67420)
#define CLASS_3_A9A8110480467329_METHOD_3_45BC804D86A01FC3_OFFSET UNITYSDK_OFFSET(0x11E659A0)
#define CLASS_3_A9A8110480467329_METHOD_3_9C037F8FB897F814_OFFSET UNITYSDK_OFFSET(0x11E68140)
#define CLASS_3_A9A8110480467329_METHOD_3_A059119D107E5B8F_OFFSET UNITYSDK_OFFSET(0x11E68F60)
#define CLASS_3_A9A8110480467329_METHOD_3_A8517DDC83130AC3_OFFSET UNITYSDK_OFFSET(0x11E69E80)
#define CLASS_3_A9A8110480467329_METHOD_3_D9B3CF5A5A7B9B3C_OFFSET UNITYSDK_OFFSET(0x11E66A80)
#define CLASS_3_A9A8110480467329_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E6A610)
#define CLASS_3_A9A8110480467329__CTOR_OFFSET UNITYSDK_OFFSET(0x11E65820)

inline static constexpr unsigned int Class_3_A9A8110480467329_TypeDefinitionIndex = 62507;

class Class_3_A9A8110480467329 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::AutoExposure*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD0
	::System::Single Field_3_5; // 0xD8
	::System::Boolean Field_3_7; // 0xDC
	::System::Single Field_3_9; // 0xE0
	::UnityEngine::Vector2 Field_3_1; // 0xE4
	::UnityEngine::Vector2 Field_3_3; // 0xEC
	::System::Single Field_3_11; // 0xF4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityAutoExposureEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_45BC804D86A01FC3(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_45BC804D86A01FC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D9B3CF5A5A7B9B3C(::UnityEngine::Rendering::Universal::AutoExposure* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_D9B3CF5A5A7B9B3C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0764B034DBA6672A(::UnityEngine::Rendering::Universal::AutoExposure* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AutoExposure*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_0764B034DBA6672A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9C037F8FB897F814(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AutoExposure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AutoExposure*))((::PBYTE)hIl2Cpp + CLASS_3_A9A8110480467329_METHOD_3_9C037F8FB897F814_OFFSET))(this, a1, a2);
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
};
