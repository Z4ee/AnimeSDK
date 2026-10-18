#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::PixAir { class PixAirEquipControl; }
namespace RPG::Client::PixAir { class PixAirEquipOverviewViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB67C20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__BINDEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0xDB67970)
#define RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__CLEAREQUIPCONTROLS_OFFSET UNITYSDK_OFFSET(0xDB67CD0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDB67E70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB67920)
#define RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB67860)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlayerEquipOverviewControl_TypeDefinitionIndex = 79248;

	class PixAirPlayerEquipOverviewControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::PrefabLoadMeta* _EquipLoadMeta; // 0x40
		::UnityEngine::Transform* _Container; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipControl*>* _EquipControls; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _BindEquipments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__BINDEQUIPMENTS_OFFSET))(this);
		}

		::System::Void _ClearEquipControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL__CLEAREQUIPCONTROLS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipOverviewViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipOverviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLAYEREQUIPOVERVIEWCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
