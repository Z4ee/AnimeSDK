#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B19769B3B0092EA9;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_B2056CB2236A3B47___C_METHOD_1_3623D16279E93090_OFFSET UNITYSDK_OFFSET(0x14B35F50)
#define CLASS_1_B2056CB2236A3B47___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B35F00)
#define CLASS_1_B2056CB2236A3B47___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B35F40)

inline static constexpr unsigned int Class_1_B2056CB2236A3B47___c_TypeDefinitionIndex = 18158;

class Class_1_B2056CB2236A3B47___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_B19769B3B0092EA9*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::Class_2_B19769B3B0092EA9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2056CB2236A3B47___c_TypeDefinitionIndex)->GetStaticField(0x7A60);
	}
	static ::Class_1_B2056CB2236A3B47___c** StaticGet___9()
	{
		return (::Class_1_B2056CB2236A3B47___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2056CB2236A3B47___c_TypeDefinitionIndex)->GetStaticField(0x7A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2056CB2236A3B47___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2056CB2236A3B47___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3623D16279E93090(::Class_2_B19769B3B0092EA9* a1, ::Class_2_B19769B3B0092EA9* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B19769B3B0092EA9*, ::Class_2_B19769B3B0092EA9*))((::PBYTE)hIl2Cpp + CLASS_1_B2056CB2236A3B47___C_METHOD_1_3623D16279E93090_OFFSET))(this, a1, a2);
	}
};
