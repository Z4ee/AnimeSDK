#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_617;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4DBC407CA246A4CB___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x1BBF89D0)
#define CLASS_1_4DBC407CA246A4CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBF8980)
#define CLASS_1_4DBC407CA246A4CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF89C0)

inline static constexpr unsigned int Class_1_4DBC407CA246A4CB___c_TypeDefinitionIndex = 17511;

class Class_1_4DBC407CA246A4CB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_617*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_617*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DBC407CA246A4CB___c_TypeDefinitionIndex)->GetStaticField(0x77F0);
	}
	static ::Class_1_4DBC407CA246A4CB___c** StaticGet___9()
	{
		return (::Class_1_4DBC407CA246A4CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DBC407CA246A4CB___c_TypeDefinitionIndex)->GetStaticField(0x77F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DBC407CA246A4CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DBC407CA246A4CB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_617* a1, ::Class_2_208CC9941471731A_617* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_617*, ::Class_2_208CC9941471731A_617*))((::PBYTE)hIl2Cpp + CLASS_1_4DBC407CA246A4CB___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
