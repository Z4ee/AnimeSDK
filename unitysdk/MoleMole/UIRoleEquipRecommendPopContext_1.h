#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_18;
template <typename T> class Class_2_50F24C840F0D002C;

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopContext_1_TypeDefinitionIndex = 74784;

	template <typename TItemClass>
	class UIRoleEquipRecommendPopContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 avatarId; // 0x0
		::System::Int32 slotIndex; // 0x0
		::Class_0_16E4307DCC41950C_18<TItemClass>* suitGroupData; // 0x0
		::Class_0_16E4307DCC41950C_18<TItemClass>* basePropertyGroupData; // 0x0
		::Class_0_16E4307DCC41950C_18<TItemClass>* randPropertyGroupData; // 0x0
		::Class_2_50F24C840F0D002C<TItemClass>* sorter; // 0x0
	};
}
