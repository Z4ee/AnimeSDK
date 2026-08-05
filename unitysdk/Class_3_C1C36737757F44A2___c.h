#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1239;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_C1C36737757F44A2___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x1DF8CEA0)
#define CLASS_3_C1C36737757F44A2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8CE50)
#define CLASS_3_C1C36737757F44A2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8CE90)

inline static constexpr unsigned int Class_3_C1C36737757F44A2___c_TypeDefinitionIndex = 92214;

class Class_3_C1C36737757F44A2___c : public ::System::Object
{
public:
	static ::Class_3_C1C36737757F44A2___c** StaticGet___9()
	{
		return (::Class_3_C1C36737757F44A2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C1C36737757F44A2___c_TypeDefinitionIndex)->GetStaticField(0x51E40);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_1239*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_1239*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C1C36737757F44A2___c_TypeDefinitionIndex)->GetStaticField(0x51E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C1C36737757F44A2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1C36737757F44A2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_1239* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1239*))((::PBYTE)hIl2Cpp + CLASS_3_C1C36737757F44A2___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
