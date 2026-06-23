#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5DBB48FEDDF4A707_METHOD_1_96E4292424C0D3B5_OFFSET UNITYSDK_OFFSET(0x11DCDEF0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_5DBB48FEDDF4A707__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCDEE0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_5DBB48FEDDF4A707_TypeDefinitionIndex = 82173;

class Class_1_8B550A61FC9DDA82_Class_1_5DBB48FEDDF4A707 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5DBB48FEDDF4A707__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96E4292424C0D3B5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_5DBB48FEDDF4A707_METHOD_1_96E4292424C0D3B5_OFFSET))(this, a1);
	}
};
