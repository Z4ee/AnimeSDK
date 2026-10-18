#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_1500;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_GET_REQUIREINFOS_OFFSET UNITYSDK_OFFSET(0xD683710)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_SET_REQUIREINFOS_OFFSET UNITYSDK_OFFSET(0xD683750)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6837E0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderMainTargetViewModel_TypeDefinitionIndex = 79662;

	class MechCraftOrderMainTargetViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1500*>* _RequireInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1500*>* get_RequireInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1500*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_GET_REQUIREINFOS_OFFSET))(this);
		}

		::System::Void set_RequireInfos(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1500*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1500*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_SET_REQUIREINFOS_OFFSET))(this, a1);
		}
	};
}
