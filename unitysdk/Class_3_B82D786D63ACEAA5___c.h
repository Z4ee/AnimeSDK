#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_B82D786D63ACEAA5___C_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x145B6680)
#define CLASS_3_B82D786D63ACEAA5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145B6630)
#define CLASS_3_B82D786D63ACEAA5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145B6670)

inline static constexpr unsigned int Class_3_B82D786D63ACEAA5___c_TypeDefinitionIndex = 55829;

class Class_3_B82D786D63ACEAA5___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B82D786D63ACEAA5___c_TypeDefinitionIndex)->GetStaticField(0x464E0);
	}
	static ::Class_3_B82D786D63ACEAA5___c** StaticGet___9()
	{
		return (::Class_3_B82D786D63ACEAA5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B82D786D63ACEAA5___c_TypeDefinitionIndex)->GetStaticField(0x464E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B82D786D63ACEAA5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B82D786D63ACEAA5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B82D786D63ACEAA5___C_METHOD_1_82E992240300FB30_OFFSET))(this);
	}
};
