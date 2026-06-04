#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_A3520E3BCB4F735C;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayGameDayItemViewModel; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB5F7CC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_GET_GAMEDAYS_OFFSET UNITYSDK_OFFSET(0xB5F8190)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SET_GAMEDAYS_OFFSET UNITYSDK_OFFSET(0xB5F81A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SYNC_OFFSET UNITYSDK_OFFSET(0xB5F8010)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F7F50)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayGameWeekViewModel_TypeDefinitionIndex = 74037;

	class ChenLingFesGameplayGameWeekViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>* _GameDays_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayGameWeekViewModel* Create(::Class_1_A3520E3BCB4F735C* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayGameWeekViewModel*(*)(::Class_1_A3520E3BCB4F735C*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_A3520E3BCB4F735C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A3520E3BCB4F735C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SYNC_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>* get_GameDays()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_GET_GAMEDAYS_OFFSET))(this);
		}

		::System::Void set_GameDays(::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SET_GAMEDAYS_OFFSET))(this, a1);
		}
	};
}
