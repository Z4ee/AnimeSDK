#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D9E31DBDCCF0E950_2_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x10AF3300)
#define CLASS_1_D9E31DBDCCF0E950_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AF32F0)
#define CLASS_1_D9E31DBDCCF0E950_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF32E0)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_2_TypeDefinitionIndex = 50685;

class Class_1_D9E31DBDCCF0E950_2 : public ::System::Object
{
public:
	static ::Struct_2_D7E802D2192B688B* StaticGet_Field_1_0()
	{
		return (::Struct_2_D7E802D2192B688B*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9E31DBDCCF0E950_2_TypeDefinitionIndex)->GetStaticField(0xE2B0);
	}
	::Struct_2_D7E802D2192B688B Field_1_1; // 0x10

	::System::Void _ctor(::Struct_2_D7E802D2192B688B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D7E802D2192B688B))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_2__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_2__CCTOR_OFFSET))();
	}

	::Struct_2_D7E802D2192B688B Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_D7E802D2192B688B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_2_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}
};
