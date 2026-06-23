#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_E93A0D7D10353941_METHOD_1_96E4292424C0D3B5_OFFSET UNITYSDK_OFFSET(0x1411E6B0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_E93A0D7D10353941__CTOR_OFFSET UNITYSDK_OFFSET(0x1411E6A0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_E93A0D7D10353941_TypeDefinitionIndex = 82201;

class Class_1_8B550A61FC9DDA82_Class_1_E93A0D7D10353941 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_E93A0D7D10353941__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96E4292424C0D3B5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_E93A0D7D10353941_METHOD_1_96E4292424C0D3B5_OFFSET))(this, a1);
	}
};
