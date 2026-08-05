#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_18E612FFFCB4C387___C_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x148A8DC0)
#define CLASS_2_18E612FFFCB4C387___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148A8D70)
#define CLASS_2_18E612FFFCB4C387___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148A8DB0)

inline static constexpr unsigned int Class_2_18E612FFFCB4C387___c_TypeDefinitionIndex = 82676;

class Class_2_18E612FFFCB4C387___c : public ::System::Object
{
public:
	static ::Class_2_18E612FFFCB4C387___c** StaticGet___9()
	{
		return (::Class_2_18E612FFFCB4C387___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_18E612FFFCB4C387___c_TypeDefinitionIndex)->GetStaticField(0x35050);
	}
	static ::System::Func_1<::UnityEngine::Vector2>** StaticGet___9__21_7()
	{
		return (::System::Func_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_18E612FFFCB4C387___c_TypeDefinitionIndex)->GetStaticField(0x35058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_18E612FFFCB4C387___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18E612FFFCB4C387___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18E612FFFCB4C387___C_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}
};
