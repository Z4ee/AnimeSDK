#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C84A220)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__CREATEEQUIPITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0x1C84A040)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C84A2D0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__DESTROYEQUIPITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0x1C849ED0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C849E80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C849E20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameEquipListControl_TypeDefinitionIndex = 78749;

	class PixAirGameEquipListControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::UInt32 _MaxSlotSize = 0x9; // 0x0
		::RPG::Client::PrefabLoadMeta* _PrefabLoadMeta; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemControl*>* _ItemControls; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _CreateEquipItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__CREATEEQUIPITEMCONTROLS_OFFSET))(this);
		}

		::System::Void _DestroyEquipItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__DESTROYEQUIPITEMCONTROLS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirBattleEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
