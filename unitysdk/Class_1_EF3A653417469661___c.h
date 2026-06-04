#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF3A653417469661;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_EF3A653417469661___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7767C0)
#define CLASS_1_EF3A653417469661___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA776800)
#define CLASS_1_EF3A653417469661___C___LISTENLEVELVAR_B__38_0_OFFSET UNITYSDK_OFFSET(0xA776810)

inline static constexpr unsigned int Class_1_EF3A653417469661___c_TypeDefinitionIndex = 71310;

class Class_1_EF3A653417469661___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_EF3A653417469661*, ::System::Int32, ::System::String*>** StaticGet___9__38_0()
	{
		return (::System::Action_3<::Class_1_EF3A653417469661*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF3A653417469661___c_TypeDefinitionIndex)->GetStaticField(0x60B00);
	}
	static ::Class_1_EF3A653417469661___c** StaticGet___9()
	{
		return (::Class_1_EF3A653417469661___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF3A653417469661___c_TypeDefinitionIndex)->GetStaticField(0x60B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__38_0(::Class_1_EF3A653417469661* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF3A653417469661*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF3A653417469661___C___LISTENLEVELVAR_B__38_0_OFFSET))(this, a1, a2, a3);
	}
};
