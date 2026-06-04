#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A123E9573CB8090;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_48C14AE8A403E8CE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C756A0)
#define CLASS_1_48C14AE8A403E8CE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C756D0)
#define CLASS_1_48C14AE8A403E8CE___C___MERGENAVNODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x10C756E0)

inline static constexpr unsigned int Class_1_48C14AE8A403E8CE___c_TypeDefinitionIndex = 69613;

class Class_1_48C14AE8A403E8CE___c : public ::System::Object
{
public:
	static ::Class_1_48C14AE8A403E8CE___c** StaticGet___9()
	{
		return (::Class_1_48C14AE8A403E8CE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48C14AE8A403E8CE___c_TypeDefinitionIndex)->GetStaticField(0x12B90);
	}
	static ::System::Comparison_1<::Class_1_3A123E9573CB8090*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_3A123E9573CB8090*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48C14AE8A403E8CE___c_TypeDefinitionIndex)->GetStaticField(0x12B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48C14AE8A403E8CE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48C14AE8A403E8CE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __MergeNavNode_b__16_0(::Class_1_3A123E9573CB8090* a1, ::Class_1_3A123E9573CB8090* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3A123E9573CB8090*, ::Class_1_3A123E9573CB8090*))((::PBYTE)hIl2Cpp + CLASS_1_48C14AE8A403E8CE___C___MERGENAVNODE_B__16_0_OFFSET))(this, a1, a2);
	}
};
