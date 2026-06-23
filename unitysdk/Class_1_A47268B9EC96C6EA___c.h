#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4BCB31282727A3;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A47268B9EC96C6EA___C_METHOD_1_8043D7822E94644D_OFFSET UNITYSDK_OFFSET(0x179CE0F0)
#define CLASS_1_A47268B9EC96C6EA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179CE0A0)
#define CLASS_1_A47268B9EC96C6EA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179CE0E0)

inline static constexpr unsigned int Class_1_A47268B9EC96C6EA___c_TypeDefinitionIndex = 72990;

class Class_1_A47268B9EC96C6EA___c : public ::System::Object
{
public:
	static ::Class_1_A47268B9EC96C6EA___c** StaticGet___9()
	{
		return (::Class_1_A47268B9EC96C6EA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47268B9EC96C6EA___c_TypeDefinitionIndex)->GetStaticField(0x427A0);
	}
	static ::System::Comparison_1<::Class_1_BB4BCB31282727A3*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::Class_1_BB4BCB31282727A3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A47268B9EC96C6EA___c_TypeDefinitionIndex)->GetStaticField(0x427A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8043D7822E94644D(::Class_1_BB4BCB31282727A3* a1, ::Class_1_BB4BCB31282727A3* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_BB4BCB31282727A3*, ::Class_1_BB4BCB31282727A3*))((::PBYTE)hIl2Cpp + CLASS_1_A47268B9EC96C6EA___C_METHOD_1_8043D7822E94644D_OFFSET))(this, a1, a2);
	}
};
