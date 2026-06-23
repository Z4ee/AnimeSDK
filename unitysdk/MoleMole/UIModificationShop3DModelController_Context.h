#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F03A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_Context_TypeDefinitionIndex = 48302;

	class UIModificationShop3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
