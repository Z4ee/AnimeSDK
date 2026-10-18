#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB43C20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDB43D20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB43250)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB42D70)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemControl_TypeDefinitionIndex = 79229;

	class PixAirEquipItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::UInt32 StarMaxNum = 0x5; // 0x0
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x40
		::UnityEngine::UI::Button* _Btn; // 0x48
		::UnityEngine::UI::Image* _Image; // 0x50
		::UnityEngine::UI::Text* _TextDamage; // 0x58
		::UnityEngine::UI::Text* _TextShield; // 0x60
		::UnityEngine::UI::Text* _TextBurn; // 0x68
		::Il2CppArray<::UnityEngine::Transform*>* _NodeStars; // 0x70
		::UnityEngine::Transform* _NodePrice; // 0x78
		::UnityEngine::UI::Text* _TextPrice; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
