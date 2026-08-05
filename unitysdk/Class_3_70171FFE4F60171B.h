#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
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

#define CLASS_3_70171FFE4F60171B_METHOD_3_4791C0E55E4FF5E2_OFFSET UNITYSDK_OFFSET(0x1262C770)
#define CLASS_3_70171FFE4F60171B_METHOD_3_BB4BB084B307ABF2_OFFSET UNITYSDK_OFFSET(0x1262BF00)
#define CLASS_3_70171FFE4F60171B_METHOD_3_BCC76A3926B91F90_OFFSET UNITYSDK_OFFSET(0x1262A670)
#define CLASS_3_70171FFE4F60171B_METHOD_3_D3AE2B29A220A02A_OFFSET UNITYSDK_OFFSET(0x126299E0)
#define CLASS_3_70171FFE4F60171B_METHOD_3_EDDC28520BF25448_OFFSET UNITYSDK_OFFSET(0x1262AC00)
#define CLASS_3_70171FFE4F60171B_METHOD_3_F0EA85BB513E0772_OFFSET UNITYSDK_OFFSET(0x1262B320)
#define CLASS_3_70171FFE4F60171B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1262CD20)
#define CLASS_3_70171FFE4F60171B__CTOR_OFFSET UNITYSDK_OFFSET(0x126298A0)

inline static constexpr unsigned int Class_3_70171FFE4F60171B_TypeDefinitionIndex = 48046;

class Class_3_70171FFE4F60171B : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::FilmGrain*, ::MoleMole::Config::ConfigEntityFilmGrain*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xA8
	::UnityEngine::Texture* Field_3_11; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::FilmGrainLookup>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::UnityEngine::Rendering::Universal::FilmGrainLookup Field_3_1; // 0xD0
	::System::Single Field_3_7; // 0xD4
	::System::Single Field_3_5; // 0xD8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityFilmGrain* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_D3AE2B29A220A02A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_D3AE2B29A220A02A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCC76A3926B91F90(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_BCC76A3926B91F90_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EDDC28520BF25448(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_EDDC28520BF25448_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F0EA85BB513E0772(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_F0EA85BB513E0772_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BB4BB084B307ABF2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70171FFE4F60171B_METHOD_3_BB4BB084B307ABF2_OFFSET))(this, a1, a2, a3);
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
