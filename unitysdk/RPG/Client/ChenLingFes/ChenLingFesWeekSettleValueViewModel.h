#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75F050)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesWeekSettleValueViewModel_TypeDefinitionIndex = 80078;

	class ChenLingFesWeekSettleValueViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Int32 Star; // 0x20
		::System::Int32 TotalStar; // 0x24
		::System::Boolean IsShowStar; // 0x28
		::System::Int32 Score; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
