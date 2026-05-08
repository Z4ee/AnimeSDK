#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_547;

#define CLASS_1_7AB88D713F5121B3_METHOD_1_E1DFAFF6133A7AF9_OFFSET UNITYSDK_OFFSET(0x14E02040)
#define CLASS_1_7AB88D713F5121B3__CTOR_OFFSET UNITYSDK_OFFSET(0x14E02030)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_TypeDefinitionIndex = 67412;

class Class_1_7AB88D713F5121B3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_547* Method_1_E1DFAFF6133A7AF9()
	{
		return ((::Class_2_208CC9941471731A_547*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_METHOD_1_E1DFAFF6133A7AF9_OFFSET))(this);
	}
};
