#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_673;
class Class_1_035AB873D4C20A7A;
class Class_1_35EF8ACF9B94E295;

#define CLASS_1_158C3D5AE415448F_2_METHOD_1_198B6C32D3241E9F_OFFSET UNITYSDK_OFFSET(0x96093D0)
#define CLASS_1_158C3D5AE415448F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9609340)

inline static constexpr unsigned int Class_1_158C3D5AE415448F_2_TypeDefinitionIndex = 57778;

class Class_1_158C3D5AE415448F_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_673* Field_1_1; // 0x10
	::Class_1_35EF8ACF9B94E295* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_35EF8ACF9B94E295* a1, ::Class_0_16E4307DCC419505_673* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35EF8ACF9B94E295*, ::Class_0_16E4307DCC419505_673*))((::PBYTE)hIl2Cpp + CLASS_1_158C3D5AE415448F_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_035AB873D4C20A7A* Method_1_198B6C32D3241E9F(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::Class_1_035AB873D4C20A7A*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_158C3D5AE415448F_2_METHOD_1_198B6C32D3241E9F_OFFSET))(this, a1);
	}
};
