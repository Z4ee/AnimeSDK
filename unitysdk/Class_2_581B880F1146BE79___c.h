#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_581B880F1146BE79___C_METHOD_1_1C7D64D35595E176_OFFSET UNITYSDK_OFFSET(0x11AE9200)
#define CLASS_2_581B880F1146BE79___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AE91B0)
#define CLASS_2_581B880F1146BE79___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE91F0)

inline static constexpr unsigned int Class_2_581B880F1146BE79___c_TypeDefinitionIndex = 56517;

class Class_2_581B880F1146BE79___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Single>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_581B880F1146BE79___c_TypeDefinitionIndex)->GetStaticField(0x31AE0);
	}
	static ::Class_2_581B880F1146BE79___c** StaticGet___9()
	{
		return (::Class_2_581B880F1146BE79___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_581B880F1146BE79___c_TypeDefinitionIndex)->GetStaticField(0x31AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_581B880F1146BE79___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_581B880F1146BE79___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_1C7D64D35595E176(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_581B880F1146BE79___C_METHOD_1_1C7D64D35595E176_OFFSET))(this, a1);
	}
};
