#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_ECE22A074BA4D58D;
class Class_1_F248B058F5A06B98;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0xD000FC0)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xD001040)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD000F70)

namespace RPG::Client::FateRin::Day
{
	inline static constexpr unsigned int SwitchDayTalkEntryViewModel_TypeDefinitionIndex = 79747;

	class SwitchDayTalkEntryViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::AvatarSystem::IAvatar* _TalkerAvatarModel; // 0x20
		::Class_1_ECE22A074BA4D58D* _Model; // 0x28

		::System::Void _ctor(::Class_1_ECE22A074BA4D58D* a1, ::Class_1_F248B058F5A06B98* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECE22A074BA4D58D*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_TalkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TALKERICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TEXT_OFFSET))(this);
		}
	};
}
