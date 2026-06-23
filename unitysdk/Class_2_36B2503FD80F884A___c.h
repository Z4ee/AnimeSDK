#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_36B2503FD80F884A___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x145C7760)
#define CLASS_2_36B2503FD80F884A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145C7710)
#define CLASS_2_36B2503FD80F884A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145C7750)

inline static constexpr unsigned int Class_2_36B2503FD80F884A___c_TypeDefinitionIndex = 70826;

class Class_2_36B2503FD80F884A___c : public ::System::Object
{
public:
	static ::Class_2_36B2503FD80F884A___c** StaticGet___9()
	{
		return (::Class_2_36B2503FD80F884A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36B2503FD80F884A___c_TypeDefinitionIndex)->GetStaticField(0x39150);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36B2503FD80F884A___c_TypeDefinitionIndex)->GetStaticField(0x39158);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_36B2503FD80F884A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36B2503FD80F884A___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36B2503FD80F884A___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
