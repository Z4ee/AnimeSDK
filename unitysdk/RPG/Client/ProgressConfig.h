#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B9B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ProgressConfig_TypeDefinitionIndex = 67957;

	class ProgressConfig : public ::System::Object
	{
	public:
		::System::Int32 Progress; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* PeriodIDList; // 0x18
		::System::Int32 DailyGoldGoal; // 0x20
		::System::Int32 TotalThumbGoal; // 0x24
		::System::Int32 BaseCustomer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
