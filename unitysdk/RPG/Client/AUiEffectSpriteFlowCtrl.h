#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC49ADF0)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xC49AF70)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xC49AB80)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_INITVALUE_OFFSET UNITYSDK_OFFSET(0xC49AD00)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC49AC50)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL_RESET_OFFSET UNITYSDK_OFFSET(0xC49ACB0)
#define RPG_CLIENT_AUIEFFECTSPRITEFLOWCTRL__CTOR_OFFSET UNITYSDK_OFFSET(0xC49B410)

namespace RPG::Client
{
	inline static constexpr unsigned int AUiEffectSpriteFlowCtrl_TypeDefinitionIndex = 72418;

	class AUiEffectSpriteFlowCtrl : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Int32 DIBEGMMJJAK; // 0x18
		::System::Int32 LOIKLCOEOEO; // 0x1C
		::System::Int32 CPGHMJLFNNC; // 0x20
		::System::Int32 BPPCHBAOKFD; // 0x24
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x28
		::System::Single KEAJNEBPACK; // 0x30
		::System::Single LFNMBHDAOLP; // 0x34
		::System::Single BFOCCLAAKOP; // 0x38
		::UnityEngine::Color POLPCFAIEJC; // 0x3C
		::UnityEngine::Material* FAALBBDOFIL; // 0x50
		::UnityEngine::Material* KLAEOKPPDHD; // 0x58
		::System::Boolean FDAFLPCLCEJ; // 0x60
		::System::Boolean AGPKPMAEIFH; // 0x61
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
