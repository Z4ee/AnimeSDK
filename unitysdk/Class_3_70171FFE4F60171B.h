#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
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

#define CLASS_3_70171FFE4F60171B_METHOD_3_0FDE50A303534A2A_OFFSET UNITYSDK_OFFSET(0xC9497A0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_4791C0E55E4FF5E2_OFFSET UNITYSDK_OFFSET(0xC94B370)
#define CLASS_3_70171FFE4F60171B_METHOD_3_790419E1DF9119A9_OFFSET UNITYSDK_OFFSET(0xC94AAC0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_986F71910A05EF77_OFFSET UNITYSDK_OFFSET(0xC949200)
#define CLASS_3_70171FFE4F60171B_METHOD_3_D3AE2B29A220A02A_OFFSET UNITYSDK_OFFSET(0xC948560)
#define CLASS_3_70171FFE4F60171B_METHOD_3_F0EA85BB513E0772_OFFSET UNITYSDK_OFFSET(0xC949ED0)
#define CLASS_3_70171FFE4F60171B_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC94B930)
#define CLASS_3_70171FFE4F60171B__CTOR_OFFSET UNITYSDK_OFFSET(0xC948420)

inline static constexpr unsigned int Class_3_70171FFE4F60171B_TypeDefinitionIndex = 54000;

class Class_3_70171FFE4F60171B : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::FilmGrain*, ::MoleMole::Config::ConfigEntityFilmGrain*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::FilmGrainLookup>* Field_3_0; // 0xB0
	::UnityEngine::Texture* Field_3_7; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC8
	::UnityEngine::Rendering::Universal::FilmGrainLookup Field_3_1; // 0xD0
	::System::Single Field_3_5; // 0xD4
	::System::Single Field_3_3; // 0xD8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityFilmGrain* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_D3AE2B29A220A02A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_D3AE2B29A220A02A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_986F71910A05EF77(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_986F71910A05EF77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0FDE50A303534A2A(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_0FDE50A303534A2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F0EA85BB513E0772(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_F0EA85BB513E0772_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_790419E1DF9119A9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_790419E1DF9119A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4791C0E55E4FF5E2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_4791C0E55E4FF5E2_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_TOSTRING_OFFSET))(this);
	}
};
