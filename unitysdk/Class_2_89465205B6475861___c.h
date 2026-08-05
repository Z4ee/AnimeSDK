#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_89465205B6475861___C_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x17F27190)
#define CLASS_2_89465205B6475861___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F27140)
#define CLASS_2_89465205B6475861___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F27180)

inline static constexpr unsigned int Class_2_89465205B6475861___c_TypeDefinitionIndex = 78107;

class Class_2_89465205B6475861___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89465205B6475861___c_TypeDefinitionIndex)->GetStaticField(0x38E10);
	}
	static ::Class_2_89465205B6475861___c** StaticGet___9()
	{
		return (::Class_2_89465205B6475861___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89465205B6475861___c_TypeDefinitionIndex)->GetStaticField(0x38E18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_89465205B6475861___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89465205B6475861___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89465205B6475861___C_METHOD_1_8A4C6820E5F5715F_OFFSET))(this);
	}
};
