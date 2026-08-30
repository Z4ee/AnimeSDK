#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_30B5FE4AA7ABAB8C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15467D50)

inline static constexpr unsigned int Class_1_30B5FE4AA7ABAB8C_1_TypeDefinitionIndex = 57521;

class Class_1_30B5FE4AA7ABAB8C_1 : public ::System::Object
{
public:
	::System::String* AOFHKOFDKDP; // 0x10
	::System::Boolean MOIMPGCEDFJ; // 0x18
	::System::Single CCAOGMEFNLB; // 0x1C
	::System::Single JFAGECNFHJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C_1__CTOR_OFFSET))(this);
	}
};
