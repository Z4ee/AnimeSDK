#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PERIODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDA5E6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PeriodConfig_TypeDefinitionIndex = 72671;

	class PeriodConfig : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::Int32 Duration; // 0x14
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TagWeight; // 0x18
		::System::Int32 EatAnythingWeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERIODCONFIG__CTOR_OFFSET))(this);
		}
	};
}
