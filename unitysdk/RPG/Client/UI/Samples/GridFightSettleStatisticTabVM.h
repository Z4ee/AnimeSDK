#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/GridFightSettleTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLESTATISTICTABVM__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CE170)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int GridFightSettleStatisticTabVM_TypeDefinitionIndex = 73354;

	class GridFightSettleStatisticTabVM : public ::RPG::Client::Ui::Samples::GridFightSettleTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLESTATISTICTABVM__CTOR_OFFSET))(this);
		}
	};
}
