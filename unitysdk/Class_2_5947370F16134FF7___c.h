#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_5947370F16134FF7___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x15BCF150)
#define CLASS_2_5947370F16134FF7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BCF100)
#define CLASS_2_5947370F16134FF7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCF140)

inline static constexpr unsigned int Class_2_5947370F16134FF7___c_TypeDefinitionIndex = 68790;

class Class_2_5947370F16134FF7___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5947370F16134FF7___c_TypeDefinitionIndex)->GetStaticField(0x4B730);
	}
	static ::Class_2_5947370F16134FF7___c** StaticGet___9()
	{
		return (::Class_2_5947370F16134FF7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5947370F16134FF7___c_TypeDefinitionIndex)->GetStaticField(0x4B738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5947370F16134FF7___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
