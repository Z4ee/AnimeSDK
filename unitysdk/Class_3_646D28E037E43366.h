#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define CLASS_3_646D28E037E43366_METHOD_3_4DD3E5BABFCA7D99_OFFSET UNITYSDK_OFFSET(0xC98FBC0)
#define CLASS_3_646D28E037E43366_METHOD_3_52AB269DF2B425F9_OFFSET UNITYSDK_OFFSET(0xC98EEC0)
#define CLASS_3_646D28E037E43366_METHOD_3_5F9AFC230AF79FE9_OFFSET UNITYSDK_OFFSET(0xC990410)
#define CLASS_3_646D28E037E43366_METHOD_3_9397C1B34B43D0FF_OFFSET UNITYSDK_OFFSET(0xC9918C0)
#define CLASS_3_646D28E037E43366_METHOD_3_AF56403247D6B034_OFFSET UNITYSDK_OFFSET(0xC990CF0)
#define CLASS_3_646D28E037E43366_METHOD_3_F1E33DBBB7FC1E02_OFFSET UNITYSDK_OFFSET(0xC992460)
#define CLASS_3_646D28E037E43366_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC992970)
#define CLASS_3_646D28E037E43366__CTOR_OFFSET UNITYSDK_OFFSET(0xC98ED40)

inline static constexpr unsigned int Class_3_646D28E037E43366_TypeDefinitionIndex = 73285;

class Class_3_646D28E037E43366 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::MotionBlur*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurDirection>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurMode>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurQuality>* Field_3_8; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xD0
	::System::Single Field_3_11; // 0xD8
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection Field_3_5; // 0xDC
	::System::Single Field_3_7; // 0xE0
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality Field_3_9; // 0xE4
	::System::Single Field_3_1; // 0xE8
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode Field_3_3; // 0xEC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityMotionBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_52AB269DF2B425F9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_52AB269DF2B425F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DD3E5BABFCA7D99(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_4DD3E5BABFCA7D99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5F9AFC230AF79FE9(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_5F9AFC230AF79FE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF56403247D6B034(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_AF56403247D6B034_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9397C1B34B43D0FF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_9397C1B34B43D0FF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F1E33DBBB7FC1E02(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_F1E33DBBB7FC1E02_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_TOSTRING_OFFSET))(this);
	}
};
