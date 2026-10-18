#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyEditItemViewModelBase.h"

class Class_0_16E4307DCC419505_132;

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEFFECTITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD67CE40)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronEffectItemViewModel_TypeDefinitionIndex = 79605;

	class MechCraftDiyMechatronEffectItemViewModel : public ::RPG::Client::MechCraft::ViewModel::MechCraftDiyEditItemViewModelBase
	{
	public:
		::System::Void _ctor(::Class_0_16E4307DCC419505_132* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEFFECTITEMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
