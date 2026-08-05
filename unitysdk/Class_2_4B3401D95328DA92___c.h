#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A93187421020321F;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_4B3401D95328DA92___C_METHOD_1_59A910F7C9C2C757_OFFSET UNITYSDK_OFFSET(0x13E704C0)
#define CLASS_2_4B3401D95328DA92___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x13E70550)
#define CLASS_2_4B3401D95328DA92___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E70470)
#define CLASS_2_4B3401D95328DA92___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E704B0)

inline static constexpr unsigned int Class_2_4B3401D95328DA92___c_TypeDefinitionIndex = 68320;

class Class_2_4B3401D95328DA92___c : public ::System::Object
{
public:
	static ::Class_2_4B3401D95328DA92___c** StaticGet___9()
	{
		return (::Class_2_4B3401D95328DA92___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B3401D95328DA92___c_TypeDefinitionIndex)->GetStaticField(0x36070);
	}
	static ::System::Comparison_1<::Class_1_A93187421020321F*>** StaticGet___9__211_0()
	{
		return (::System::Comparison_1<::Class_1_A93187421020321F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B3401D95328DA92___c_TypeDefinitionIndex)->GetStaticField(0x36078);
	}
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__69_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B3401D95328DA92___c_TypeDefinitionIndex)->GetStaticField(0x36080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_59A910F7C9C2C757(::Class_1_A93187421020321F* a1, ::Class_1_A93187421020321F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A93187421020321F*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92___C_METHOD_1_59A910F7C9C2C757_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
