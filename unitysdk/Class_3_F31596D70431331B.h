#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F2C8887B356DAA8E.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_2_5C2E5BEED576409A;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_F31596D70431331B_METHOD_3_C26B4032FC26C41F_OFFSET UNITYSDK_OFFSET(0x16DC5FB0)
#define CLASS_3_F31596D70431331B__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC63E0)

inline static constexpr unsigned int Class_3_F31596D70431331B_TypeDefinitionIndex = 49778;

class Class_3_F31596D70431331B : public ::Class_2_F2C8887B356DAA8E
{
public:
	static ::System::Int32* StaticGet_PEPNPCCEBOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F31596D70431331B_TypeDefinitionIndex)->GetStaticField(0x14610);
	}
	::UnityEngine::GameObject* EMPCGLEGLIE; // 0x58
	::Class_2_5C2E5BEED576409A* EMOCJFBHHPP; // 0x60
	::System::String* FADGEPEMDIJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F31596D70431331B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_C26B4032FC26C41F(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F31596D70431331B_METHOD_3_C26B4032FC26C41F_OFFSET))(this, a1, a2);
	}
};
