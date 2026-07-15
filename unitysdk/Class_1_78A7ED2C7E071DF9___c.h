#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8278C4CB5E7C57A4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_78A7ED2C7E071DF9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18181610)
#define CLASS_1_78A7ED2C7E071DF9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18181650)
#define CLASS_1_78A7ED2C7E071DF9___C__GETDELETEENTITYLISTSTRING_B__5_0_OFFSET UNITYSDK_OFFSET(0x18181680)
#define CLASS_1_78A7ED2C7E071DF9___C__GETUPDATEENTITYLISTSTRING_B__4_0_OFFSET UNITYSDK_OFFSET(0x18181660)

inline static constexpr unsigned int Class_1_78A7ED2C7E071DF9___c_TypeDefinitionIndex = 35364;

class Class_1_78A7ED2C7E071DF9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_8278C4CB5E7C57A4*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_1_8278C4CB5E7C57A4*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78A7ED2C7E071DF9___c_TypeDefinitionIndex)->GetStaticField(0x59AE0);
	}
	static ::System::Func_2<::Class_1_8278C4CB5E7C57A4*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_8278C4CB5E7C57A4*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78A7ED2C7E071DF9___c_TypeDefinitionIndex)->GetStaticField(0x59AE8);
	}
	static ::Class_1_78A7ED2C7E071DF9___c** StaticGet___9()
	{
		return (::Class_1_78A7ED2C7E071DF9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78A7ED2C7E071DF9___c_TypeDefinitionIndex)->GetStaticField(0x59AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetUpdateEntityListString_b__4_0(::Class_1_8278C4CB5E7C57A4* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8278C4CB5E7C57A4*))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9___C__GETUPDATEENTITYLISTSTRING_B__4_0_OFFSET))(this, a1);
	}

	::System::Int32 _GetDeleteEntityListString_b__5_0(::Class_1_8278C4CB5E7C57A4* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8278C4CB5E7C57A4*))((::PBYTE)hIl2Cpp + CLASS_1_78A7ED2C7E071DF9___C__GETDELETEENTITYLISTSTRING_B__5_0_OFFSET))(this, a1);
	}
};
