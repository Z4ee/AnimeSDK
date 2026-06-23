#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_A25C9820911581DF___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF7DA960)
#define CLASS_2_A25C9820911581DF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7DA910)
#define CLASS_2_A25C9820911581DF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7DA950)

inline static constexpr unsigned int Class_2_A25C9820911581DF___c_TypeDefinitionIndex = 41647;

class Class_2_A25C9820911581DF___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A25C9820911581DF___c_TypeDefinitionIndex)->GetStaticField(0x460E0);
	}
	static ::Class_2_A25C9820911581DF___c** StaticGet___9()
	{
		return (::Class_2_A25C9820911581DF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A25C9820911581DF___c_TypeDefinitionIndex)->GetStaticField(0x460E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A25C9820911581DF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A25C9820911581DF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A25C9820911581DF___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
