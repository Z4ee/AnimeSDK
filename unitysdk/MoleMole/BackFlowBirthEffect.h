#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_BACKFLOWBIRTHEFFECT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12AF5B10)
#define MOLEMOLE_BACKFLOWBIRTHEFFECT_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12AF5B20)
#define MOLEMOLE_BACKFLOWBIRTHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF5CA0)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowBirthEffect_TypeDefinitionIndex = 82260;

	class BackFlowBirthEffect : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWBIRTHEFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWBIRTHEFFECT_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWBIRTHEFFECT_ONPROCESS_OFFSET))(this);
		}
	};
}
