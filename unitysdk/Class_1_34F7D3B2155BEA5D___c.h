#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FB89C8AC7AFEDB7F_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_34F7D3B2155BEA5D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155AB2D0)
#define CLASS_1_34F7D3B2155BEA5D___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x155AB320)
#define CLASS_1_34F7D3B2155BEA5D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155AB310)

inline static constexpr unsigned int Class_1_34F7D3B2155BEA5D___c_TypeDefinitionIndex = 74911;

class Class_1_34F7D3B2155BEA5D___c : public ::System::Object
{
public:
	static ::Class_1_34F7D3B2155BEA5D___c** StaticGet___9()
	{
		return (::Class_1_34F7D3B2155BEA5D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34F7D3B2155BEA5D___c_TypeDefinitionIndex)->GetStaticField(0x50EA0);
	}
	static ::System::Func_2<::Class_1_FB89C8AC7AFEDB7F_2*, ::RPG::Client::TextID>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_FB89C8AC7AFEDB7F_2*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34F7D3B2155BEA5D___c_TypeDefinitionIndex)->GetStaticField(0x50EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID _Create_b__1_0(::Class_1_FB89C8AC7AFEDB7F_2* a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::Class_1_FB89C8AC7AFEDB7F_2*))((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D___C__CREATE_B__1_0_OFFSET))(this, a1);
	}
};
