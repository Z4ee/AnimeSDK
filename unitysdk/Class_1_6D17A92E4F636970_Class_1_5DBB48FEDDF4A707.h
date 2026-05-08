#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_5DBB48FEDDF4A707_METHOD_1_96E4292424C0D3B5_OFFSET UNITYSDK_OFFSET(0x1532CA40)
#define CLASS_1_6D17A92E4F636970_CLASS_1_5DBB48FEDDF4A707__CTOR_OFFSET UNITYSDK_OFFSET(0x1532CA30)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_5DBB48FEDDF4A707_TypeDefinitionIndex = 82537;

class Class_1_6D17A92E4F636970_Class_1_5DBB48FEDDF4A707 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_5DBB48FEDDF4A707__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96E4292424C0D3B5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_5DBB48FEDDF4A707_METHOD_1_96E4292424C0D3B5_OFFSET))(this, a1);
	}
};
