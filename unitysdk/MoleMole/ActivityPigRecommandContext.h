#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_E43D938AEBE01021;
class Class_1_EADE0AA2443F1473;

#define MOLEMOLE_ACTIVITYPIGRECOMMANDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1107A280)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityPigRecommandContext_TypeDefinitionIndex = 79085;

	class ActivityPigRecommandContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_EADE0AA2443F1473* ShopData; // 0x28
		::Class_1_EADE0AA2443F1473* LoginInfoData; // 0x30
		::Class_1_E43D938AEBE01021* TabData; // 0x38

		::System::Void _ctor(::Class_1_E43D938AEBE01021* tabData, ::Class_1_EADE0AA2443F1473* loginInfoData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E43D938AEBE01021*, ::Class_1_EADE0AA2443F1473*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYPIGRECOMMANDCONTEXT__CTOR_OFFSET))(this, tabData, loginInfoData);
		}
	};
}
