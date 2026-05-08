#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A93187421020321F;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0244180E10798511___C_METHOD_1_59A910F7C9C2C757_OFFSET UNITYSDK_OFFSET(0x12B7F9C0)
#define CLASS_2_0244180E10798511___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x12B7F9B0)
#define CLASS_2_0244180E10798511___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B7F960)
#define CLASS_2_0244180E10798511___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7F9A0)

inline static constexpr unsigned int Class_2_0244180E10798511___c_TypeDefinitionIndex = 58086;

class Class_2_0244180E10798511___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__69_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0244180E10798511___c_TypeDefinitionIndex)->GetStaticField(0x3D410);
	}
	static ::Class_2_0244180E10798511___c** StaticGet___9()
	{
		return (::Class_2_0244180E10798511___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0244180E10798511___c_TypeDefinitionIndex)->GetStaticField(0x3D418);
	}
	static ::System::Comparison_1<::Class_1_A93187421020321F*>** StaticGet___9__198_0()
	{
		return (::System::Comparison_1<::Class_1_A93187421020321F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0244180E10798511___c_TypeDefinitionIndex)->GetStaticField(0x3D420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_59A910F7C9C2C757(::Class_1_A93187421020321F* a1, ::Class_1_A93187421020321F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A93187421020321F*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511___C_METHOD_1_59A910F7C9C2C757_OFFSET))(this, a1, a2);
	}
};
