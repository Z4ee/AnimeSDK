#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_GET_MAT_OFFSET UNITYSDK_OFFSET(0xA737CD0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_INIT_OFFSET UNITYSDK_OFFSET(0xA72FDB0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA737BD0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET UNITYSDK_OFFSET(0xA72FEA0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA737C80)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA737D80)

namespace RPG::Client
{
	inline static constexpr unsigned int UITMPAnimateAttribute_TypeDefinitionIndex = 57916;

	class UITMPAnimateAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Texture* _FaceTex; // 0x18
		::UnityEngine::Color _FaceColor; // 0x20
		::UnityEngine::Texture* _MaskTexture; // 0x30
		::UnityEngine::Texture* _DistortionTex; // 0x38
		::UnityEngine::Vector4 _DistortionSpeed; // 0x40
		::System::Single _DistortionScale; // 0x50
		::System::Single _DissolveRate; // 0x54
		::System::Single _DissolveBlend; // 0x58
		::System::Single _RGBSplitScale; // 0x5C
		::System::Single _RGBSplitSpeed; // 0x60
		::UnityEngine::Vector4 _TotalScale; // 0x64
		::System::Int32 _RenderQueue; // 0x74
		::System::Boolean _UseRandomWobbly; // 0x78
		::System::Single _WobblyScale; // 0x7C
		::System::Single _WobblyFrequency; // 0x80
		::UnityEngine::Vector2 _WobblyCharScale; // 0x84
		::System::Single _WobblyCharScaleFrequency; // 0x8C
		::System::Single _WobblyCharScaleRatio; // 0x90
		::System::Single _CharOffsetFrequency; // 0x94
		::System::Single _CharOffsetRatio; // 0x98
		::System::Single _CharOffsetScale; // 0x9C
		::System::Single _Sharpness; // 0xA0
		::System::Single _FaceDilate; // 0xA4
		::System::Boolean Glitch; // 0xA8
		::System::Single GlitchScale; // 0xAC
		::System::Single GlitchRGBSplitScale; // 0xB0
		::System::Single _ManualTickTimeCharSize; // 0xB4
		::System::Boolean UseRandom; // 0xB8
		::System::Single _ManualTickTimeOfCharSize; // 0xBC
		::System::Single _ManualTickTimeBlend; // 0xC0
		::System::Boolean _UseRandomRotate; // 0xC4
		::UnityEngine::Vector4 _EularAngle; // 0xC8
		::UnityEngine::Vector2 _PerCharOffset; // 0xD8
		::TMPro::TMP_Text* Field_5_33; // 0xE0
		::UnityEngine::Material* Field_5_34; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_INIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET))(this);
		}

		::System::Void TMPMatPropertiesUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET))(this);
		}

		::UnityEngine::Material* get_Mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_GET_MAT_OFFSET))(this);
		}
	};
}
