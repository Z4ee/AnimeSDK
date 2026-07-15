#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

class Class_2_E450C4D97FC83888;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_443965D776E927BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19CB27E0)
#define CLASS_2_443965D776E927BD_METHOD_2_278DE3B6BE616E54_OFFSET UNITYSDK_OFFSET(0x19CB30C0)
#define CLASS_2_443965D776E927BD_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x19CB29B0)
#define CLASS_2_443965D776E927BD__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB2610)

inline static constexpr unsigned int Class_2_443965D776E927BD_TypeDefinitionIndex = 40039;

class Class_2_443965D776E927BD : public ::Class_1_5BE136E515AF9A61
{
public:
	::Class_2_E450C4D97FC83888* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_E450C4D97FC83888*>* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_7; // 0x44
	::System::Int32 Field_2_8; // 0x48
	::System::Int32 Field_2_9; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_278DE3B6BE616E54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD_METHOD_2_278DE3B6BE616E54_OFFSET))(this, a1);
	}
};
