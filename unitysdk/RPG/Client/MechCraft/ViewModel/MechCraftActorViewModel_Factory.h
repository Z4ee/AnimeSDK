#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_102;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD6770E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD677180)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftActorViewModel_Factory_TypeDefinitionIndex = 79657;

	class MechCraftActorViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* Create(::Class_0_16E4307DCC419505_102* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
