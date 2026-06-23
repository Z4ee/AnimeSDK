#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_9D960B88876DE122;

#define MOLEMOLE_RABDATASTATWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1EAD0)

namespace MoleMole
{
	inline static constexpr unsigned int RABDataStatWidgetContext_TypeDefinitionIndex = 73647;

	class RABDataStatWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_9D960B88876DE122* InLevelData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABDATASTATWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
