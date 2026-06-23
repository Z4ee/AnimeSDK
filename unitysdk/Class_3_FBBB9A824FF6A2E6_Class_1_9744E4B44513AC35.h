#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/System/Object.h"

class Class_3_620977F55CD7E401;
class Class_3_FBBB9A824FF6A2E6_Class_1_456A9D29EFE2BEA6;

#define CLASS_3_FBBB9A824FF6A2E6_CLASS_1_9744E4B44513AC35_METHOD_1_FFCC7D88694E544F_OFFSET UNITYSDK_OFFSET(0x133C90C0)
#define CLASS_3_FBBB9A824FF6A2E6_CLASS_1_9744E4B44513AC35__CTOR_OFFSET UNITYSDK_OFFSET(0x133C90B0)

inline static constexpr unsigned int Class_3_FBBB9A824FF6A2E6_Class_1_9744E4B44513AC35_TypeDefinitionIndex = 72401;

class Class_3_FBBB9A824FF6A2E6_Class_1_9744E4B44513AC35 : public ::System::Object
{
public:
	::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry Field_1_0; // 0x10
	::Class_3_FBBB9A824FF6A2E6_Class_1_456A9D29EFE2BEA6* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_CLASS_1_9744E4B44513AC35__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FFCC7D88694E544F(::System::Boolean a1, ::Class_3_620977F55CD7E401* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_620977F55CD7E401*))((::PBYTE)hIl2Cpp + CLASS_3_FBBB9A824FF6A2E6_CLASS_1_9744E4B44513AC35_METHOD_1_FFCC7D88694E544F_OFFSET))(this, a1, a2);
	}
};
