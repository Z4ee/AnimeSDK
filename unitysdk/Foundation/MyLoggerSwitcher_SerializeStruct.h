#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLoggerSwitcher_MyLoggerSwitcherItem.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_MYLOGGERSWITCHER_SERIALIZESTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BE310)

namespace Foundation
{
	inline static constexpr unsigned int MyLoggerSwitcher_SerializeStruct_TypeDefinitionIndex = 8468;

	class MyLoggerSwitcher_SerializeStruct : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::MyLoggerSwitcher_MyLoggerSwitcherItem>* List; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::Foundation::MyLoggerSwitcher_MyLoggerSwitcherItem>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::MyLoggerSwitcher_MyLoggerSwitcherItem>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_SERIALIZESTRUCT__CTOR_OFFSET))(this, data);
		}
	};
}
