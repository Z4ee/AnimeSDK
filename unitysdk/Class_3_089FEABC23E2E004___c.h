#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F0C8C4E9D0100466;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_089FEABC23E2E004___C_METHOD_1_42EA1C6AB8285F8F_OFFSET UNITYSDK_OFFSET(0x14E28A40)
#define CLASS_3_089FEABC23E2E004___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E289F0)
#define CLASS_3_089FEABC23E2E004___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E28A30)

inline static constexpr unsigned int Class_3_089FEABC23E2E004___c_TypeDefinitionIndex = 44404;

class Class_3_089FEABC23E2E004___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F0C8C4E9D0100466*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_F0C8C4E9D0100466*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_089FEABC23E2E004___c_TypeDefinitionIndex)->GetStaticField(0x41580);
	}
	static ::Class_3_089FEABC23E2E004___c** StaticGet___9()
	{
		return (::Class_3_089FEABC23E2E004___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_089FEABC23E2E004___c_TypeDefinitionIndex)->GetStaticField(0x41588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_089FEABC23E2E004___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_089FEABC23E2E004___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42EA1C6AB8285F8F(::Class_3_F0C8C4E9D0100466* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F0C8C4E9D0100466*))((::PBYTE)hIl2Cpp + CLASS_3_089FEABC23E2E004___C_METHOD_1_42EA1C6AB8285F8F_OFFSET))(this, a1);
	}
};
