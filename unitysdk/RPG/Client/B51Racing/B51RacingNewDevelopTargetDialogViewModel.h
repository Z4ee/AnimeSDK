#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_961B0CA014B1FC95;
class Class_1_E2FB7E5A9E3705C7_2;
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC892FA0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewDevelopTargetDialogViewModel_TypeDefinitionIndex = 80699;

	class B51RacingNewDevelopTargetDialogViewModel : public ::System::Object
	{
	public:
		::Class_1_E2FB7E5A9E3705C7_2* SkillConfig; // 0x10
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* PartRequireStatIconList; // 0x18
		::Class_1_961B0CA014B1FC95* PartConfig; // 0x20
		::System::Action* OnClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
