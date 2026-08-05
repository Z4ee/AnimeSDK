#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A4B8DC024BB982A7.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_577E3C5CB1B493C4___C_METHOD_1_CF25A8E334D2A4E0_OFFSET UNITYSDK_OFFSET(0x15904920)
#define CLASS_1_577E3C5CB1B493C4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159048D0)
#define CLASS_1_577E3C5CB1B493C4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15904910)

inline static constexpr unsigned int Class_1_577E3C5CB1B493C4___c_TypeDefinitionIndex = 73576;

class Class_1_577E3C5CB1B493C4___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Struct_2_A4B8DC024BB982A7>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Struct_2_A4B8DC024BB982A7>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577E3C5CB1B493C4___c_TypeDefinitionIndex)->GetStaticField(0x39650);
	}
	static ::Class_1_577E3C5CB1B493C4___c** StaticGet___9()
	{
		return (::Class_1_577E3C5CB1B493C4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577E3C5CB1B493C4___c_TypeDefinitionIndex)->GetStaticField(0x39658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_577E3C5CB1B493C4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577E3C5CB1B493C4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF25A8E334D2A4E0(::Struct_2_A4B8DC024BB982A7 a1, ::Struct_2_A4B8DC024BB982A7 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_A4B8DC024BB982A7, ::Struct_2_A4B8DC024BB982A7))((::PBYTE)hIl2Cpp + CLASS_1_577E3C5CB1B493C4___C_METHOD_1_CF25A8E334D2A4E0_OFFSET))(this, a1, a2);
	}
};
