#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define CLASS_3_70171FFE4F60171B_METHOD_3_3684CBE12A191733_OFFSET UNITYSDK_OFFSET(0x11992F60)
#define CLASS_3_70171FFE4F60171B_METHOD_3_4FD8CA724C8639E0_OFFSET UNITYSDK_OFFSET(0x11994300)
#define CLASS_3_70171FFE4F60171B_METHOD_3_6408DFAA26F274F8_1_OFFSET UNITYSDK_OFFSET(0x119959B0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_6408DFAA26F274F8_OFFSET UNITYSDK_OFFSET(0x11995990)
#define CLASS_3_70171FFE4F60171B_METHOD_3_79E0F06C1C5E5930_OFFSET UNITYSDK_OFFSET(0x11992980)
#define CLASS_3_70171FFE4F60171B_METHOD_3_8D22218D774C7A05_OFFSET UNITYSDK_OFFSET(0x119959A0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_9570F4E4EDB97B64_1_OFFSET UNITYSDK_OFFSET(0x11995A00)
#define CLASS_3_70171FFE4F60171B_METHOD_3_9570F4E4EDB97B64_OFFSET UNITYSDK_OFFSET(0x11995980)
#define CLASS_3_70171FFE4F60171B_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x119959C0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_F0EA85BB513E0772_OFFSET UNITYSDK_OFFSET(0x119936C0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_F13DB45E07C9552B_OFFSET UNITYSDK_OFFSET(0x11994BF0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_F168625FF3042FC4_OFFSET UNITYSDK_OFFSET(0x11991CB0)
#define CLASS_3_70171FFE4F60171B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x119951E0)
#define CLASS_3_70171FFE4F60171B__CTOR_OFFSET UNITYSDK_OFFSET(0x11991B70)

inline static constexpr unsigned int Class_3_70171FFE4F60171B_TypeDefinitionIndex = 52529;

class Class_3_70171FFE4F60171B : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::FilmGrain*, ::MoleMole::Config::ConfigEntityFilmGrain*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::FilmGrainLookup>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_6; // 0xC0
	::UnityEngine::Texture* Field_3_7; // 0xC8
	::System::Single Field_3_3; // 0xD0
	::System::Single Field_3_5; // 0xD4
	::UnityEngine::Rendering::Universal::FilmGrainLookup Field_3_1; // 0xD8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityFilmGrain* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_F168625FF3042FC4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_F168625FF3042FC4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_79E0F06C1C5E5930(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_79E0F06C1C5E5930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3684CBE12A191733(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_3684CBE12A191733_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F0EA85BB513E0772(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_F0EA85BB513E0772_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4FD8CA724C8639E0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_4FD8CA724C8639E0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F13DB45E07C9552B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_F13DB45E07C9552B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_9570F4E4EDB97B64(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_9570F4E4EDB97B64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6408DFAA26F274F8(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_6408DFAA26F274F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8D22218D774C7A05(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_8D22218D774C7A05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6408DFAA26F274F8_1(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_6408DFAA26F274F8_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_9570F4E4EDB97B64_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_9570F4E4EDB97B64_1_OFFSET))(this, a1, a2);
	}
};
