#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5CC301CBA0F9B06C.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_2_5C2E5BEED576409A;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_F31596D70431331B_METHOD_3_C26B4032FC26C41F_OFFSET UNITYSDK_OFFSET(0x1453E190)
#define CLASS_3_F31596D70431331B__CTOR_OFFSET UNITYSDK_OFFSET(0x1453E5C0)

inline static constexpr unsigned int Class_3_F31596D70431331B_TypeDefinitionIndex = 46533;

class Class_3_F31596D70431331B : public ::Class_2_5CC301CBA0F9B06C
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F31596D70431331B_TypeDefinitionIndex)->GetStaticField(0xEBF0);
	}
	::System::String* Field_3_1; // 0x58
	::Class_2_5C2E5BEED576409A* Field_3_2; // 0x60
	::UnityEngine::GameObject* Field_3_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F31596D70431331B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_C26B4032FC26C41F(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F31596D70431331B_METHOD_3_C26B4032FC26C41F_OFFSET))(this, a1, a2);
	}
};
