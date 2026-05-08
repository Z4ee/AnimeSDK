#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC419505_138;
template <typename T> class Class_2_A67757DE8DF470D1;

namespace MoleMole
{
	inline static constexpr unsigned int VideoshopScreenDialogContext_1_TypeDefinitionIndex = 65084;

	template <typename TItemClass>
	class VideoshopScreenDialogContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_138<TItemClass>* groupData; // 0x0
		::Class_2_A67757DE8DF470D1<TItemClass>* sorter; // 0x0
	};
}
