#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C8F30)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayStarViewModel_TypeDefinitionIndex = 76426;

	class ChenLingFesGameplayStarViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Boolean IsFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
