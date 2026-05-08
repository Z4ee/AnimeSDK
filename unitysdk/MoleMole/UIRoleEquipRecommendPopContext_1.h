#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC419505_138;
template <typename T> class Class_2_A67757DE8DF470D1;

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopContext_1_TypeDefinitionIndex = 55285;

	template <typename TItemClass>
	class UIRoleEquipRecommendPopContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 avatarId; // 0x0
		::System::Int32 slotIndex; // 0x0
		::Class_0_16E4307DCC419505_138<TItemClass>* suitGroupData; // 0x0
		::Class_0_16E4307DCC419505_138<TItemClass>* basePropertyGroupData; // 0x0
		::Class_0_16E4307DCC419505_138<TItemClass>* randPropertyGroupData; // 0x0
		::Class_2_A67757DE8DF470D1<TItemClass>* sorter; // 0x0
	};
}
