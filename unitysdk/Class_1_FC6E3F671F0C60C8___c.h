#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FC6E3F671F0C60C8___C_METHOD_1_826B01041FA05327_OFFSET UNITYSDK_OFFSET(0x14BCC060)
#define CLASS_1_FC6E3F671F0C60C8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BCC010)
#define CLASS_1_FC6E3F671F0C60C8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BCC050)

inline static constexpr unsigned int Class_1_FC6E3F671F0C60C8___c_TypeDefinitionIndex = 43565;

class Class_1_FC6E3F671F0C60C8___c : public ::System::Object
{
public:
	static ::Class_1_FC6E3F671F0C60C8___c** StaticGet___9()
	{
		return (::Class_1_FC6E3F671F0C60C8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC6E3F671F0C60C8___c_TypeDefinitionIndex)->GetStaticField(0x3D890);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC6E3F671F0C60C8___c_TypeDefinitionIndex)->GetStaticField(0x3D898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC6E3F671F0C60C8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC6E3F671F0C60C8___C__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_826B01041FA05327(::System::UInt32 a1)
	{
		return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FC6E3F671F0C60C8___C_METHOD_1_826B01041FA05327_OFFSET))(this, a1);
	}
};
