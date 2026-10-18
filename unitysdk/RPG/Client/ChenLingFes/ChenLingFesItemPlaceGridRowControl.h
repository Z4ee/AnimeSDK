#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC0BA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC1110)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC0AD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAC0A50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDROWCONTROL__SETUPGRIDS_OFFSET UNITYSDK_OFFSET(0xCAC0C50)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemPlaceGridRowControl_TypeDefinitionIndex = 81337;

	class ChenLingFesItemPlaceGridRowControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::PrefabLoadMeta* _GridLoadMeta; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridControl*>* _Grids; // 0x48

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
