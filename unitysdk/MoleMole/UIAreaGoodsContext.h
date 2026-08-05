#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAREAGOODSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1600B040)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsContext_TypeDefinitionIndex = 81296;

	class UIAreaGoodsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 goodsID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
