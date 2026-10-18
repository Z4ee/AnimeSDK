#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_103;
class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD685E50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD685E40)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentActorViewModel_Factory_TypeDefinitionIndex = 79758;

	class MechCraftTalentActorViewModel_Factory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_103* _ActorConfigRepository; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* Create(::Class_1_E7C4615647E1695F* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*(*)(::PVOID, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
