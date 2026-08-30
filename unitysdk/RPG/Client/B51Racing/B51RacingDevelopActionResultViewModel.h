#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPACTIONRESULTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC8736B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopActionResultViewModel_TypeDefinitionIndex = 80696;

	class B51RacingDevelopActionResultViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* NewValues; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* ValueUpTexts; // 0x18
		::System::String* CurrentSelectActionName; // 0x20
		::Il2CppArray<::System::Single>* OldValues; // 0x28
		::Il2CppArray<::RPG::GameCore::B51RacingStatType>* BoostStatTypes; // 0x30
		::RPG::Client::TextID StatusText; // 0x38
		::System::Boolean IsSuperSuccess; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPACTIONRESULTVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
