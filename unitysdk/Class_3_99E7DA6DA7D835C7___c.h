#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_99E7DA6DA7D835C7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C56B6A0)
#define CLASS_3_99E7DA6DA7D835C7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B6E0)
#define CLASS_3_99E7DA6DA7D835C7___C__ITERATEAFFECTEDCELLS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C56B6F0)

inline static constexpr unsigned int Class_3_99E7DA6DA7D835C7___c_TypeDefinitionIndex = 41781;

class Class_3_99E7DA6DA7D835C7___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99E7DA6DA7D835C7___c_TypeDefinitionIndex)->GetStaticField(0x18280);
	}
	static ::Class_3_99E7DA6DA7D835C7___c** StaticGet___9()
	{
		return (::Class_3_99E7DA6DA7D835C7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99E7DA6DA7D835C7___c_TypeDefinitionIndex)->GetStaticField(0x18288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IterateAffectedCells_b__5_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7___C__ITERATEAFFECTEDCELLS_B__5_1_OFFSET))(this, a1);
	}
};
