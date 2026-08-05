#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B19769B3B0092EA9;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_0A2BED24C23FE0BC___C_METHOD_1_3623D16279E93090_OFFSET UNITYSDK_OFFSET(0x1C248BC0)
#define CLASS_1_0A2BED24C23FE0BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C248B70)
#define CLASS_1_0A2BED24C23FE0BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C248BB0)

inline static constexpr unsigned int Class_1_0A2BED24C23FE0BC___c_TypeDefinitionIndex = 11919;

class Class_1_0A2BED24C23FE0BC___c : public ::System::Object
{
public:
	static ::Class_1_0A2BED24C23FE0BC___c** StaticGet___9()
	{
		return (::Class_1_0A2BED24C23FE0BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2BED24C23FE0BC___c_TypeDefinitionIndex)->GetStaticField(0x7A80);
	}
	static ::System::Comparison_1<::Class_2_B19769B3B0092EA9*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::Class_2_B19769B3B0092EA9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A2BED24C23FE0BC___c_TypeDefinitionIndex)->GetStaticField(0x7A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3623D16279E93090(::Class_2_B19769B3B0092EA9* a1, ::Class_2_B19769B3B0092EA9* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B19769B3B0092EA9*, ::Class_2_B19769B3B0092EA9*))((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC___C_METHOD_1_3623D16279E93090_OFFSET))(this, a1, a2);
	}
};
