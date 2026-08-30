#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL_SETFINISHTIP_OFFSET UNITYSDK_OFFSET(0x1C5467A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C545CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C546B60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C545D60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C545B80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceEventControl_TypeDefinitionIndex = 79038;

	class LimaoNewsMainEntranceEventControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeBigEvent; // 0x38
		::UnityEngine::UI::Button* _BtnBigEvent; // 0x40
		::UnityEngine::UI::Text* _TextBigEvent; // 0x48
		::UnityEngine::Transform* _NodeBigEventBg; // 0x50
		::UnityEngine::Transform* _NodeEventFinishBg; // 0x58
		::UnityEngine::Transform* _NodeBigEventKeyMap; // 0x60
		::UnityEngine::Transform* _NodeNormalEvent; // 0x68
		::UnityEngine::UI::Button* _BtnNormalEvent; // 0x70
		::System::Single _OpenTime; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetFinishTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL_SETFINISHTIP_OFFSET))(this);
		}
	};
}
