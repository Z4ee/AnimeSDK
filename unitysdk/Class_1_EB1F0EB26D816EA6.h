#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E6FAF468E72DD000;

#define CLASS_1_EB1F0EB26D816EA6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F13B40)
#define CLASS_1_EB1F0EB26D816EA6_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F13E60)
#define CLASS_1_EB1F0EB26D816EA6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F13E70)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_022E4F125AC955FA_OFFSET UNITYSDK_OFFSET(0x19F13E30)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_02C5073113969288_OFFSET UNITYSDK_OFFSET(0x19F13A10)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_2D4D274B6A22239A_OFFSET UNITYSDK_OFFSET(0x19F13BF0)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_9D84870F000A08DB_OFFSET UNITYSDK_OFFSET(0x19F13F10)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_F8612122A239F8A2_OFFSET UNITYSDK_OFFSET(0x19F14100)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_FB1818E2C869DF9D_OFFSET UNITYSDK_OFFSET(0x19F13FB0)
#define CLASS_1_EB1F0EB26D816EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x19F13900)

inline static constexpr unsigned int Class_1_EB1F0EB26D816EA6_TypeDefinitionIndex = 6933;

class Class_1_EB1F0EB26D816EA6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x5; // 0x0
	::Class_1_E6FAF468E72DD000* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_2D4D274B6A22239A(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_2D4D274B6A22239A_OFFSET))(this, a1);
	}

	::System::Void Method_1_02C5073113969288(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_02C5073113969288_OFFSET))(this, a1);
	}

	::System::Void Method_1_022E4F125AC955FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_022E4F125AC955FA_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Single Method_1_9D84870F000A08DB(::Class_1_EB1F0EB26D816EA6* a1)
	{
		return ((::System::Single(*)(::Class_1_EB1F0EB26D816EA6*))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_9D84870F000A08DB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FB1818E2C869DF9D(::Class_1_EB1F0EB26D816EA6* a1, ::Class_1_EB1F0EB26D816EA6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_EB1F0EB26D816EA6*, ::Class_1_EB1F0EB26D816EA6*))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_FB1818E2C869DF9D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F8612122A239F8A2(::Class_1_EB1F0EB26D816EA6* a1, ::Class_1_EB1F0EB26D816EA6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_EB1F0EB26D816EA6*, ::Class_1_EB1F0EB26D816EA6*))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_F8612122A239F8A2_OFFSET))(a1, a2);
	}
};
