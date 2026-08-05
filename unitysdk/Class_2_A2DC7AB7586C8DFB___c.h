#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { template <typename T> class Func_1; }

#define CLASS_2_A2DC7AB7586C8DFB___C_METHOD_1_526FB29047B22B50_OFFSET UNITYSDK_OFFSET(0x10F748F0)
#define CLASS_2_A2DC7AB7586C8DFB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F748A0)
#define CLASS_2_A2DC7AB7586C8DFB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F748E0)

inline static constexpr unsigned int Class_2_A2DC7AB7586C8DFB___c_TypeDefinitionIndex = 85656;

class Class_2_A2DC7AB7586C8DFB___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_1_1EA8435E138F2E03*>** StaticGet___9__34_1()
	{
		return (::System::Func_1<::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2DC7AB7586C8DFB___c_TypeDefinitionIndex)->GetStaticField(0x3C490);
	}
	static ::Class_2_A2DC7AB7586C8DFB___c** StaticGet___9()
	{
		return (::Class_2_A2DC7AB7586C8DFB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2DC7AB7586C8DFB___c_TypeDefinitionIndex)->GetStaticField(0x3C498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A2DC7AB7586C8DFB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DC7AB7586C8DFB___C__CTOR_OFFSET))(this);
	}

	::Class_1_1EA8435E138F2E03* Method_1_526FB29047B22B50()
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DC7AB7586C8DFB___C_METHOD_1_526FB29047B22B50_OFFSET))(this);
	}
};
