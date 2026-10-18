#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

class Class_0_16E4307DCC419505_502;

#define CLASS_2_AB1B44FFC925BDF9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1595F510)
#define CLASS_2_AB1B44FFC925BDF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1595F580)

inline static constexpr unsigned int Class_2_AB1B44FFC925BDF9_TypeDefinitionIndex = 60875;

class Class_2_AB1B44FFC925BDF9 : public ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_502*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1B44FFC925BDF9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1B44FFC925BDF9_DISPOSE_OFFSET))(this);
	}
};
