#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_F8489D69ED2623E3___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x12ADA3E0)
#define CLASS_2_F8489D69ED2623E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12ADA390)
#define CLASS_2_F8489D69ED2623E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12ADA3D0)

inline static constexpr unsigned int Class_2_F8489D69ED2623E3___c_TypeDefinitionIndex = 67007;

class Class_2_F8489D69ED2623E3___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__7_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8489D69ED2623E3___c_TypeDefinitionIndex)->GetStaticField(0x39280);
	}
	static ::Class_2_F8489D69ED2623E3___c** StaticGet___9()
	{
		return (::Class_2_F8489D69ED2623E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8489D69ED2623E3___c_TypeDefinitionIndex)->GetStaticField(0x39288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8489D69ED2623E3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8489D69ED2623E3___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8489D69ED2623E3___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
