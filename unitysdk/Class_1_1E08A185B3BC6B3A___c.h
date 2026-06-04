#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3524D4AB5573BC21.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1E08A185B3BC6B3A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C13D10)
#define CLASS_1_1E08A185B3BC6B3A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C13D50)
#define CLASS_1_1E08A185B3BC6B3A___C__GETBOMBCREATIONS_B__3_0_OFFSET UNITYSDK_OFFSET(0x18C13D60)

inline static constexpr unsigned int Class_1_1E08A185B3BC6B3A___c_TypeDefinitionIndex = 39667;

class Class_1_1E08A185B3BC6B3A___c : public ::System::Object
{
public:
	static ::Class_1_1E08A185B3BC6B3A___c** StaticGet___9()
	{
		return (::Class_1_1E08A185B3BC6B3A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E08A185B3BC6B3A___c_TypeDefinitionIndex)->GetStaticField(0x45C60);
	}
	static ::System::Comparison_1<::Struct_2_3524D4AB5573BC21>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Struct_2_3524D4AB5573BC21>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E08A185B3BC6B3A___c_TypeDefinitionIndex)->GetStaticField(0x45C68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetBombCreations_b__3_0(::Struct_2_3524D4AB5573BC21 a1, ::Struct_2_3524D4AB5573BC21 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_3524D4AB5573BC21, ::Struct_2_3524D4AB5573BC21))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A___C__GETBOMBCREATIONS_B__3_0_OFFSET))(this, a1, a2);
	}
};
