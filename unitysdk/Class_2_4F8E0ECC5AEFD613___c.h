#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_4F8E0ECC5AEFD613___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x11729210)
#define CLASS_2_4F8E0ECC5AEFD613___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117291C0)
#define CLASS_2_4F8E0ECC5AEFD613___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11729200)

inline static constexpr unsigned int Class_2_4F8E0ECC5AEFD613___c_TypeDefinitionIndex = 60447;

class Class_2_4F8E0ECC5AEFD613___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4F8E0ECC5AEFD613___c_TypeDefinitionIndex)->GetStaticField(0x47870);
	}
	static ::Class_2_4F8E0ECC5AEFD613___c** StaticGet___9()
	{
		return (::Class_2_4F8E0ECC5AEFD613___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4F8E0ECC5AEFD613___c_TypeDefinitionIndex)->GetStaticField(0x47878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
