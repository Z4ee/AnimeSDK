#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_806C38C50E9F30A7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_50A3D18812FAB5A5___C_METHOD_1_7C3B59534C16743B_OFFSET UNITYSDK_OFFSET(0x15AE9DC0)
#define CLASS_3_50A3D18812FAB5A5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AE9D70)
#define CLASS_3_50A3D18812FAB5A5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE9DB0)

inline static constexpr unsigned int Class_3_50A3D18812FAB5A5___c_TypeDefinitionIndex = 44436;

class Class_3_50A3D18812FAB5A5___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_806C38C50E9F30A7*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_806C38C50E9F30A7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_50A3D18812FAB5A5___c_TypeDefinitionIndex)->GetStaticField(0x47230);
	}
	static ::Class_3_50A3D18812FAB5A5___c** StaticGet___9()
	{
		return (::Class_3_50A3D18812FAB5A5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_50A3D18812FAB5A5___c_TypeDefinitionIndex)->GetStaticField(0x47238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_50A3D18812FAB5A5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50A3D18812FAB5A5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7C3B59534C16743B(::Class_3_806C38C50E9F30A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_806C38C50E9F30A7*))((::PBYTE)hIl2Cpp + CLASS_3_50A3D18812FAB5A5___C_METHOD_1_7C3B59534C16743B_OFFSET))(this, a1);
	}
};
