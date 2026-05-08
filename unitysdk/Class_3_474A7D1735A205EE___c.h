#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_18D48E37FF85E25B;
class Class_3_683526F6289DAE8A;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_474A7D1735A205EE___C_METHOD_1_38E45A079CC50DD0_OFFSET UNITYSDK_OFFSET(0x11267C70)
#define CLASS_3_474A7D1735A205EE___C_METHOD_1_7D9EA4C4955AAF0F_OFFSET UNITYSDK_OFFSET(0x11267E50)
#define CLASS_3_474A7D1735A205EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11267C20)
#define CLASS_3_474A7D1735A205EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11267C60)

inline static constexpr unsigned int Class_3_474A7D1735A205EE___c_TypeDefinitionIndex = 66463;

class Class_3_474A7D1735A205EE___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_18D48E37FF85E25B*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_18D48E37FF85E25B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474A7D1735A205EE___c_TypeDefinitionIndex)->GetStaticField(0x33E90);
	}
	static ::Class_3_474A7D1735A205EE___c** StaticGet___9()
	{
		return (::Class_3_474A7D1735A205EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474A7D1735A205EE___c_TypeDefinitionIndex)->GetStaticField(0x33E98);
	}
	static ::System::Action_2<::Class_3_18D48E37FF85E25B*, ::Class_3_683526F6289DAE8A*>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::Class_3_18D48E37FF85E25B*, ::Class_3_683526F6289DAE8A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474A7D1735A205EE___c_TypeDefinitionIndex)->GetStaticField(0x33EA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_38E45A079CC50DD0(::Class_3_18D48E37FF85E25B* a1, ::Class_3_683526F6289DAE8A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_18D48E37FF85E25B*, ::Class_3_683526F6289DAE8A*))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE___C_METHOD_1_38E45A079CC50DD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D9EA4C4955AAF0F(::Class_3_18D48E37FF85E25B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_18D48E37FF85E25B*))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE___C_METHOD_1_7D9EA4C4955AAF0F_OFFSET))(this, a1);
	}
};
