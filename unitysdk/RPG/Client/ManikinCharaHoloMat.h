#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MANIKINCHARAHOLOMAT_AWAKE_OFFSET UNITYSDK_OFFSET(0x174B0360)
#define RPG_CLIENT_MANIKINCHARAHOLOMAT_INITSETMAT_OFFSET UNITYSDK_OFFSET(0x174B0DE0)
#define RPG_CLIENT_MANIKINCHARAHOLOMAT_UPDATEUIHOLOPROPERTY_OFFSET UNITYSDK_OFFSET(0x174B0E70)
#define RPG_CLIENT_MANIKINCHARAHOLOMAT_UPDATE_OFFSET UNITYSDK_OFFSET(0x174B0420)
#define RPG_CLIENT_MANIKINCHARAHOLOMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x174B1420)

namespace RPG::Client
{
	inline static constexpr unsigned int ManikinCharaHoloMat_TypeDefinitionIndex = 72728;

	class ManikinCharaHoloMat : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* holoBodyShader; // 0x18
		::UnityEngine::Shader* holoFaceShader; // 0x20
		::UnityEngine::Shader* holoHairShader; // 0x28
		::UnityEngine::Color _HoloBaseColor; // 0x30
		::System::Single _GrayWeight; // 0x40
		::System::Single _Opacity; // 0x44
		::UnityEngine::Vector4 _OffsetDirtection; // 0x48
		::System::Single _OffsetSize; // 0x58
		::System::Single _OffsetSpeed; // 0x5C
		::System::Single _OffsetMaskSize; // 0x60
		::System::Single _OffsetMaskSpeed; // 0x64
		::System::Single _OffsetMaskRange; // 0x68
		::System::Single _OffsetIntensity; // 0x6C
		::System::Single _OffsetFrequency; // 0x70
		::System::Single _OffsetDuration; // 0x74
		::UnityEngine::Texture2D* _ScanTex; // 0x78
		::UnityEngine::Color _ScanColor; // 0x80
		::System::Single _ScanIntensity; // 0x90
		::UnityEngine::Vector4 _ScanDirection; // 0x94
		::System::Single _ScanTiling; // 0xA4
		::System::Single _ScanSpeed; // 0xA8
		::System::Single _ScanLineAlpha; // 0xAC
		::System::Single _ScanDisturbance; // 0xB0
		::System::Single _GlowTiling; // 0xB4
		::System::Single _GlowSpeed; // 0xB8
		::System::Single _GlowDuration; // 0xBC
		::UnityEngine::Color _HoloFresnelColor; // 0xC0
		::System::Single _HoloFresnelScale; // 0xD0
		::System::Single _HoloFresnelBias; // 0xD4
		::System::Single _HoloFresnelPower; // 0xD8
		::System::Int32 _TransparentAlphaControlID; // 0xDC
		::System::Int32 _HoloBaseColorID; // 0xE0
		::System::Int32 _GrayWeightID; // 0xE4
		::System::Int32 _OpacityID; // 0xE8
		::System::Int32 _OffsetDirtectionID; // 0xEC
		::System::Int32 _OffsetSizeID; // 0xF0
		::System::Int32 _OffsetSpeedID; // 0xF4
		::System::Int32 _OffsetMaskSizeID; // 0xF8
		::System::Int32 _OffsetMaskSpeedID; // 0xFC
		::System::Int32 _OffsetMaskRangeID; // 0x100
		::System::Int32 _OffsetIntensityID; // 0x104
		::System::Int32 _OffsetFrequencyID; // 0x108
		::System::Int32 _OffsetDurationID; // 0x10C
		::System::Int32 _ScanTexID; // 0x110
		::System::Int32 _ScanColorID; // 0x114
		::System::Int32 _ScanIntensityID; // 0x118
		::System::Int32 _ScanDirectionID; // 0x11C
		::System::Int32 _ScanTilingID; // 0x120
		::System::Int32 _ScanSpeedID; // 0x124
		::System::Int32 _ScanLineAlphaID; // 0x128
		::System::Int32 _ScanDisturbanceID; // 0x12C
		::System::Int32 _GlowTilingID; // 0x130
		::System::Int32 _GlowSpeedID; // 0x134
		::System::Int32 _GlowDurationID; // 0x138
		::System::Int32 _HoloFresnelColorID; // 0x13C
		::System::Int32 _HoloFresnelScaleID; // 0x140
		::System::Int32 _HoloFresnelBiasID; // 0x144
		::System::Int32 _HoloFresnelPowerID; // 0x148
		::System::Int32 _SrcBlendID; // 0x14C
		::System::Int32 _DstBlendID; // 0x150
		::UnityEngine::GameObject* TargetChara; // 0x158
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* materialList; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINCHARAHOLOMAT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINCHARAHOLOMAT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINCHARAHOLOMAT_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateUIHoloProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINCHARAHOLOMAT_UPDATEUIHOLOPROPERTY_OFFSET))(this, a1);
		}

		::System::Void InitSetMat(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINCHARAHOLOMAT_INITSETMAT_OFFSET))(this, a1);
		}
	};
}
