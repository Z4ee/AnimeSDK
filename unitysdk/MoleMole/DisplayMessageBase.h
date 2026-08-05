#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/MessageTaskBase.h"

#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x19BC5D50)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x19BC5D60)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x19BC5DC0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x19BC5D40)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19BC5D30)
#define MOLEMOLE_DISPLAYMESSAGEBASE_SETPRIORITYWHENSORT_OFFSET UNITYSDK_OFFSET(0x19BC5E20)
#define MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BC5E70)
#define MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC5E60)

namespace MoleMole
{
	inline static constexpr unsigned int DisplayMessageBase_TypeDefinitionIndex = 69437;

	class DisplayMessageBase : public ::MoleMole::MessageTaskBase
	{
	public:
		::System::Int32 _messagePriority; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Enum_3_205B03D40B9BD873 matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_1_OFFSET))(this, matchPage);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void SetPriorityWhenSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_SETPRIORITYWHENSORT_OFFSET))(this);
		}
	};
}
