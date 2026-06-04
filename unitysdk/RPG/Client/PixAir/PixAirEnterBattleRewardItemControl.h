#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_6A7F399F177592DB;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B8B40)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B8BB0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B8960)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3B87E0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B8C40)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3B8BE0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleRewardItemControl_TypeDefinitionIndex = 73562;

	class PixAirEnterBattleRewardItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeNum; // 0x38
		::UnityEngine::UI::Text* _TextNum; // 0x40
		::UnityEngine::UI::Image* _ImgReward; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::Class_1_6A7F399F177592DB* get__ViewModel()
		{
			return ((::Class_1_6A7F399F177592DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEREWARDITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
