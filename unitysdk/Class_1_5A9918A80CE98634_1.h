#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_5A9918A80CE98634_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3B20)

inline static constexpr unsigned int Class_1_5A9918A80CE98634_1_TypeDefinitionIndex = 40933;

class Class_1_5A9918A80CE98634_1 : public ::System::Object
{
public:
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x10
	::System::UInt32 JCAEANLAGMB; // 0x18
	::System::UInt32 KBONLPELBKH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A9918A80CE98634_1__CTOR_OFFSET))(this);
	}
};
