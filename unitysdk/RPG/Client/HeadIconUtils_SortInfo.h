#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_HEADICONUTILS_SORTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD8180)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconUtils_SortInfo_TypeDefinitionIndex = 60451;

	struct alignas(4) HeadIconUtils_SortInfo
	{
		::System::Boolean IsNew; // 0x10
		::System::UInt32 SortType; // 0x14

		::System::Void _ctor(::System::Boolean isNew, ::System::UInt32 sortType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_SORTINFO__CTOR_OFFSET))(this, isNew, sortType);
		}
	};
}
