#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCB72B90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCB72BA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB72BB0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesSettleStarViewModel_TypeDefinitionIndex = 80077;

	class ChenLingFesSettleStarViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Boolean _IsFinished_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL_SET_ISFINISHED_OFFSET))(this, a1);
		}
	};
}
