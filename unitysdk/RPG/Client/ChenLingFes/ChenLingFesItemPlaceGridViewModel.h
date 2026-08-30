#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1B754A50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B753DF0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemPlaceGridViewModel_TypeDefinitionIndex = 80065;

	class ChenLingFesItemPlaceGridViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Boolean IsEffectedToChenLing; // 0x20
		::System::Boolean IsOccupied; // 0x21
		::System::Boolean IsEffectedToItem; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMPLACEGRIDVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}
	};
}
