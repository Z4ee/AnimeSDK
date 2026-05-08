#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_883E597458B91E77_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_56523FE351738797___C_METHOD_1_2F72BF7A3C3B9D2E_OFFSET UNITYSDK_OFFSET(0x1351C230)
#define CLASS_3_56523FE351738797___C_METHOD_1_3F7C19E36BC696B6_OFFSET UNITYSDK_OFFSET(0x1351C250)
#define CLASS_3_56523FE351738797___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1351C1E0)
#define CLASS_3_56523FE351738797___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1351C220)

inline static constexpr unsigned int Class_3_56523FE351738797___c_TypeDefinitionIndex = 45969;

class Class_3_56523FE351738797___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_883E597458B91E77_1*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_883E597458B91E77_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_56523FE351738797___c_TypeDefinitionIndex)->GetStaticField(0x342A0);
	}
	static ::Class_3_56523FE351738797___c** StaticGet___9()
	{
		return (::Class_3_56523FE351738797___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_56523FE351738797___c_TypeDefinitionIndex)->GetStaticField(0x342A8);
	}
	static ::System::Action_1<::Class_3_883E597458B91E77_1*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_883E597458B91E77_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_56523FE351738797___c_TypeDefinitionIndex)->GetStaticField(0x342B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F72BF7A3C3B9D2E(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797___C_METHOD_1_2F72BF7A3C3B9D2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F7C19E36BC696B6(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797___C_METHOD_1_3F7C19E36BC696B6_OFFSET))(this, a1);
	}
};
