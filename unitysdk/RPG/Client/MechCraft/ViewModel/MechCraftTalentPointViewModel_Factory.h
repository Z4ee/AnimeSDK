#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_59F064CC78086962;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD6883E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD688480)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentPointViewModel_Factory_TypeDefinitionIndex = 79779;

	class MechCraftTalentPointViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* Create(::Class_1_59F064CC78086962* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID, ::Class_1_59F064CC78086962*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
