#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_17;
template <typename T> class Class_2_9B614D02A0AA9182;

namespace MoleMole
{
	inline static constexpr unsigned int VideoshopScreenDialogContext_1_TypeDefinitionIndex = 57221;

	template <typename TItemClass>
	class VideoshopScreenDialogContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_17<TItemClass>* groupData; // 0x0
		::Class_2_9B614D02A0AA9182<TItemClass>* sorter; // 0x0
	};
}
