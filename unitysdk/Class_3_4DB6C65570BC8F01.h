#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityPartialBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define CLASS_3_4DB6C65570BC8F01_METHOD_3_46B866EC5B056D84_OFFSET UNITYSDK_OFFSET(0x185F95D0)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_6DF74F58A6C97F69_OFFSET UNITYSDK_OFFSET(0x185F74D0)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_81FD3C4CBA2657F4_OFFSET UNITYSDK_OFFSET(0x185F66E0)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_ADD75B38D8DF7CAD_OFFSET UNITYSDK_OFFSET(0x185FA420)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_C007DD8CA0394465_OFFSET UNITYSDK_OFFSET(0x185F8A10)
#define CLASS_3_4DB6C65570BC8F01_METHOD_3_CD7C481A3F1268A6_OFFSET UNITYSDK_OFFSET(0x185F7E40)
#define CLASS_3_4DB6C65570BC8F01_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185FAC10)
#define CLASS_3_4DB6C65570BC8F01__CTOR_OFFSET UNITYSDK_OFFSET(0x185F6580)

inline static constexpr unsigned int Class_3_4DB6C65570BC8F01_TypeDefinitionIndex = 41597;

class Class_3_4DB6C65570BC8F01 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::PartialBlur*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_9; // 0xA8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_5; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0xC0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_1; // 0xC8
	::System::Boolean Field_3_8; // 0xD0
	::System::Single Field_3_10; // 0xD4
	::System::Int32 Field_3_4; // 0xD8
	::System::Single Field_3_6; // 0xDC
	::System::Int32 Field_3_0; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityPartialBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_81FD3C4CBA2657F4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_81FD3C4CBA2657F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6DF74F58A6C97F69(::UnityEngine::Rendering::Universal::PartialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_6DF74F58A6C97F69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CD7C481A3F1268A6(::UnityEngine::Rendering::Universal::PartialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_CD7C481A3F1268A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C007DD8CA0394465(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_C007DD8CA0394465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_46B866EC5B056D84(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_46B866EC5B056D84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_ADD75B38D8DF7CAD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::PartialBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::PartialBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_METHOD_3_ADD75B38D8DF7CAD_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DB6C65570BC8F01_TOSTRING_OFFSET))(this);
	}
};
