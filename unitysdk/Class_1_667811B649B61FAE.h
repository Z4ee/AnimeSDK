#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E6FAF468E72DD000;

#define CLASS_1_667811B649B61FAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A16810)
#define CLASS_1_667811B649B61FAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A16B10)
#define CLASS_1_667811B649B61FAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A16B20)
#define CLASS_1_667811B649B61FAE_METHOD_1_2D4D274B6A22239A_OFFSET UNITYSDK_OFFSET(0x17A16870)
#define CLASS_1_667811B649B61FAE_METHOD_1_41100C20EC6FF8B4_OFFSET UNITYSDK_OFFSET(0x17A166E0)
#define CLASS_1_667811B649B61FAE_METHOD_1_6130AE88E7E1BE22_OFFSET UNITYSDK_OFFSET(0x17A16920)
#define CLASS_1_667811B649B61FAE_METHOD_1_9D84870F000A08DB_OFFSET UNITYSDK_OFFSET(0x17A16BC0)
#define CLASS_1_667811B649B61FAE_METHOD_1_F8612122A239F8A2_OFFSET UNITYSDK_OFFSET(0x17A16DB0)
#define CLASS_1_667811B649B61FAE_METHOD_1_FB1818E2C869DF9D_OFFSET UNITYSDK_OFFSET(0x17A16C60)
#define CLASS_1_667811B649B61FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A16520)

inline static constexpr unsigned int Class_1_667811B649B61FAE_TypeDefinitionIndex = 8872;

class Class_1_667811B649B61FAE : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Class_1_E6FAF468E72DD000* Field_1_0; // 0x10
	::System::Single Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_2D4D274B6A22239A(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_METHOD_1_2D4D274B6A22239A_OFFSET))(this, a1);
	}

	::System::Void Method_1_41100C20EC6FF8B4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_METHOD_1_41100C20EC6FF8B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6130AE88E7E1BE22(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_METHOD_1_6130AE88E7E1BE22_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Single Method_1_9D84870F000A08DB(::Class_1_667811B649B61FAE* a1)
	{
		return ((::System::Single(*)(::Class_1_667811B649B61FAE*))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_METHOD_1_9D84870F000A08DB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FB1818E2C869DF9D(::Class_1_667811B649B61FAE* a1, ::Class_1_667811B649B61FAE* a2)
	{
		return ((::System::Boolean(*)(::Class_1_667811B649B61FAE*, ::Class_1_667811B649B61FAE*))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_METHOD_1_FB1818E2C869DF9D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F8612122A239F8A2(::Class_1_667811B649B61FAE* a1, ::Class_1_667811B649B61FAE* a2)
	{
		return ((::System::Boolean(*)(::Class_1_667811B649B61FAE*, ::Class_1_667811B649B61FAE*))((::PBYTE)hIl2Cpp + CLASS_1_667811B649B61FAE_METHOD_1_F8612122A239F8A2_OFFSET))(a1, a2);
	}
};
