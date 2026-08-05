#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_3A94B9BE4F7970B2;

#define MOLEMOLE_RABDATASTATWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x136E96C0)

namespace MoleMole
{
	inline static constexpr unsigned int RABDataStatWidgetContext_TypeDefinitionIndex = 62025;

	class RABDataStatWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_3A94B9BE4F7970B2* InLevelData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABDATASTATWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
