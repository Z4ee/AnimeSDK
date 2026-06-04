#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CA424A8DC9D172A;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_8CA424A8DC9D172A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3D7D70)
#define CLASS_1_8CA424A8DC9D172A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D7DB0)
#define CLASS_1_8CA424A8DC9D172A___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0xA3D7DC0)

inline static constexpr unsigned int Class_1_8CA424A8DC9D172A___c_TypeDefinitionIndex = 71601;

class Class_1_8CA424A8DC9D172A___c : public ::System::Object
{
public:
	static ::Class_1_8CA424A8DC9D172A___c** StaticGet___9()
	{
		return (::Class_1_8CA424A8DC9D172A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CA424A8DC9D172A___c_TypeDefinitionIndex)->GetStaticField(0x1BA80);
	}
	static ::System::Action_3<::Class_1_8CA424A8DC9D172A*, ::System::Int32, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_8CA424A8DC9D172A*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CA424A8DC9D172A___c_TypeDefinitionIndex)->GetStaticField(0x1BA88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CA424A8DC9D172A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA424A8DC9D172A___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__9_0(::Class_1_8CA424A8DC9D172A* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CA424A8DC9D172A*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CA424A8DC9D172A___C___LISTENLEVELVAR_B__9_0_OFFSET))(this, a1, a2, a3);
	}
};
