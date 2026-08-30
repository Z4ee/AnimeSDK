#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/GridFightSettleTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLEDETAILTABVM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFEF0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int GridFightSettleDetailTabVM_TypeDefinitionIndex = 73352;

	class GridFightSettleDetailTabVM : public ::RPG::Client::Ui::Samples::GridFightSettleTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLEDETAILTABVM__CTOR_OFFSET))(this);
		}
	};
}
