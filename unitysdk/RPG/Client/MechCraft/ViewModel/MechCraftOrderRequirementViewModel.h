#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_C55AEAF8486FB7B9;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderMainTargetViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderOptionalConditionsViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xD67A4F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD67A5C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0xD67A350)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_OPTIONALCONDITIONS_OFFSET UNITYSDK_OFFSET(0xD67A420)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xD67A530)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_DESC_OFFSET UNITYSDK_OFFSET(0xD67A620)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0xD67A390)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_OPTIONALCONDITIONS_OFFSET UNITYSDK_OFFSET(0xD67A460)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD67A6A0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderRequirementViewModel_TypeDefinitionIndex = 79663;

	class MechCraftOrderRequirementViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* _MainTarget; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* _OptionalConditions; // 0x20
		::Class_1_C55AEAF8486FB7B9* _Currency; // 0x28
		::RPG::Client::TextID _Desc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* get_MainTarget()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_MAINTARGET_OFFSET))(this);
		}

		::System::Void set_MainTarget(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_MAINTARGET_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* get_OptionalConditions()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_OPTIONALCONDITIONS_OFFSET))(this);
		}

		::System::Void set_OptionalConditions(::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_OPTIONALCONDITIONS_OFFSET))(this, a1);
		}

		::Class_1_C55AEAF8486FB7B9* get_Currency()
		{
			return ((::Class_1_C55AEAF8486FB7B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_CURRENCY_OFFSET))(this);
		}

		::System::Void set_Currency(::Class_1_C55AEAF8486FB7B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C55AEAF8486FB7B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_CURRENCY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_DESC_OFFSET))(this, a1);
		}
	};
}
