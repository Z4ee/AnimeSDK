#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ExitPerform/ExitPerformEvent.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9F8F7BD904611B66__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCC200)

inline static constexpr unsigned int Class_2_9F8F7BD904611B66_TypeDefinitionIndex = 85155;

class Class_2_9F8F7BD904611B66 : public ::MoleMole::ExitPerform::ExitPerformEvent
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ExitPerform::ExitPerformEvent*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F8F7BD904611B66__CTOR_OFFSET))(this);
	}
};
