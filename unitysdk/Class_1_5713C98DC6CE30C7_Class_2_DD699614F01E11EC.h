#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1.h"

namespace System { class String; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_2_DD699614F01E11EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8804C90)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_DD699614F01E11EC_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x8804CD0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_DD699614F01E11EC__CTOR_OFFSET UNITYSDK_OFFSET(0x88038F0)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_2_DD699614F01E11EC_TypeDefinitionIndex = 48764;

class Class_1_5713C98DC6CE30C7_Class_2_DD699614F01E11EC : public ::Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1
{
public:
	::System::Single Field_2_0; // 0x38
	::System::Single Field_2_1; // 0x3C

	::System::Void _ctor(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_DD699614F01E11EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_DD699614F01E11EC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_DD699614F01E11EC_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}
};
