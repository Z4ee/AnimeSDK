#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB716C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB71C30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB715F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB71590)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__SETUPGRIDS_OFFSET UNITYSDK_OFFSET(0xCB71770)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemPlaceGridRowControl_TypeDefinitionIndex = 80009;

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
	};
}
