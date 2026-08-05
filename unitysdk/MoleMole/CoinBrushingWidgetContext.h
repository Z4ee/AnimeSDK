#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_8A5136246E588D6D;

#define MOLEMOLE_COINBRUSHINGWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150E4900)

namespace MoleMole
{
	inline static constexpr unsigned int CoinBrushingWidgetContext_TypeDefinitionIndex = 68709;

	class CoinBrushingWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_8A5136246E588D6D* EntryData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COINBRUSHINGWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
