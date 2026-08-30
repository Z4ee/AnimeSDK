#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_3BD70AC0AEB18F06_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1CAD0490)
#define CLASS_3_3BD70AC0AEB18F06_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1CAD04D0)
#define CLASS_3_3BD70AC0AEB18F06__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD04C0)

inline static constexpr unsigned int Class_3_3BD70AC0AEB18F06_TypeDefinitionIndex = 22136;

class Class_3_3BD70AC0AEB18F06 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* MMMJJJOGBBI; // 0x18
	::System::Boolean GEOPPFCKACN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BD70AC0AEB18F06__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3BD70AC0AEB18F06*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3BD70AC0AEB18F06*&))((::PBYTE)hIl2Cpp + CLASS_3_3BD70AC0AEB18F06_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3BD70AC0AEB18F06* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3BD70AC0AEB18F06*))((::PBYTE)hIl2Cpp + CLASS_3_3BD70AC0AEB18F06_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
