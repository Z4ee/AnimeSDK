#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7C7808F99F9B7208;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_7C7808F99F9B7208___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C03BC0)
#define CLASS_2_7C7808F99F9B7208___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C03C00)
#define CLASS_2_7C7808F99F9B7208___C___BINDLEVELVAR_B__11_0_OFFSET UNITYSDK_OFFSET(0x19C03C10)

inline static constexpr unsigned int Class_2_7C7808F99F9B7208___c_TypeDefinitionIndex = 76472;

class Class_2_7C7808F99F9B7208___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_2_7C7808F99F9B7208*, ::System::Int32, ::System::String*>** StaticGet___9__11_0()
	{
		return (::System::Action_3<::Class_2_7C7808F99F9B7208*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7C7808F99F9B7208___c_TypeDefinitionIndex)->GetStaticField(0x18C80);
	}
	static ::Class_2_7C7808F99F9B7208___c** StaticGet___9()
	{
		return (::Class_2_7C7808F99F9B7208___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7C7808F99F9B7208___c_TypeDefinitionIndex)->GetStaticField(0x18C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7C7808F99F9B7208___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C7808F99F9B7208___C__CTOR_OFFSET))(this);
	}

	::System::Void __BindLevelVar_b__11_0(::Class_2_7C7808F99F9B7208* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7C7808F99F9B7208*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7C7808F99F9B7208___C___BINDLEVELVAR_B__11_0_OFFSET))(this, a1, a2, a3);
	}
};
