#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D7E802D2192B688B_2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D9E31DBDCCF0E950_3_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x11D76D50)
#define CLASS_1_D9E31DBDCCF0E950_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D76D40)
#define CLASS_1_D9E31DBDCCF0E950_3__CTOR_OFFSET UNITYSDK_OFFSET(0x11D76D30)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_3_TypeDefinitionIndex = 46603;

class Class_1_D9E31DBDCCF0E950_3 : public ::System::Object
{
public:
	static ::Struct_2_D7E802D2192B688B_2* StaticGet_Field_1_0()
	{
		return (::Struct_2_D7E802D2192B688B_2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9E31DBDCCF0E950_3_TypeDefinitionIndex)->GetStaticField(0xF850);
	}
	::Struct_2_D7E802D2192B688B_2 Field_1_1; // 0x10

	::System::Void _ctor(::Struct_2_D7E802D2192B688B_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D7E802D2192B688B_2))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3__CCTOR_OFFSET))();
	}

	::Struct_2_D7E802D2192B688B_2 Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_D7E802D2192B688B_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}
};
