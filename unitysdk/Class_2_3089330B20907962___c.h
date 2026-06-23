#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3089330B20907962___C_METHOD_1_08AE502C17DC3FBD_OFFSET UNITYSDK_OFFSET(0x1A0E2D30)
#define CLASS_2_3089330B20907962___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E2CE0)
#define CLASS_2_3089330B20907962___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E2D20)

inline static constexpr unsigned int Class_2_3089330B20907962___c_TypeDefinitionIndex = 60336;

class Class_2_3089330B20907962___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__10_2()
	{
		return (::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3089330B20907962___c_TypeDefinitionIndex)->GetStaticField(0x4B4D0);
	}
	static ::Class_2_3089330B20907962___c** StaticGet___9()
	{
		return (::Class_2_3089330B20907962___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3089330B20907962___c_TypeDefinitionIndex)->GetStaticField(0x4B4D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3089330B20907962___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3089330B20907962___C__CTOR_OFFSET))(this);
	}

	::Class_1_1EA8435E138F2E03* Method_1_08AE502C17DC3FBD(::System::Int32 a1)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3089330B20907962___C_METHOD_1_08AE502C17DC3FBD_OFFSET))(this, a1);
	}
};
