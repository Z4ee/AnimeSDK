#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29356A79D0914A09;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_A118CD0AF5AE2517___C_METHOD_1_4C24F3B85D6DC348_OFFSET UNITYSDK_OFFSET(0x1D5C5530)
#define CLASS_2_A118CD0AF5AE2517___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5C54E0)
#define CLASS_2_A118CD0AF5AE2517___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5520)

inline static constexpr unsigned int Class_2_A118CD0AF5AE2517___c_TypeDefinitionIndex = 76288;

class Class_2_A118CD0AF5AE2517___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_29356A79D0914A09*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_1_29356A79D0914A09*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A118CD0AF5AE2517___c_TypeDefinitionIndex)->GetStaticField(0x34030);
	}
	static ::Class_2_A118CD0AF5AE2517___c** StaticGet___9()
	{
		return (::Class_2_A118CD0AF5AE2517___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A118CD0AF5AE2517___c_TypeDefinitionIndex)->GetStaticField(0x34038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A118CD0AF5AE2517___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A118CD0AF5AE2517___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C24F3B85D6DC348(::Class_1_29356A79D0914A09* a1, ::Class_1_29356A79D0914A09* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_29356A79D0914A09*, ::Class_1_29356A79D0914A09*))((::PBYTE)hIl2Cpp + CLASS_2_A118CD0AF5AE2517___C_METHOD_1_4C24F3B85D6DC348_OFFSET))(this, a1, a2);
	}
};
