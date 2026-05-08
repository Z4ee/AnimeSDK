#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define CLASS_3_8FD42C89B4F9E142_METHOD_3_1139B7ED69981289_1_OFFSET UNITYSDK_OFFSET(0x16278490)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_1139B7ED69981289_OFFSET UNITYSDK_OFFSET(0x16278480)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_3961E7976F112A6D_OFFSET UNITYSDK_OFFSET(0x16276270)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_4499E621BAF55229_OFFSET UNITYSDK_OFFSET(0x16272030)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_7609F75B00561F85_1_OFFSET UNITYSDK_OFFSET(0x162784C0)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_7609F75B00561F85_OFFSET UNITYSDK_OFFSET(0x162784A0)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_7AAF5754921CE712_OFFSET UNITYSDK_OFFSET(0x162784B0)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_BC78D5F8568AAC93_OFFSET UNITYSDK_OFFSET(0x1626E220)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x16278440)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_D938EE1691AF226D_OFFSET UNITYSDK_OFFSET(0x1626FD60)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_E147CAD3C09A50C4_OFFSET UNITYSDK_OFFSET(0x16273E30)
#define CLASS_3_8FD42C89B4F9E142_METHOD_3_F3DC9A5ADB10C1DB_OFFSET UNITYSDK_OFFSET(0x1626BD10)
#define CLASS_3_8FD42C89B4F9E142_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162773D0)
#define CLASS_3_8FD42C89B4F9E142__CTOR_OFFSET UNITYSDK_OFFSET(0x1626BA00)

inline static constexpr unsigned int Class_3_8FD42C89B4F9E142_TypeDefinitionIndex = 56684;

class Class_3_8FD42C89B4F9E142 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_10; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_22; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_30; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::SampleCountLevel>* Field_3_6; // 0xF0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_20; // 0xF8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_28; // 0x100
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_26; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_4; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_18; // 0x118
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x120
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel Field_3_7; // 0x128
	::System::Single Field_3_31; // 0x12C
	::System::Boolean Field_3_21; // 0x130
	::System::Boolean Field_3_23; // 0x131
	::System::Boolean Field_3_25; // 0x132
	::System::Boolean Field_3_5; // 0x133
	::System::Single Field_3_3; // 0x134
	::System::Int32 Field_3_29; // 0x138
	::System::Single Field_3_15; // 0x13C
	::System::Single Field_3_19; // 0x140
	::System::Single Field_3_9; // 0x144
	::System::Single Field_3_13; // 0x148
	::System::Single Field_3_1; // 0x14C
	::UnityEngine::Color Field_3_11; // 0x150
	::System::Int32 Field_3_27; // 0x160
	::System::Single Field_3_17; // 0x164

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_F3DC9A5ADB10C1DB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_F3DC9A5ADB10C1DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BC78D5F8568AAC93(::UnityEngine::Rendering::Universal::AmplifyOcclusion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_BC78D5F8568AAC93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D938EE1691AF226D(::UnityEngine::Rendering::Universal::AmplifyOcclusion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_D938EE1691AF226D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4499E621BAF55229(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_4499E621BAF55229_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E147CAD3C09A50C4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_E147CAD3C09A50C4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3961E7976F112A6D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_3961E7976F112A6D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_1139B7ED69981289(::UnityEngine::Rendering::Universal::AmplifyOcclusion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_1139B7ED69981289_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1139B7ED69981289_1(::UnityEngine::Rendering::Universal::AmplifyOcclusion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_1139B7ED69981289_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7609F75B00561F85(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_7609F75B00561F85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7AAF5754921CE712(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_7AAF5754921CE712_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7609F75B00561F85_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + CLASS_3_8FD42C89B4F9E142_METHOD_3_7609F75B00561F85_1_OFFSET))(this, a1, a2);
	}
};
