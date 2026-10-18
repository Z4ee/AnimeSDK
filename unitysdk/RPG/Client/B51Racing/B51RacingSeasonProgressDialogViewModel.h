#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_61D4710B31163D99;
class Class_1_8F93E829E5E147B6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGSEASONPROGRESSDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B5F90)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingSeasonProgressDialogViewModel_TypeDefinitionIndex = 82054;

	class B51RacingSeasonProgressDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_8F93E829E5E147B6*>* RankRows; // 0x10
		::System::Collections::Generic::List_1<::Class_1_61D4710B31163D99*>* CalendarItems; // 0x18
		::System::Int32 InitialSelectedDay; // 0x20
		::RPG::Client::TextID TitleText; // 0x28
		::System::Int32 CurrentDay; // 0x38
		::System::Int32 CalendarVisibleWindowSize; // 0x3C
		::RPG::Client::TextID InfoButtonText; // 0x40
		::System::Int32 CalendarStartIndex; // 0x50
		::System::Int32 TotalDay; // 0x54
		::System::Boolean ShouldPlayNodeAdvance; // 0x58
		::System::Int32 TargetSelectedDay; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSEASONPROGRESSDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
