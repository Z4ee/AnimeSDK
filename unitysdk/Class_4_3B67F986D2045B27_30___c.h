#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_3B67F986D2045B27_30___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x11B45450)
#define CLASS_4_3B67F986D2045B27_30___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B45400)
#define CLASS_4_3B67F986D2045B27_30___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B45440)

inline static constexpr unsigned int Class_4_3B67F986D2045B27_30___c_TypeDefinitionIndex = 81906;

class Class_4_3B67F986D2045B27_30___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_3B67F986D2045B27_30___c_TypeDefinitionIndex)->GetStaticField(0x40D30);
	}
	static ::Class_4_3B67F986D2045B27_30___c** StaticGet___9()
	{
		return (::Class_4_3B67F986D2045B27_30___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_3B67F986D2045B27_30___c_TypeDefinitionIndex)->GetStaticField(0x40D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_3B67F986D2045B27_30___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3B67F986D2045B27_30___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_3B67F986D2045B27_30___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
