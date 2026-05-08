#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_40A95B07B099F6CF.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_72B6B191ED643E5E_3_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11996500)
#define CLASS_2_72B6B191ED643E5E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x119964F0)

inline static constexpr unsigned int Class_2_72B6B191ED643E5E_3_TypeDefinitionIndex = 76630;

class Class_2_72B6B191ED643E5E_3 : public ::System::Attribute
{
public:
	::Enum_3_40A95B07B099F6CF Field_2_0; // 0x10

	::System::Void _ctor(::Enum_3_40A95B07B099F6CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_40A95B07B099F6CF))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E_3__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_40A95B07B099F6CF Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_40A95B07B099F6CF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E_3_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
