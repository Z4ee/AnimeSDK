#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6EF456A21AE85EEC_82;

#define MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150F9090)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaItemWidgetController_Context_TypeDefinitionIndex = 47943;

	class UIRABGachaItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_6EF456A21AE85EEC_82* result; // 0x28
		::System::Int32 poolId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
