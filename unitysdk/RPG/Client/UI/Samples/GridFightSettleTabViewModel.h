#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLETABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFF10)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int GridFightSettleTabViewModel_TypeDefinitionIndex = 73351;

	class GridFightSettleTabViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLETABVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
