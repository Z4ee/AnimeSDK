#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_46EFC1EAB3056273_OFFSET UNITYSDK_OFFSET(0x18314A00)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x183141F0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x18313B80)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x18313FE0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18314050)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_B57BF96C08E92D3E_OFFSET UNITYSDK_OFFSET(0x18314530)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x18314180)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18313970)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_REFRESHFONTMATREF_OFFSET UNITYSDK_OFFSET(0x18313A20)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETQUADSCALE_OFFSET UNITYSDK_OFFSET(0x1830D060)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET UNITYSDK_OFFSET(0x18313EA0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18313E50)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18314B20)

namespace RPG::Client
{
	inline static constexpr unsigned int UITMPAnimateAttribute_TypeDefinitionIndex = 67555;

	class UITMPAnimateAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Texture* _FaceTex; // 0x18
		::UnityEngine::Color _FaceColor; // 0x20
		::System::Single _ColorScale; // 0x30
		::UnityEngine::Texture* _MaskTexture; // 0x38
		::UnityEngine::Texture* _DistortionTex; // 0x40
		::UnityEngine::Vector4 _DistortionSpeed; // 0x48
		::System::Single _DistortionScale; // 0x58
		::System::Single _DissolveRate; // 0x5C
		::System::Single _DissolveBlend; // 0x60
		::System::Single _Sharpness; // 0x64
		::System::Boolean ViewDirAffectAlpha; // 0x68
		::System::Boolean EnableUnderlayShadow; // 0x69
		::UnityEngine::Color _UnderlayColor; // 0x6C
		::System::Single _UnderlayOffsetX; // 0x7C
		::System::Single _UnderlayOffsetY; // 0x80
		::UnityEngine::Vector4 _TotalScale; // 0x84
		::System::Int32 _RenderQueue; // 0x94
		::System::Boolean _UseRandomWobbly; // 0x98
		::System::Single _WobblyScale; // 0x9C
		::System::Single _FaceDilate; // 0xA0
		::System::Single _WobblyFrequency; // 0xA4
		::UnityEngine::Vector2 _WobblyCharScale; // 0xA8
		::System::Single _WobblyCharScaleFrequency; // 0xB0
		::System::Single _WobblyCharScaleRatio; // 0xB4
		::System::Single _CharOffsetFrequency; // 0xB8
		::System::Single _CharOffsetRatio; // 0xBC
		::System::Single _CharOffsetScale; // 0xC0
		::System::Boolean Glitch; // 0xC4
		::System::Single GlitchScale; // 0xC8
		::System::Single GlitchRGBSplitScale; // 0xCC
		::System::Single _ManualTickTimeOfCharSize; // 0xD0
		::System::Single _ManualTickTimeBlend; // 0xD4
		::System::Boolean UseRandom; // 0xD8
		::System::Single _ManualTickTimeCharSize; // 0xDC
		::UnityEngine::Vector2 _PerCharOffset; // 0xE0
		::System::Boolean _UseRandomRotate; // 0xE8
		::UnityEngine::Vector4 _EularAngle; // 0xEC
		::TMPro::TMP_Text* Field_5_37; // 0x100
		::UnityEngine::Material* Field_5_38; // 0x108
		::UnityEngine::Material* Field_5_39; // 0x110
		::System::Boolean Field_5_40; // 0x118
		::System::Boolean Field_5_41; // 0x119
		::System::Single Field_5_42; // 0x11C
		::System::Single Field_5_43; // 0x120
		::System::Single Field_5_44; // 0x124
		::System::Single Field_5_45; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshFontMatRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_REFRESHFONTMATREF_OFFSET))(this);
		}

		::System::Void SetQuadScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETQUADSCALE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET))(this);
		}

		::System::Void TMPMatPropertiesUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_5_B57BF96C08E92D3E(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_B57BF96C08E92D3E_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_5_D799715F2EF979EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_D799715F2EF979EA_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_5_46EFC1EAB3056273(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_METHOD_5_46EFC1EAB3056273_OFFSET))(this, a1);
		}
	};
}
