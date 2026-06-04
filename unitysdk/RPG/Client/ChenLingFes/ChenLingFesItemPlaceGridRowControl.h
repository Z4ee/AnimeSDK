#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB623770)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB623CE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB6236D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB623610)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__SETUPGRIDS_OFFSET UNITYSDK_OFFSET(0xB6237F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB623D70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB623D10)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemPlaceGridRowControl_TypeDefinitionIndex = 73993;

	class ChenLingFesItemPlaceGridRowControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::PrefabLoadMeta* _GridLoadMeta; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridControl*>* _Grids; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SetupGrids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__SETUPGRIDS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
