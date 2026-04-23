#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_405FB011A048A85A.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_2_5C2E5BEED576409A;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_47171E2F81FEA33B_METHOD_3_67BC5512FC0D5336_OFFSET UNITYSDK_OFFSET(0x9116CC0)
#define CLASS_3_47171E2F81FEA33B__CTOR_OFFSET UNITYSDK_OFFSET(0x91170D0)

inline static constexpr unsigned int Class_3_47171E2F81FEA33B_TypeDefinitionIndex = 45950;

class Class_3_47171E2F81FEA33B : public ::Class_2_405FB011A048A85A
{
public:
	static ::System::Int32* StaticGet_Field_3_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_47171E2F81FEA33B_TypeDefinitionIndex)->GetStaticField(0x10640);
	}
	::Class_2_5C2E5BEED576409A* Field_3_0; // 0x58
	::UnityEngine::GameObject* Field_3_1; // 0x60
	::System::String* Field_3_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47171E2F81FEA33B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_67BC5512FC0D5336(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47171E2F81FEA33B_METHOD_3_67BC5512FC0D5336_OFFSET))(this, a1, a2);
	}
};
