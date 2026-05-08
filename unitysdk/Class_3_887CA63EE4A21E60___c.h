#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD10484486A703;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_887CA63EE4A21E60___C_METHOD_1_B87830109453658A_OFFSET UNITYSDK_OFFSET(0x111AEBB0)
#define CLASS_3_887CA63EE4A21E60___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x111AEB60)
#define CLASS_3_887CA63EE4A21E60___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111AEBA0)

inline static constexpr unsigned int Class_3_887CA63EE4A21E60___c_TypeDefinitionIndex = 61940;

class Class_3_887CA63EE4A21E60___c : public ::System::Object
{
public:
	static ::Class_3_887CA63EE4A21E60___c** StaticGet___9()
	{
		return (::Class_3_887CA63EE4A21E60___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_887CA63EE4A21E60___c_TypeDefinitionIndex)->GetStaticField(0x3DC50);
	}
	static ::System::Action_1<::Class_3_32CD10484486A703*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_32CD10484486A703*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_887CA63EE4A21E60___c_TypeDefinitionIndex)->GetStaticField(0x3DC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B87830109453658A(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60___C_METHOD_1_B87830109453658A_OFFSET))(this, a1);
	}
};
