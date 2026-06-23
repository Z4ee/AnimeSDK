#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29B05041B716AB94;
namespace System { class Action; }

#define CLASS_1_29B05041B716AB94_CLASS_1_88E1DC7553674DBB_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x16260840)
#define CLASS_1_29B05041B716AB94_CLASS_1_88E1DC7553674DBB_METHOD_1_A6751F24578BF28B_OFFSET UNITYSDK_OFFSET(0x16260A60)
#define CLASS_1_29B05041B716AB94_CLASS_1_88E1DC7553674DBB__CTOR_OFFSET UNITYSDK_OFFSET(0x16260830)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_88E1DC7553674DBB_TypeDefinitionIndex = 50427;

class Class_1_29B05041B716AB94_Class_1_88E1DC7553674DBB : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_1_29B05041B716AB94* Field_1_0; // 0x18
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_88E1DC7553674DBB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_88E1DC7553674DBB_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_1_A6751F24578BF28B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_88E1DC7553674DBB_METHOD_1_A6751F24578BF28B_OFFSET))(this, a1);
	}
};
