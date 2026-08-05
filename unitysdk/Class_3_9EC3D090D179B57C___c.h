#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_78151B04E265D845;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9EC3D090D179B57C___C_METHOD_1_9D919ABA5FFAB235_OFFSET UNITYSDK_OFFSET(0x1A89F5F0)
#define CLASS_3_9EC3D090D179B57C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A89F5A0)
#define CLASS_3_9EC3D090D179B57C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89F5E0)

inline static constexpr unsigned int Class_3_9EC3D090D179B57C___c_TypeDefinitionIndex = 54408;

class Class_3_9EC3D090D179B57C___c : public ::System::Object
{
public:
	static ::Class_3_9EC3D090D179B57C___c** StaticGet___9()
	{
		return (::Class_3_9EC3D090D179B57C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9EC3D090D179B57C___c_TypeDefinitionIndex)->GetStaticField(0x416C0);
	}
	static ::System::Action_1<::Class_3_78151B04E265D845*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_78151B04E265D845*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9EC3D090D179B57C___c_TypeDefinitionIndex)->GetStaticField(0x416C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9EC3D090D179B57C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EC3D090D179B57C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9D919ABA5FFAB235(::Class_3_78151B04E265D845* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_78151B04E265D845*))((::PBYTE)hIl2Cpp + CLASS_3_9EC3D090D179B57C___C_METHOD_1_9D919ABA5FFAB235_OFFSET))(this, a1);
	}
};
