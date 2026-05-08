#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B3CA1CF33FF72E1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10A28670)
#define CLASS_1_5B3CA1CF33FF72E1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A28610)

inline static constexpr unsigned int Class_1_5B3CA1CF33FF72E1_TypeDefinitionIndex = 44312;

class Class_1_5B3CA1CF33FF72E1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B3CA1CF33FF72E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B3CA1CF33FF72E1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
