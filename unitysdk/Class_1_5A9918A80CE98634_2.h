#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_5A9918A80CE98634_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D046C70)

inline static constexpr unsigned int Class_1_5A9918A80CE98634_2_TypeDefinitionIndex = 40934;

class Class_1_5A9918A80CE98634_2 : public ::System::Object
{
public:
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x10
	::System::UInt32 JCAEANLAGMB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A9918A80CE98634_2__CTOR_OFFSET))(this);
	}
};
