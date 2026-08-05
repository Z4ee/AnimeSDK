#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5F852AAF145A7761;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A3DA8A1BA5F90835___C_METHOD_1_29048AA12B607F32_OFFSET UNITYSDK_OFFSET(0x109F13D0)
#define CLASS_3_A3DA8A1BA5F90835___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F1380)
#define CLASS_3_A3DA8A1BA5F90835___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109F13C0)

inline static constexpr unsigned int Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex = 78548;

class Class_3_A3DA8A1BA5F90835___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_5F852AAF145A7761*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_5F852AAF145A7761*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex)->GetStaticField(0x39570);
	}
	static ::Class_3_A3DA8A1BA5F90835___c** StaticGet___9()
	{
		return (::Class_3_A3DA8A1BA5F90835___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex)->GetStaticField(0x39578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29048AA12B607F32(::Class_3_5F852AAF145A7761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5F852AAF145A7761*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C_METHOD_1_29048AA12B607F32_OFFSET))(this, a1);
	}
};
