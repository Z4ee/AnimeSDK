#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927;
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_CLASS_1_DC7B7D3CB261C840_METHOD_1_8B365D9E71A53DB5_OFFSET UNITYSDK_OFFSET(0x15429230)
#define CLASS_2_3CC769D284A54927_CLASS_1_DC7B7D3CB261C840__CTOR_OFFSET UNITYSDK_OFFSET(0x15429220)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Class_1_DC7B7D3CB261C840_TypeDefinitionIndex = 76702;

class Class_2_3CC769D284A54927_Class_1_DC7B7D3CB261C840 : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* Field_1_3; // 0x10
	::Class_2_3CC769D284A54927* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Boolean Field_1_7; // 0x24
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_DC7B7D3CB261C840__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B365D9E71A53DB5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_DC7B7D3CB261C840_METHOD_1_8B365D9E71A53DB5_OFFSET))(this, a1);
	}
};
