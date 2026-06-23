#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_18;
template <typename T> class Class_2_50F24C840F0D002C;

namespace MoleMole
{
	inline static constexpr unsigned int VideoshopScreenDialogContext_1_TypeDefinitionIndex = 41849;

	template <typename TItemClass>
	class VideoshopScreenDialogContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_18<TItemClass>* groupData; // 0x0
		::Class_2_50F24C840F0D002C<TItemClass>* sorter; // 0x0
	};
}
