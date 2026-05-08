#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F97B015544BE936B;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_7FCD6593F21A53C7___C_METHOD_1_171467BC4A2F0C56_OFFSET UNITYSDK_OFFSET(0x10B77090)
#define CLASS_3_7FCD6593F21A53C7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B77040)
#define CLASS_3_7FCD6593F21A53C7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B77080)

inline static constexpr unsigned int Class_3_7FCD6593F21A53C7___c_TypeDefinitionIndex = 57471;

class Class_3_7FCD6593F21A53C7___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F97B015544BE936B*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_3_F97B015544BE936B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7FCD6593F21A53C7___c_TypeDefinitionIndex)->GetStaticField(0x3FFC0);
	}
	static ::Class_3_7FCD6593F21A53C7___c** StaticGet___9()
	{
		return (::Class_3_7FCD6593F21A53C7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7FCD6593F21A53C7___c_TypeDefinitionIndex)->GetStaticField(0x3FFC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_171467BC4A2F0C56(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_7FCD6593F21A53C7___C_METHOD_1_171467BC4A2F0C56_OFFSET))(this, a1);
	}
};
