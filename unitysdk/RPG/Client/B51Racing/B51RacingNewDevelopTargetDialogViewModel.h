#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_961B0CA014B1FC95;
class Class_1_E2FB7E5A9E3705C7_2;
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C8550)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewDevelopTargetDialogViewModel_TypeDefinitionIndex = 80698;

	class B51RacingNewDevelopTargetDialogViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10
		::Class_1_961B0CA014B1FC95* PartConfig; // 0x18
		::Class_1_E2FB7E5A9E3705C7_2* SkillConfig; // 0x20
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* PartRequireStatIconList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
