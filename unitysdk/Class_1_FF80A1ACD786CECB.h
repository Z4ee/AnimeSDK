#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x16BC6F70)
#define CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC6F60)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_TypeDefinitionIndex = 64049;

class Class_1_FF80A1ACD786CECB : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_TRIGGERACTION_OFFSET))(this);
	}
};
