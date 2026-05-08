#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_87F077FEEA3378CF___C_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x14DF0F50)
#define CLASS_1_87F077FEEA3378CF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DF0F00)
#define CLASS_1_87F077FEEA3378CF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF0F40)

inline static constexpr unsigned int Class_1_87F077FEEA3378CF___c_TypeDefinitionIndex = 81405;

class Class_1_87F077FEEA3378CF___c : public ::System::Object
{
public:
	static ::Class_1_87F077FEEA3378CF___c** StaticGet___9()
	{
		return (::Class_1_87F077FEEA3378CF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87F077FEEA3378CF___c_TypeDefinitionIndex)->GetStaticField(0x3B700);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87F077FEEA3378CF___c_TypeDefinitionIndex)->GetStaticField(0x3B708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87F077FEEA3378CF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F077FEEA3378CF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_87F077FEEA3378CF___C_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}
};
