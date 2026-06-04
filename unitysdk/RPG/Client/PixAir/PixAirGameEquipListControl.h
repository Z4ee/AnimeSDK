#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3CD000)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__CREATEEQUIPITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xC3CCD80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CD070)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__DESTROYEQUIPITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xC3CCC10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3CCBC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3CCB00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3CD100)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3CD0A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameEquipListControl_TypeDefinitionIndex = 73553;

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

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEEQUIPLISTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
