#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_E3C2EEB93C1BBB05;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xD67A260)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xD67A2A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD67A330)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderOptionalConditionsViewModel_TypeDefinitionIndex = 79662;

	class MechCraftOrderOptionalConditionsViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_E3C2EEB93C1BBB05*>* _RewardItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_E3C2EEB93C1BBB05*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_E3C2EEB93C1BBB05*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::List_1<::Class_1_E3C2EEB93C1BBB05*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E3C2EEB93C1BBB05*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_SET_REWARDITEMS_OFFSET))(this, a1);
		}
	};
}
