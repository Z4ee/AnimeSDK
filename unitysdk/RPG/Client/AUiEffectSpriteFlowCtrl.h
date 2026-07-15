#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1746F380)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1746F500)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1746F130)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_INITVALUE_OFFSET UNITYSDK_OFFSET(0x1746F290)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1746F1E0)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_RESET_OFFSET UNITYSDK_OFFSET(0x1746F240)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x1746F8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AUiEffectSpriteFlowCtrl_TypeDefinitionIndex = 69217;

	class AUiEffectSpriteFlowCtrl : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Int32 Field_6_0; // 0x18
		::System::Int32 Field_6_1; // 0x1C
		::System::Int32 Field_6_2; // 0x20
		::System::Int32 Field_6_3; // 0x24
		::UnityEngine::UI::Image* Field_6_4; // 0x28
		::System::Single Field_6_5; // 0x30
		::System::Single Field_6_6; // 0x34
		::System::Single Field_6_7; // 0x38
		::UnityEngine::Color Field_6_8; // 0x3C
		::UnityEngine::Material* Field_6_9; // 0x50
		::UnityEngine::Material* Field_6_10; // 0x58
		::System::Boolean Field_6_11; // 0x60
		::System::Boolean Field_6_12; // 0x61
		::UnityEngine::Material* FlowMaterial; // 0x68
		::System::Single OffsetPos; // 0x70
		::System::Single Angle; // 0x74
		::System::Single Size; // 0x78
		::UnityEngine::Color FlowColor; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_GET_IMAGE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_RESET_OFFSET))(this);
		}

		::System::Void InitValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_INITVALUE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_GETMATERIALFORRENDERING_OFFSET))(this);
		}
	};
}
