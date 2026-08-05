#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_0EC4EF653AA0BDDB___C_METHOD_1_F36ECC94BB21B573_1_OFFSET UNITYSDK_OFFSET(0x18DE95F0)
#define CLASS_2_0EC4EF653AA0BDDB___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x18DE95E0)
#define CLASS_2_0EC4EF653AA0BDDB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DE9590)
#define CLASS_2_0EC4EF653AA0BDDB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE95D0)

inline static constexpr unsigned int Class_2_0EC4EF653AA0BDDB___c_TypeDefinitionIndex = 75829;

class Class_2_0EC4EF653AA0BDDB___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EC4EF653AA0BDDB___c_TypeDefinitionIndex)->GetStaticField(0x35890);
	}
	static ::Class_2_0EC4EF653AA0BDDB___c** StaticGet___9()
	{
		return (::Class_2_0EC4EF653AA0BDDB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EC4EF653AA0BDDB___c_TypeDefinitionIndex)->GetStaticField(0x35898);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EC4EF653AA0BDDB___c_TypeDefinitionIndex)->GetStaticField(0x358A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0EC4EF653AA0BDDB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EC4EF653AA0BDDB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0EC4EF653AA0BDDB___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F36ECC94BB21B573_1(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0EC4EF653AA0BDDB___C_METHOD_1_F36ECC94BB21B573_1_OFFSET))(this, a1);
	}
};
