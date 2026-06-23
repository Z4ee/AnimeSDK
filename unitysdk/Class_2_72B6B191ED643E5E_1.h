#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_40A95B07B099F6CF.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_72B6B191ED643E5E_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11AE8770)
#define CLASS_2_72B6B191ED643E5E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE8760)

inline static constexpr unsigned int Class_2_72B6B191ED643E5E_1_TypeDefinitionIndex = 65573;

class Class_2_72B6B191ED643E5E_1 : public ::System::Attribute
{
public:
	::Enum_3_40A95B07B099F6CF Field_2_0; // 0x10

	::System::Void _ctor(::Enum_3_40A95B07B099F6CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_40A95B07B099F6CF))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E_1__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_40A95B07B099F6CF Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_40A95B07B099F6CF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
