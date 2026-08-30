#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_AB4E0A41BB89929E;
class Class_1_F248B058F5A06B98;
namespace RPG::Client::FateRin::Day { class SwitchDayTalkEntryViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1B5A2940)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A2390)

namespace RPG::Client::FateRin::Day
{
	inline static constexpr unsigned int SwitchDayTalkViewModel_TypeDefinitionIndex = 79747;

	class SwitchDayTalkViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>* _Entries; // 0x20
		::Class_1_AB4E0A41BB89929E* _Model; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>* _Entries_ReadOnly; // 0x30

		::System::Void _ctor(::Class_1_AB4E0A41BB89929E* a1, ::Class_1_F248B058F5A06B98* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AB4E0A41BB89929E*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL_GET_ENTRIES_OFFSET))(this);
		}
	};
}
