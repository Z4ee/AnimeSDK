#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBagSlotItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EC2180)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC2260)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EC1FB0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EC1E50)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBagSlotListControl_TypeDefinitionIndex = 75198;

	class PixAirBagSlotListControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::UInt32 _MaxSlotSize = 0xA; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirBagSlotItemControl*>* _SlotItemControls; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirBagEquipsViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirBagEquipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGSLOTLISTCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
