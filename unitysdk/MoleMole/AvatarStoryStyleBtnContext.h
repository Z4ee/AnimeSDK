#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_98B056E8DC285A6E.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_8A5136246E588D6D;

#define MOLEMOLE_AVATARSTORYSTYLEBTNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x144BEF80)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarStoryStyleBtnContext_TypeDefinitionIndex = 66653;

	class AvatarStoryStyleBtnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_8A5136246E588D6D* data; // 0x28
		::System::Int32 ID; // 0x30
		::System::Int32 CurrencyID; // 0x34
		::Enum_3_98B056E8DC285A6E StyleType; // 0x38

		::System::Void _ctor(::Class_1_8A5136246E588D6D* data, ::System::Int32 currencyID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A5136246E588D6D*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSTORYSTYLEBTNCONTEXT__CTOR_OFFSET))(this, data, currencyID);
		}
	};
}
