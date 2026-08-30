#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconItemViewModel; }

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFCE50)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopValueIconListViewModel_TypeDefinitionIndex = 80697;

	class B51RacingDevelopValueIconListViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*>* Icons; // 0x10
		::System::Boolean UseLiteVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
