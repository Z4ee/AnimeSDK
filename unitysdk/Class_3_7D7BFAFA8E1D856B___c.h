#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22AF1BA6B9A53CBF;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_3_7D7BFAFA8E1D856B___C_METHOD_1_B8D06555739F0F08_OFFSET UNITYSDK_OFFSET(0x18A92E20)
#define CLASS_3_7D7BFAFA8E1D856B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A92DD0)
#define CLASS_3_7D7BFAFA8E1D856B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A92E10)

inline static constexpr unsigned int Class_3_7D7BFAFA8E1D856B___c_TypeDefinitionIndex = 49185;

class Class_3_7D7BFAFA8E1D856B___c : public ::System::Object
{
public:
	static ::Class_3_7D7BFAFA8E1D856B___c** StaticGet___9()
	{
		return (::Class_3_7D7BFAFA8E1D856B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7D7BFAFA8E1D856B___c_TypeDefinitionIndex)->GetStaticField(0x46130);
	}
	static ::System::Converter_2<::Class_1_22AF1BA6B9A53CBF*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Converter_2<::Class_1_22AF1BA6B9A53CBF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7D7BFAFA8E1D856B___c_TypeDefinitionIndex)->GetStaticField(0x46138);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7D7BFAFA8E1D856B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D7BFAFA8E1D856B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_B8D06555739F0F08(::Class_1_22AF1BA6B9A53CBF* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_22AF1BA6B9A53CBF*))((::PBYTE)hIl2Cpp + CLASS_3_7D7BFAFA8E1D856B___C_METHOD_1_B8D06555739F0F08_OFFSET))(this, a1);
	}
};
