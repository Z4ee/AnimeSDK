#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingInitCarSelectOpenMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_B51RACING_B51RACINGINITCARSELECTPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C6100)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingInitCarSelectPageViewModel_TypeDefinitionIndex = 80676;

	class B51RacingInitCarSelectPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* CarActiveSkillViewModel2; // 0x10
		::System::Action_1<::System::UInt32>* OnCarReselected; // 0x18
		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* CarActiveSkillViewModel1; // 0x20
		::System::UInt32 CarID2; // 0x28
		::System::UInt32 CurrentSelectedCarID; // 0x2C
		::System::UInt32 CarID1; // 0x30
		::RPG::Client::B51Racing::B51RacingInitCarSelectOpenMode OpenMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGINITCARSELECTPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
