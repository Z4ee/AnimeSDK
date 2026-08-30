#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B755980)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B755990)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7559A0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesSettleStarViewModel_TypeDefinitionIndex = 80076;

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
