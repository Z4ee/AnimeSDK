#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E6FAF468E72DD000;

#define CLASS_1_EB1F0EB26D816EA6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154B0B00)
#define CLASS_1_EB1F0EB26D816EA6_EQUALS_OFFSET UNITYSDK_OFFSET(0x154B0E20)
#define CLASS_1_EB1F0EB26D816EA6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x154B0E30)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_2D4D274B6A22239A_OFFSET UNITYSDK_OFFSET(0x154B0BB0)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_356E07C40C3C3D55_OFFSET UNITYSDK_OFFSET(0x154B0DF0)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_3604BFE2C5097A63_OFFSET UNITYSDK_OFFSET(0x154B09D0)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_9D84870F000A08DB_OFFSET UNITYSDK_OFFSET(0x154B0ED0)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_F8612122A239F8A2_OFFSET UNITYSDK_OFFSET(0x154B10C0)
#define CLASS_1_EB1F0EB26D816EA6_METHOD_1_FB1818E2C869DF9D_OFFSET UNITYSDK_OFFSET(0x154B0F70)
#define CLASS_1_EB1F0EB26D816EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x154B08C0)

inline static constexpr unsigned int Class_1_EB1F0EB26D816EA6_TypeDefinitionIndex = 6939;

class Class_1_EB1F0EB26D816EA6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x5; // 0x0
	::Class_1_E6FAF468E72DD000* Field_1_1; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C

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

	::System::Void Method_1_3604BFE2C5097A63(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_3604BFE2C5097A63_OFFSET))(this, a1);
	}

	::System::Void Method_1_356E07C40C3C3D55(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB1F0EB26D816EA6_METHOD_1_356E07C40C3C3D55_OFFSET))(this, a1);
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
