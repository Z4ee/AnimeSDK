#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D7E802D2192B688B_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D9E31DBDCCF0E950_4_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x13D12F00)
#define CLASS_1_D9E31DBDCCF0E950_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D12EF0)
#define CLASS_1_D9E31DBDCCF0E950_4__CTOR_OFFSET UNITYSDK_OFFSET(0x13D12EE0)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_4_TypeDefinitionIndex = 52724;

class Class_1_D9E31DBDCCF0E950_4 : public ::System::Object
{
public:
	static ::Struct_2_D7E802D2192B688B_1* StaticGet_Field_1_1()
	{
		return (::Struct_2_D7E802D2192B688B_1*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9E31DBDCCF0E950_4_TypeDefinitionIndex)->GetStaticField(0xFC50);
	}
	::Struct_2_D7E802D2192B688B_1 Field_1_0; // 0x10

	::System::Void _ctor(::Struct_2_D7E802D2192B688B_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D7E802D2192B688B_1))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_4__CCTOR_OFFSET))();
	}

	::Struct_2_D7E802D2192B688B_1 Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_D7E802D2192B688B_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_4_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}
};
