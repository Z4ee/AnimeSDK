#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDisplayMode.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_5AD3EC2EA1B1D5CD;
class Class_1_961B0CA014B1FC95;
class Class_1_E2FB7E5A9E3705C7_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC86F970)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPageViewModel_TypeDefinitionIndex = 80671;

	class B51RacingDIYPageViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>* SelectedPartBySlot; // 0x10
		::Il2CppArray<::Class_1_961B0CA014B1FC95*>* PartOptions; // 0x18
		::Class_1_5AD3EC2EA1B1D5CD* ExitBaselineCar; // 0x20
		::Il2CppArray<::Class_1_E2FB7E5A9E3705C7_3*>* PaintOptions; // 0x28
		::Class_1_5AD3EC2EA1B1D5CD* PreviewCar; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::Class_1_961B0CA014B1FC95*>*>*>* AllCarSubSkillParts; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::Class_1_961B0CA014B1FC95*>*>* SubSkillPartsByType; // 0x40
		::System::Boolean ShowSwitchPartTab; // 0x48
		::System::Boolean IsReEntry; // 0x49
		::System::Int32 CurrentTabIndex; // 0x4C
		::RPG::Client::B51Racing::B51RacingDIYDisplayMode Mode; // 0x50
		::System::Int32 MaxNumLength; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
